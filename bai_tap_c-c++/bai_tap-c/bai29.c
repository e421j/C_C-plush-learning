//Bài 3 — Kiểm tra số
//Nhập n. Cho biết n chẵn/lẻ, âm/dương/0, có chia hết cho 2 không và có phải số nguyên tố không.

//Tách thành các hàm:
//int isEven(int n);
//int isPrime(int n);
#include <stdio.h>
int isEven(int a){ // kiểm tra giá trị có phải số chẵn/lẻ hay không
    if (a%2==0){
        return 1;
    } else {
        return 0;
    }

}

int isPrime(int b){ //kiểm tra có phải số nguyên tố hay không
    if (b<2){
        return 0;
    }
    for (int i =2;i < b; i++)
        if (b%i==0){
            return 0;
        }
        {
            return 1;
        }
}
int main(){
    int x;
    int y;

    printf("nhap gia tri x: ");
    scanf("%d",&x);

    printf("nhap gia tri y: ");
    scanf("%d",&y);

    if (isEven(x)){
        printf("\n%d la so chan va chia het cho 2\n",x);
    } else{
        printf("\n%d khong phai la so chan va khong chia het cho 2\n",x);
    }

    if (isPrime(y)){
        printf("\n %d la so nguyen to\n", y);
    } else {
        printf("\n %d khong phai la so nguyen to\n", y);
    }

    if (x,y >0){
        printf("\n %d va %d la so lon hon khong\n",x,y);
    } else if (y==0)
    {
        printf("\n  %d la so khong\n",y);
    }
    else if (x==0)
    {
        printf("\n  %d la so khong\n",x);
    }
    else{
        printf("\n%d va %d la so am\n",x,y);
    }
    
    return 0;
}