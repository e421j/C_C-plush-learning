//Bài 5: Kiểm tra đúng sai đơn giản (bool)
//Lưu ý: Cần thư viện <stdbool.h>.
//Viết chương trình nhập vào một số nguyên n.
//•	Khai báo một biến bool isPositive.
//•	Gán isPositive = true nếu n > 0, ngược lại gán false.
//•	Sử dụng biến bool này để in ra màn hình thông báo "So duong" hoặc "Khong phai so duong".
#include <stdio.h>
#include <stdbool.h>
int main() {
    bool a = true;
    int b = -2;// nhận giá trị số nguyên là 1 khác không là true còn số 0 là false
    printf("gia tri a la:%d\n",a);
    if (true>0) {
        printf("la so duong");
    }
    
    else{
      printf("la so am");  
    }
    
    return 0;
    
}
