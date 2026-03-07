//giá trị cơ bản thứ 2: float(số thực)
#include <stdio.h>
int main() {
    float a = 5.5;
    float b = 2.0;
    printf("Giá trị của a: %f\n", a);
    printf("Giá trị của b: %f\n", b);
    printf("Tổng của a và b: %f\n", a + b);
    printf("Hiệu của b và a: %f\n", b - a);
    printf("Tích của a và b: %f\n", a * b);
    printf("Thương của b chia a: %f\n", b / a);
    printf("Phần dư của a chia b: %f\n", (float)((int)a % (int)b));
// Phần dư chỉ áp dụng cho số nguyên, nên ta ép kiểu float về int trước khi tính phần dư

    return 0;
}