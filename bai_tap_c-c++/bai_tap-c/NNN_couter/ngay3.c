//Bài 3. Điểm ý chí
//Người chơi bắt đầu với 100 điểm ý chí. Nhập số điểm thưởng nhận được rồi in tổng điểm.
//Yêu cầu: dùng biến và phép toán số học.
#include <stdio.h>
int main() {
    int so_diem_y_chi = 100;
    int so_diem_thuong_nhan;

    printf("nhap so diem thuong: ");
    scanf("%d",&so_diem_thuong_nhan);

    if (so_diem_thuong_nhan <= 0){
        printf("so diem thuong khong hop le\n");
    return 1;
    }
    
    
    int tong_diem = so_diem_y_chi + so_diem_thuong_nhan;

    printf("tong diem la: %d",tong_diem);

    return 0;
}