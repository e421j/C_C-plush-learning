//Bài 1: Tính toán số học cơ bản (int)
//Viết chương trình yêu cầu người dùng nhập vào 2 số nguyên a và b.
//•	Thực hiện các phép tính: Cộng, Trừ, Nhân.
//•	Thực hiện phép Chia lấy phần nguyên (/) và Chia lấy phần dư (%).
//•	Yêu cầu: In kết quả ra màn hình rõ ràng.
// int sử dụng cho số nguyên (VD:1,2,3,4,...) hay có thể là (-1,-2,-3,-4,....)
#include <stdio.h>
int main() {
    int a = 23;
    int b = 2;
    float c = 3.3;
    float d = 2.3;// giá trị kiểu số thực
    
    printf("tong a + b = %d\n", a+b);// định dạng dữ liệu của int là %d
    printf("tich cua a*b = %d\n", a*b); // dấu nhân bên toán tử máy tính là "*"
    // để mà muốn xuống dòng trong c thì ta cần "\n"
    printf("hieu cua a-b = %d\n",a-b);
    printf("thuong cua c/d = %.1f\n",c/d);// dấu chia trong toán tử máy tính là "/"
    printf("chia lay phan du cua c  %d\n", a%b);// chia lấy phần dư trong toán tử là "%";LƯU Ý: khi dùng chia hết thì cần dùng giá trị đã gán là số nguyên không phải là số thực
    return 0;
}