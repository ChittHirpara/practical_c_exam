#include <stdio.h>

int main() {
    int arr[7] = {20, 32, 6, 7, 22, 47, 21};
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}

