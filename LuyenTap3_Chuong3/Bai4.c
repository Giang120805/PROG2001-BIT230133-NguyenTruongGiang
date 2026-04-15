#include <stdio.h>

int main() {
    // --- Outer Block (Khối ngoài) ---
    int outer = 99;
    printf("Ben ngoai outer = %d\n", outer);

    {
        // --- Inner Block (Khối con) ---
        // Khối con có thể truy cập biến của khối cha chứa nó
        printf("Tu ben trong Inner = %d\n", outer);

        // Thử thay đổi giá trị từ bên trong
        outer = outer + 1;
    }

    // Kiểm tra lại giá trị sau khi khối con kết thúc
    printf("Sau khi ra khoi Inner Block: outer = %d\n", outer);

    return 0;
}