// giá trị cơ bản 1: int(số nguyên)
#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
// set giá trị của a và b
// rồi in ra giá trị của a và b
    printf("Giá trị của a: %d\n", a);
    printf("Giá trị của b: %d\n", b);
    printf("Tổng của a và b: %d\n", a + b);
// cộng giá trị của a và b rồi in ra kết quả
    printf("Hiệu của b và a: %d\n", b - a);
// trừ giá trị của a từ b rồi in ra kết quả
    printf("Tích của a và b: %d\n", a * b);
// nhân giá trị của a và b rồi in ra kết quả
    printf("Thương của b chia a: %d\n", b / a);
// chia giá trị của b cho a rồi in ra kết quả

    return 0;
}