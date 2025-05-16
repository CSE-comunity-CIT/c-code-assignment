// Write a programme in C to implement linear search.
#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; 
    }
    return -1; 
}

int main() {
    int arr[100], n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search for: ");
    scanf("%d", &key);

    int index = linearSearch(arr, n, key);

    if (index != -1) printf("Element found at index %d\n", index);
    else printf("Element not found.\n");

    return 0;
}
