#include <stdio.h>

// Hàm sắp xếp giảm dần
void sapXepGiamDan(int arr[], int size) {
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {

            // Nếu phần tử sau lớn hơn phần tử trước
            if (arr[j] > arr[i]) {

                // Hoán đổi
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Hàm in mảng
void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau:\n");
    inMang(arr, size);

    // Gọi hàm sắp xếp
    sapXepGiamDan(arr, size);

    printf("\nMang sau khi sap xep giam dan:\n");
    inMang(arr, size);
    return 0;
}