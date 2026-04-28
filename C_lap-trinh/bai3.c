// Bài 3
// Định dạng chỉ thị (format specifier) trong C
// là cú pháp dùng để cho dât biết cách hiển thị dữ liệu khi in ra màn hình hoặc khi đọc dữ liệu từ bàn phím. Dưới đây là một số định dạng chỉ thị phổ biến trong C:
// %d: Dùng để hiển thị hoặc đọc một số nguyên (integer).
// %f: Dùng để hiển thị hoặc đọc một số thực (floating-point).
// %c: Dùng để hiển thị hoặc đọc một ký tự (character).
// %s: Dùng để hiển thị hoặc đọc một chuỗi ký tự (string).
// %lf: Dùng để hiển thị hoặc đọc một số thực có độ chính xác gấp đôi (double).
// Ví dụ sử dụng định dạng chỉ thị trong C:
#include <stdio.h>
#include <stdbool.h>
int main() {
    int x = 10;
    float y = 3.14;
    char c = 'A';
    char  start[]  = "Hello, World!";
    double z = 2.71828;
    bool thuc  = true;
    printf("Gia tri cua x: %d\n", x);
    printf("Gia tri cua y: %f\n", y);
    printf("Gia tri cua c: %c\n", c);
    printf("Gia tri cua start: %s\n", start);
    printf("Gia tri cua z: %lf\n", z);
    printf("Gia tri cua thuc: %d\n", thuc);
    return 0;
}