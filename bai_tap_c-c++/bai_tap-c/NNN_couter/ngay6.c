//Bài 6. Kiểm tra số ngày
//Nhập số ngày hoàn thành. Nếu ngoài khoảng 0–30, báo dữ liệu không hợp lệ; ngược lại, in số ngày còn lại.
#include <stdio.h>
int main() {
    int so_ngay_hoan_thanh;
    printf("Nhap so ngay hoan thanh: ");
    scanf("%d", &so_ngay_hoan_thanh);

    if (so_ngay_hoan_thanh < 0 || so_ngay_hoan_thanh > 30) {
        printf("Du lieu khong hop le!\n");
    } else {
        int so_ngay_con_lai = 30 - so_ngay_hoan_thanh;
        printf("So ngay con lai: %d\n", so_ngay_con_lai);
    }

    return 0;
}