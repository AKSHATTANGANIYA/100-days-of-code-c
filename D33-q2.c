/*Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>
int main() {
    int arr[100], n, i, j, newElement;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted (ascending) order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &newElement);
    for (i = 0; i < n; i++) {
        if (arr[i] > newElement) {
            break;
        }
    }
 for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    } 
       arr[i] = newElement;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}