#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f_in, *f_out;
    char c;
    int count = 0;

    //  Mở file nguồn (file đã tạo ở bài 2)
    f_in = fopen("D:\\Test\\bai2.txt", "r");

    if (f_in == NULL) {
        printf("Khong mo duoc file nguon!\n");
        return 1;
    }

    //  Mở file đích để ghi kết quả
    f_out = fopen("D:\\Test\\ketqua.txt", "w");

    if (f_out == NULL) {
        printf("Khong mo duoc file ket qua!\n");
        fclose(f_in);
        return 1;
    }

    //  Đọc từng ký tự và đếm chữ cái
    while ((c = fgetc(f_in)) != EOF) {
        if (isalpha(c)) {
            count++;
        }
    }

    //  Ghi kết quả vào file mới
    fprintf(f_out, "So ky tu chu cai la: %d\n", count);

    //  Đóng file
    fclose(f_in);
    fclose(f_out);

    printf("Da dem xong va ghi ket qua vao file!\n");

    return 0;
}