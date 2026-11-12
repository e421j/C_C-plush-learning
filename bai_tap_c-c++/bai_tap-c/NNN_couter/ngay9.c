//Bài 9. Kiểm tra nhiệm vụ
//Nhập hai giá trị dạng 0 hoặc 1: đã hoàn thành mục tiêu hôm nay và đã làm nhiệm vụ phụ.
//Dùng toán tử logic để xác định người chơi có hoàn thành ít nhất một nhiệm vụ hay không.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int hoanThanhMucTieu, lamNhiemVuPhu;
    bool coHoanThanhItNhatMotNhiemVu;

    printf("nhap gia tri cho muc tieu hom nay (0 or 1): ");
    scanf("%d", &hoanThanhMucTieu);

    printf("nhap gia tri cho nhiem vu phu (0 or 1): ");
    scanf("%d", &lamNhiemVuPhu);

    coHoanThanhItNhatMotNhiemVu = (hoanThanhMucTieu == 1) || (lamNhiemVuPhu == 1);

    if (coHoanThanhItNhatMotNhiemVu) {
        printf("da hoan thanh nhiem vu.\n");
    } else {
        printf("chua hoan thanh nhiem vu.\n");
    }

    return 0;
}