// Các phép tính đơn giản trong C
// Các phép tính đơn giản trong C bao gồm các phép toán số học cơ bản như cộng (+), trừ (-), nhân (*), chia (/), và phép toán phần dư (%). Ngoài ra, C cũng hỗ trợ các phép toán tăng (++) và giảm (--).
#include <stdio.h>
int main() {
    int a = 12, b = 5;
    int t = a + b; // Cộng
    int h = a - b; // Trừ
    int p = a * b; // Nhân
    float th = (float)(a) / b; // Chia
    float thu = (float)(a % b); // Phần dư
    printf("Tong: %d\n", t);
    printf("Hieu: %d\n", h);
    printf("Tich: %d\n", p);
    printf("Thuong: %.2f\n", th);
    printf("Phan du: %.2f\n", thu);
    return 0;
}