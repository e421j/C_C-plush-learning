//giới thiệu về bản thân
#include <stdio.h>
int main() {
    char ten[50];
    int tuoi;
    char que_quan[50];

    printf("Nhap ten cua ban: ");
    fgets(ten, sizeof(ten), stdin);

    printf("Nhap tuoi cua ban: ");
    scanf("%d", &tuoi);
    getchar(); // Đọc ký tự newline còn lại sau scanf

    printf("Nhap que quan cua ban: ");
    fgets(que_quan, sizeof(que_quan), stdin);

    printf("\n--- Thong tin ca nhan ---\n");
    printf("Ten: %s", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Que quan: %s", que_quan);

    return 0;
}