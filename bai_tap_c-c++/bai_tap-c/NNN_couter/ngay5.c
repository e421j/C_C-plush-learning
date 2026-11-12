//Bài 5. Bảng trạng thái
//Nhập số ngày, điểm ý chí và XP. In một bảng trạng thái có tiêu đề và các dòng dữ liệu rõ ràng.
#include <stdio.h>

int main() {
    int so_ngay;
    float diem_y_chi, xp;

    printf("nhap so ngay: ");
    scanf("%d", &so_ngay);
    printf("nhap diem y chi: ");
    scanf("%f", &diem_y_chi);
    printf("nhap XP: ");
    scanf("%f", &xp);

    printf("\nBang trang thai:\n");
    printf("Ngay\tDiem y chi\tXP\n");// lệnh /t là dùng để dãn dòng trong cùng 1 hàng
    printf("%d\t%.2f\t\t%.2f\n", so_ngay, diem_y_chi, xp);

    return 0;
}