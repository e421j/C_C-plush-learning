//Bài 2. Bộ đếm ngày
//Nhập số ngày đã hoàn thành. In số ngày còn lại trong thử thách 30 ngày.
//Giả sử đầu vào nằm trong khoảng 0 đến 30.
#include <stdio.h>
int main(){
    int ngay_hoan_thanh, ngay_con_lai;

    printf("Nhap so ngay da hoan thanh (0-30): ");
    scanf("%d", &ngay_hoan_thanh);

    // Kiểm tra đầu vào hợp lệ
    if (!(ngay_hoan_thanh >= 1 && ngay_hoan_thanh <= 30)) {
        printf("So ngay da hoan thanh khong hop le. Vui long nhap lai.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    ngay_con_lai = 30 - ngay_hoan_thanh;

    printf("So ngay con lai trong thu thach 30 ngay: %d\n", ngay_con_lai);
    return 0;
}