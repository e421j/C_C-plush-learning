//Bài 2: Tính diện tích hình chữ nhật
//Yêu cầu: Nhập chiều dài và chiều rộng bằng scanf(), tính diện tích.
//Ví dụ:
//Input: 5 4
//Output: Dien tich = 20
#include <stdio.h>
int main() {
    
    int chieu_dai=0;
    int chieu_rong=0;

    printf("nhap chieu dai :");
    scanf("%d", &chieu_dai);

    printf("nhap chieu rong:");
    scanf("%d",&chieu_rong);

     int s= chieu_dai*chieu_rong;

    printf("chieu dai:%d\n",chieu_dai);
    printf("chieu rong: %d\n",chieu_rong);
    printf("s hinh chua nhat bang: %d ",s);
    
    return 0;

     
}
