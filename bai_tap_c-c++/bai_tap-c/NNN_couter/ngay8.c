//Bài 8. Lựa chọn hoạt động
//Dùng switch-case để người chơi chọn:
//1. Xem alime
//2. Ăn
//3. Ngủ
//4. Chống lọ cùng c
//In thông báo phù hợp với lựa chọn.
#include <stdio.h>
int main() {
    int lua_chon;
    printf("Lua chon hoat dong (1-4):\n");
    printf("1. Xem alime\n");
    printf("2. An\n");
    printf("3. Ngu\n");
    printf("4. C\n");
    scanf("%d", &lua_chon);

    switch (lua_chon) {
        case 1:
            printf("uh...phai la anime khong phai alime.\n");
            break;
        case 2:
            printf("hoc.\n");
            break;
        case 3:
            printf("ngu.\n");
            break;
        case 4:
            printf("Ngay 8 chong lo cung c.\n");
            break;
        default:
            printf("Deo me chon sai cho chon lai!\n");
            break;
    }

    return 0;
}