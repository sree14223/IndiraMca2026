#include <stdio.h> 

int main() {
        int arr[] = {10,25,3,47,8,15};
        int n = 6;
        int key = 47;
        int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("element not found\n");
    }

    return 0;
}
