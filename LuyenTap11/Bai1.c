#include <stdio.h>

int main() {
    float diem;

    printf("Nhap diem (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!");
    } 
    else if (diem >= 9) {
        printf("Xep loai: Xuat sac");
    } 
    else if (diem >= 8) {
        printf("Xep loai: Gioi");
    } 
    else if (diem >= 6.5) {
        printf("Xep loai: Kha");
    } 
    else if (diem >= 5) {
        printf("Xep loai: Trung binh");
    } 
    else {
        printf("Xep loai: Yeu");
    }

    return 0;
}