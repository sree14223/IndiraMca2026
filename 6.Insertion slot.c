#include <stdio.h>

int main() {
    int arr[] = {29,10,14,37,13};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j;

        for (j = i - 1; j >= 0 && arr[j] > key; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
     printf("sorted array ");
     for (int i = 0; i < n; i++) {
         printf("%d",arr[i]);
     }
        printf("\n");
        
        return 0;

}