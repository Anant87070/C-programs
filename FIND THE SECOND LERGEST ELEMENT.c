#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements to find the second largest.\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            smax = max;   // previous max becomes second max
            max = arr[i]; // new max
        } else if(arr[i] > smax && arr[i] != max) {
            smax = arr[i]; // only update smax if it's less than max
        }
    }

    if(smax == INT_MIN) {
        printf("No second largest element exists (all elements may be equal).\n");
    } 
    else {
        printf("The second largest element is: %d\n", smax);
    }

    return 0;
}