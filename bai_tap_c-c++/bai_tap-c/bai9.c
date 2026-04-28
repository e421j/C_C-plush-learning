//Bài 3: Ký tự và Mã ASCII (char)
//Viết chương trình nhập vào một ký tự bất kỳ từ bàn phím.
//•	In ra ký tự đó.
//•	In ra mã ASCII (dạng số nguyên) của ký tự đó.
//•	In ra ký tự kế tiếp trong bảng mã ASCII.
//•	Ví dụ: Nhập 'A' -> In ra: Ký tự 'A', Mã ASCII: 65, Kế tiếp: 'B'.
// kiểu dữ liệu là số nguyên là %d
// kiêu dữ liệu của char là %c
// khi đặt kiểu dữ liệu bằng char thì mình dùng dấu ''
#include <stdio.h>
int main() {
    char  c = 'A' ;
    char  r = 'B' ;
    printf(" ki tu dau tien va thu hai la: %c\n",c);
    printf(" ki tu dau tien va thu hai la: %c\n",r);
    printf("so dau tien cua c la:%d\n",c);
    printf("so dau tien cua c la:%d\n",r);
    return 0;

}