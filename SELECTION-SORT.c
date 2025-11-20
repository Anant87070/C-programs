#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];  // array with user-defined size

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int position = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[position] > arr[j])
                position = j;
        }
        if (position != i) {
            int temp = arr[i];
            arr[i] = arr[position];
            arr[position] = temp;
        }
    }

    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}