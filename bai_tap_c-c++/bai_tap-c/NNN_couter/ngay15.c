//Bài 15. Nhập dữ liệu hợp lệ
//Dùng do-while để yêu cầu nhập số ngày từ 0 đến 30 cho đến khi dữ liệu hợp lệ.
#include <stdio.h>
int main() {
    int N;

    do {
        printf("Nhap so ngay hoan thanh (0-30): ");
        scanf("%d", &N);
        if(N < 0 || N > 30) {
            printf("Du lieu khong hop le. Vui long nhap lai.\n");
        }
    } while(N < 0 || N > 30);

    printf("So ngay hoan thanh hop le: %d\n", N);

    return 0;
}
// độ phức tạp: O(N)