#include <stdio.h>
#include <string.h>

// chương trình mua sắm
int main() {

    char item[60] = "";
    float gia = 0.0f; // 0.0f để biểu diễn kiểu float
    int so_luong = 0;
    char loai_tien = '$';
    float tong = 0.0f;

    printf("may muon mua gi?: ");
    fgets(item, sizeof(item), stdin);

    // xoa ky tu '\n' do fgets them vao
    item[strcspn(item, "\n")] = '\0';

    printf("gia moi loai la?: ");
    scanf("%f", &gia);

    printf("so luong mua bao nhieu?: ");
    scanf("%d", &so_luong);

    tong = gia * so_luong;

    printf("\nda mua %d %s\n", so_luong, item);
    printf("so tien phai tra %c%.2f\n", loai_tien, tong);

    return 0;
}