//
//Bài 1. Hồ sơ người chơi
//Nhập tên người chơi (có thể dùng tên không dấu), tuổi và mục tiêu số ngày.
//In lại thông tin theo định dạng dễ đọc.
//Yêu cầu: printf, scanf, kiểu int và chuỗi ký tự.
#include <stdio.h>
#include <string.h>
int main() {
    int tuoi, ngay;
    char ten[50];

    printf("Nhap ten nguoi choi: ");
    fgets(ten, sizeof(ten), stdin);
    // Xóa ký tự newline nếu có
    ten[strcspn(ten, "\n")] = 0;

    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    printf("Nhap muc tieu so ngay: ");
    scanf("%d", &ngay);

    printf("\nThong tin nguoi choi:\n");
    printf("Ten: %s\n", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Muc tieu so ngay: %d\n", ngay);
    return 0;

}