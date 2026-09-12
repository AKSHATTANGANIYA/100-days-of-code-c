/*Insert an element in an array at a given position.*/
#include <stdio.h>
int main() {
    int arr[100], n, i, pos, newElement;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to insert the new element (0-based index): ");
    scanf("%d", &pos);
    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = newElement;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
