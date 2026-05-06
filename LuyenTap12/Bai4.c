#include <stdio.h>

int timMin(int arr[], int size) {
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = timMin(arr, size);

    printf("Gia tri nho nhat trong mang la: %d", min);
    return 0;
}