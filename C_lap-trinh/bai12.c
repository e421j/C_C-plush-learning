//Bài 6: Tính điểm trung bình (Ép kiểu int sang float)
//Viết chương trình nhập vào điểm 3 môn Toán, Lý, Hóa (là các số nguyên từ 0-10).
//•	Tính điểm trung bình (ĐTB) của 3 môn.
//•	Lưu ý quan trọng: Kết quả ĐTB phải là số thực chính xác (Ví dụ: Toán 1, Lý 2, Hóa 2 -> ĐTB phải là 1.67, không phải là 1.0).
//•	Sử dụng ép kiểu (float) hoặc (double) khi chia.
#include <stdio.h>
int main()  {
    // nguyên là int có định danh giá trị là %d
    int toan = 8;
    int ly = 5;
    int hoa = 9;
    float DTB =(float) (toan+ly+hoa)/3;
    printf(" diem trung binh 3 mon A00 la: %.2f",DTB);
    return 0;
}