//Bài 4. Tỉ lệ tiến trình
//Nhập số ngày đã hoàn thành từ 0 đến 30. Tính phần trăm tiến trình.
//Công thức: phần trăm = số ngày / 30.0 * 100.
//Yêu cầu: chú ý phép chia số thực va lam tron len.
#include <stdio.h>
#include <math.h>
int main() {
    int so_ngay_hoan_thanh;
    
    printf("nhap so ngay hoan thanh: ");
    scanf("%d",&so_ngay_hoan_thanh);

    if (so_ngay_hoan_thanh < 0 || so_ngay_hoan_thanh > 30) {
        printf("so ngay khong hop le");
        return 1;
    }
    float phan_tram = so_ngay_hoan_thanh / 30.0 * 100;
    phan_tram = round(phan_tram);

    printf("\nso ngay da hoan thanh: %d\n", so_ngay_hoan_thanh);
    printf("\nphan tram da hoan thanh: %.0f\n", phan_tram);

    return 0;
}
