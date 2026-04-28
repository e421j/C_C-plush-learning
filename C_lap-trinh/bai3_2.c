//Căn lề (width) trong C
// Căn lề (width) trong C là một phần của định dạng chỉ thị (format specifier) được sử dụng để xác định độ rộng của trường dữ liệu khi in
// ra màn hình
//nhập góc giá trị sau (%) là căn lề VD: %10d sẽ in một số nguyên với độ rộng 10 ký tự, nếu số nguyên có ít hơn 10 ký tự thì sẽ được căn lề phải và điền khoảng trắng ở bên trái. Nếu số nguyên có nhiều hơn 10 ký tự thì sẽ in đầy đủ mà không bị cắt bớt.
#include <stdio.h>
int main() {
    int x = 10;
    float y = 3.14;
    char c = 'A';
    char  start[]  = "Hello, World!";
    double z = 2.71828;
    printf("Gia tri cua x: %10d\n", x);
    printf("Gia tri cua y: %10f\n", y);
    printf("Gia tri cua c: %10c\n", c);
    printf("Gia tri cua start: %20s\n", start);
    printf("Gia tri cua z: %20lf\n", z);
    printf("giá trị của x: %-10d\n", x); // Căn lề trái
    return 0;
}