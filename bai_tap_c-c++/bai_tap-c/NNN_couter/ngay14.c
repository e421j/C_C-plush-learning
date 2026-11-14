//Bài 14. Tính XP
//Mỗi ngày hoàn thành nhận 30 XP. Dùng vòng lặp để tính XP khi hoàn thành N ngày, với N do người dùng nhập.
#include <stdio.h>
int main() {
    int N, totalXP ;

    printf("Nhap so ngay hoan thanh: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        totalXP += 30; // Mỗi ngày hoàn thành nhận 30 XP
    }

    printf("Tong XP sau %d ngay hoan thanh: %d\n", N, totalXP);

    return 0;
}
//độ phức tạp: O(n)