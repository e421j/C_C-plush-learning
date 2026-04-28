//Bài 2: Hình tròn và số thực (float / double)
//Viết chương trình nhập vào bán kính r của một hình tròn (sử dụng kiểu double).
//	Khai báo hằng số PI = 3.14159.
//	Tính Chu vi C=2*pi*r và Diện tích S= pi*r*r
//	Yêu cầu: In kết quả làm tròn đến 2 chữ cái sau dấu phẩy (gợi ý: dùng %.2lf).
#include <stdio.h>
int main() {
    float PI = 3.13159;
    double R = 3.67;
    double C = (2*PI*R);
    double S = (PI*R*R);
    printf("so pi la:%f\n",PI);
    printf("Chu vi hinh tron la: %.2lf\n",C);
    printf("dien tich hinh tron la: %.2lf\n",S);
    return 0;
}
