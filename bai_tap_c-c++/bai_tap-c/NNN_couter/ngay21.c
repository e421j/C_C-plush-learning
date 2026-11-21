//Bài 21. Hàm tính tiến trình
//Viết hàm nhận số ngày hoàn thành và trả về phần trăm tiến trình.
#include <stdio.h>

// Khai bao nguyen mau ham
float tinh_tien_trinh(int ngay);

int main() {
    int ngay_hoan_thanh;

    printf("Nhap so ngay hoan thanh: ");
    scanf("%d", &ngay_hoan_thanh);

    float tien_trinh = tinh_tien_trinh(ngay_hoan_thanh);

    printf("Tien trinh: %.2f%%\n", tien_trinh);

    return 0;
}

// Dinh nghia ham
float tinh_tien_trinh(int ngay) {
    return (ngay / 30.0) * 100;
}