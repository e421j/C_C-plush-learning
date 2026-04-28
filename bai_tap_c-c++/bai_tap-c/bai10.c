//Bài 4: Giới thiệu bản thân (char[] và int)
//Viết chương trình nhập vào:
//1.	Họ và tên (kiểu chuỗi ký tự char[], chấp nhận có space).
//2.	Tuổi (kiểu int).
//3.	Chiều cao (kiểu float, đơn vị mét).
//•	Yêu cầu: In ra một câu chào hoàn chỉnh.
//•	Ví dụ: "Chao ban Nguyen Van A, 20 tuoi, cao 1.75m."
// kieu bien của chuôi là %s tức là string
// khong su dung lenh \n
#include <stdio.h>
int main() {
    char   c[]= "pham tien dung";
    int age=17;
    float chieu  = 1.68;



    printf("ten la:  %s,  ",c );
    printf("tuoi la: %d,", age);
    printf("chieu cao la %.2f.", chieu);
    return 0;

    
}