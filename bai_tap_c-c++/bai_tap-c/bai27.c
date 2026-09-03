//Bài 3 — Kiểm tra số
//Nhập n. Cho biết n chẵn/lẻ, âm/dương/0, có chia hết cho 3 không và có phải số nguyên tố không.

//Tách thành các hàm:
//int isEven(int n);
//int isPrime(int n);
#include <stdio.h>
int isEven(int a) {
    if (a%2==0){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int b;
    
    printf("nhap gia tri a: ");
    scanf("%d",&b);

    if (isEven(b)) {
        printf("chan");
    } else {
        printf("le");
    }

    return 0;
}