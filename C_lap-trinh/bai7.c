//mad libs game (trả lời từ có mục đích để có sự sắp sếp ngẫu nhiên)
#include <stdio.h>
#include <string.h>
int main() {

    char hanh_dong[60] = "";
    int so_luong = 0;
    char thoai[30] = "";

    printf("hanh dong: ");
    fgets(hanh_dong, sizeof(hanh_dong), stdin);
    hanh_dong[strcspn (hanh_dong, "\n")] = '\0';

    printf("so luong: ");
    scanf("%d", &so_luong);
    getchar(); // xóa '\n' còn trong buffer

    printf("thoai: ");
    fgets(thoai, sizeof(thoai), stdin);
    thoai[strcspn (thoai, "\n")] = '\0';

    printf("\n hom nay toi di %s\n", hanh_dong);
    printf("\n toi thay %d con koquala va thay no %s\n", so_luong, thoai);

    return 0;


}