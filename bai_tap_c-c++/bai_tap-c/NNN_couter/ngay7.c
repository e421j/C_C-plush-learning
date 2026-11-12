//Bài 7. Phân loại thành tích
//Nhập số ngày hoàn thành:
//- 0–6: Dữ vững tâm đạo
//- 7–14: Bước vào tu luyện 
//- 15–29: Đột phá cuối cùng
//- 30: Nhịn lọ đại đế
//Dùng if-else.
#include <stdio.h>
int main() {
    int so_ngay_hoan_thanh;
    printf("Nhap so ngay hoan thanh: ");
    scanf("%d", &so_ngay_hoan_thanh);

    if (so_ngay_hoan_thanh < 0 || so_ngay_hoan_thanh > 30) {
        printf("Du lieu khong hop le!\n");
    } else if (so_ngay_hoan_thanh <= 6) {
        printf("Du vung tam dao\n");
    } else if (so_ngay_hoan_thanh <= 14) {
        printf("Buoc vao tu luyen\n");
    } else if (so_ngay_hoan_thanh <= 29) {
        printf("Dot pha cuoi cung\n");
    } else { // so ngay hoan thanh = 30
        printf("Nhin lo dai de\n");
    }

    return 0;
}