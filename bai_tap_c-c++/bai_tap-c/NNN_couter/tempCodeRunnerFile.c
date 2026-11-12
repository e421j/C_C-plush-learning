//Bài 12. Nhật ký 7 ngày
//Dùng vòng lặp nhập trạng thái hoàn thành của 7 ngày (1 = hoàn thành, 0 = chưa hoàn thành).
//Đếm tổng số ngày hoàn thành.
#include <stdio.h>
int main() {
    int i, trangThai, tongSoNgayHoanThanh = 0;

    for(i = 1; i <= 7; i++) {
        printf("Nhap trang thai hoan thanh cho ngay %d (1 = hoan thanh, 0 = chua hoan thanh): ", i);
        scanf("%d", &trangThai);

        if(trangThai == 1) {
            tongSoNgayHoanThanh++;
        }
    }

    printf("Tong so ngay hoan thanh: %d\n", tongSoNgayHoanThanh);

    return 0;
}
//