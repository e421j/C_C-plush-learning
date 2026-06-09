//Bài 3: Tìm số lớn hơn
//Yêu cầu: Nhập 2 số nguyên và in ra số lớn hơn.
//Ví dụ:
//Input: 8 12
//Output: So lon hon la 12
#include <stdio.h>
int main() {
    int  so_1=0;
    int  so_2=0;// khai báo biến, giá trị ban đầu để nhập dữ liệu

    printf("nhap so 1:");
    scanf("%d", &so_1);

    printf("nhap so 2:");
    scanf("%d", &so_2);

    if(so_1>so_2){
        printf("so lon hon la: %d",so_1);
    }else if(so_1<so_2){
        printf("so lon hon la: %d",so_2);
    }else{
        printf("hai so bang nhau");
    }
    
    return 0;
}
