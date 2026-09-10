/*Search for an element in an array using linear search.*/
#include <stdio.h>
int main() {
    int arr[100], n, i, search_element, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &search_element);
    for(i = 0; i < n; i++) {
        if(arr[i] == search_element) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Element not found in the array.\n");
    }
    return 0;
}