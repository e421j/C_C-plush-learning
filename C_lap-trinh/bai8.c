// hàm bổ sung cho c
// hàm int isEven (int a);
// là hàm kiểm tra xem giá trị đã gán trong biến có phải số chăn hay không bằng cách chia lấy phần dư (a%2==0) nếu giá trị so bằng không thì kết quả in ra  1 nếu lẻ thì in ra kết quả là 0
#include <stdio.h>
int isEven (int a){ // hộp chứa giá trị (int a) và (int a) là giá trị rỗng
    if (a%2==0) {
        return 1; // trở về giá trị 1 là đúng (true)
    } else{
        return 0;// trở veef giá trị 0 là sai (false)
    }

}
int main() {
    int n;// giá trị sẽ cho vào giá trị rỗng 

    printf("nhap gia tri a: ");
    scanf("%d",&n);

    if(isEven(n)){ // giá trị chứa input đã cho vào trong hộp rỗng
        printf("là số chẵn");

    } else{
        printf("là số lẻ");
    }

    return 0;
}