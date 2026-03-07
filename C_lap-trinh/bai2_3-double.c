// giá trị cơ bản thứ 3: double(số thực độ chính xác cao)( 8bit+)
#include <stdio.h>
int main() {
    double a = 5.5555555555;
    double b = 2.0;
    printf("Giá trị của a: %lf\n", a);
    printf("Giá trị của b: %lf\n", b);
    printf("Tổng của a và b: %lf\n", a + b);
    printf("Hiệu của b và a: %lf\n", b - a);
    printf("Tích của a và b: %lf\n", a * b);
    printf("Thương của b chia a: %lf\n", b / a);
    printf("Phần dư của a chia b: %lf\n", (double)((int)a % (int)b));
    // Phần dư chỉ áp dụng cho số nguyên, nên ta ép kiểu double về int trước khi tính phần dư
    printf("Giá trị của a với 10 chữ số thập phân: %.10lf\n", a);
    // In ra giá trị của a với 10 chữ số thập phân
    return 0;
}