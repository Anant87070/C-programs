// #include<stdio.h>
// int main(){
//     int c, first, last, middle, n, search, array[100];
//     printf("Enter number of elements\n");
//     scanf("%d",&n);
//     printf("Enter %d integers\n", n);
//     for ( c = 0 ; c < n ; c++ )
//         scanf("%d",&array[c]);
//     printf("Enter value to find\n");
//     scanf("%d",&search);
//     first = 0;
//     last = n - 1;
//     middle = (first+last)/2;
//     while( first <= last )
//     {
//         if ( array[middle] < search )
//             first = middle + 1;
//         else if ( array[middle] == search )
//         {
//             printf("%d found at location %d.\n", search, middle+1);
//             break;
//         }
//         else
//             last = middle - 1;
//         middle = (first + last)/2;
//     }
//     if ( first > last )
//         printf("Not found! %d is not present in the list.\n", search);
//     return 0;
// }




#include <stdio.h>

int main() {
    int n, search;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];

    // Input array elements
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    // Sort the array in ascending order using simple bubble sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Ask for the value to search
    printf("Enter value to find: ");
    scanf("%d", &search);

    // Binary search
    int first = 0, last = n - 1, middle;
    while(first <= last) {
        middle = (first + last) / 2;
        if(array[middle] < search)
            first = middle + 1;
        else if(array[middle] == search) {
            printf("%d found at position %d.\n", search, middle + 1);
            return 0;
        } else
            last = middle - 1;
    }

    // If not found
    printf("Not found! %d is not present in the list.\n", search);
    return 0;
}