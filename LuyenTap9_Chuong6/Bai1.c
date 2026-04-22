#include <stdio.h>

int main() {
    FILE *f;

    //  Tạo file trong ổ D
    f = fopen("D:\\Test\\file_o_D.txt", "w");

    if (f == NULL) {
        printf("Khong tao duoc file trong o D!\n");
    } else {
        fprintf(f, "Day la file trong thu muc o D.\n");
        fclose(f);
        printf("Da tao file trong o D thanh cong!\n");
    }

    return 0;
}