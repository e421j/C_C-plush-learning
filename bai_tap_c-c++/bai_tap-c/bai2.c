//tính toán số học cơ bản(cộng, trừ, nhân, chia) của hai số nguyên a và b nhập từ bàn phím)
#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient;

    if (b != 0) {
        quotient = (float)a / b;
        printf("Chia: %d / %d = %.2f\n", a, b, quotient);
    } else {
        printf("Chia: Khong the chia cho 0\n");
    }

    printf("Cong: %d + %d = %d\n", a, b, sum);
    printf("Tru: %d - %d = %d\n", a, b, difference);
    printf("Nhan: %d * %d = %d\n", a, b, product);

    return 0;
}