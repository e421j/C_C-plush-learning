//thử thách  chỉ mua đồ với số tiền chẵn
//sử dụng (int isEven(int a))
#include <stdio.h>
int isEven (int a){
    if (a%2==0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int gia1;
    int gia2;

    printf("nhap gia 1: ");
    scanf("%d",&gia1);

    printf("nhap gia 2: ");
    scanf("%d",&gia2);

    int tong = gia1+gia2;

    if (isEven(tong)){
        printf("gia dat yeu cau");
    } else{
        printf("gia khong dat yeu cau");
    }

    return 0;
}
