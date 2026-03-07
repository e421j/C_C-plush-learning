//kiểm tra đúng hay sai của một phát biểu nhập từ bàn phím
#include <stdio.h>
#include <stdbool.h>
int main() {
    bool phat_bieu;
    int input;
    printf("Nhap 1 de bieu thi DUNG, 0 de bieu thi SAI: sữa là thức ăn tốt nhất cho trẻ nhỏ\n");
    scanf("%d", &input);
    if (input == 1) {
        printf("Phat bieu: DUNG\n");
        phat_bieu = true;
    } else if (input == 0) {
        printf("Phat bieu: SAI\n");
        phat_bieu = false;
    } else {
        printf("Gia tri nhap khong hop le. Vui long nhap 1 hoac 0.\n");
        return 1;
    }
    return 0;
}