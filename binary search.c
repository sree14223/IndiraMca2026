#include <stdio.h>

int main() {
    int arr[] = { 3,8,10,15,25,47,60};
    int n = 7;
    int key = 25;
    int low = 0, high = n -1;
    int found = 0;

    while (low <= high) {
        int mid = (low + high) /2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else { 
            high = mid - 1;
        }
    }

    if (!found) {
        printf("element not found\n");
    }

    return 0;
}

