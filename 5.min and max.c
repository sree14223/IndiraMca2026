#include <stdio.h>

int main() {
     int arr[] = {29,10,47,37,13};
     int n = 5;

     int min = arr[0];
     int max = arr[0];
     for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
     }
    
     printf("minimun: %d\n", min);
     printf("maximum: %d\n", max);

     return 0;
}