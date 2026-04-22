#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f_in, *f_out;
    char c;
    int count = 0;

    //  Mở file nguồn
    f_in = fopen("D:\\Test\\bai2.txt", "r");

    if (f_in == NULL) {
        printf("Khong mo duoc file nguon!\n");
        return 1;
    }

    //  Mở file kết quả
    f_out = fopen("D:\\Test\\ketqua_so.txt", "w");

    if (f_out == NULL) {
        printf("Khong mo duoc file ket qua!\n");
        fclose(f_in);
        return 1;
    }

    //  Đọc từng ký tự và đếm chữ số
    while ((c = fgetc(f_in)) != EOF) {
        if (isdigit(c)) {
            count++;
        }
    }

    //  Ghi kết quả
    fprintf(f_out, "So ky tu la chu so: %d\n", count);

    //  Đóng file
    fclose(f_in);
    fclose(f_out);

    printf("Da dem xong chu so va ghi file!\n");

    return 0;
}