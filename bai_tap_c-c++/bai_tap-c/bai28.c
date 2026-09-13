// bài toán tính tổng 2 số nguyên để tổng 2 số nguyên là số nguyên tố
#include <stdio.h>
int isPrime(int a){
    if ( a<2) {
        return 0;
    }
for (int i = 2; i <a;i++)
    if (a%i==0){
        return 0;
    }
    {
        return 1;
    }
} 
int main() {
    int n;
    int b;

    printf("nhap n: ");
    scanf("%d",&n);

    printf("nhap b: ");
    scanf("%d", &b);

    int tong = n + b;

    if (isPrime(tong)){
        printf("tong cua 2 gia tri n va b : %d la so nguyen to",tong);
    } else {
        printf("tong cua  2 gia tri n va b %d khong phai la so nguyen to", tong);
    }
    return 0;
}