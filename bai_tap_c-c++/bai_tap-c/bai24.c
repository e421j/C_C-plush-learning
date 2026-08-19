//Bài 1 — Phân tích kiểu dữ liệu
//Khai báo biến phù hợp để lưu:
// Tuổi
 //Điểm trung bình
 //Một ký tự
 //Họ tên
 //Số tiền
 //Trạng thái true/false
 //Một số nguyên rất lớn
//Sau đó in toàn bộ ra màn hình.
//Yêu cầu sử dụng: int, float, double, char, char[], bool.
#include <stdio.h>
#include <stdbool.h>
int main() {
    int Age = 18;
    float diem_TB = 7.5;
    double so_tien = 1.500;
    char A = '$';
    char full [] = "Pham Tien  Dung";
    bool f1 = false;

    printf("so tuoi: %d\n",Age); 
    printf("diem TB: %f\n", diem_TB);
    printf("so tien: %.2lf\n", so_tien);
    printf("ki hieu: %c\n", A);
    printf("ten: %s\n",full);
    printf("gia tri true or false: %d", f1);


    return 0;



}

