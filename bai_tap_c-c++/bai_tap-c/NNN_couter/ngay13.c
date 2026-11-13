//Bài 13. Menu lặp
//Tạo menu gồm xem hướng dẫn, xem quy tắc, thoát. Menu lặp lại đến khi người dùng chọn thoát.
#include <stdio.h>
int main() {
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Xem huong dan\n");
        printf("2. Xem quy tac\n");
        printf("3. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Huong dan: hay ngung lo\n");
                break;
            case 2:
                printf("Quy tac: hay lo\n");
                break;
            case 3:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while(choice != 3);

    return 0;
}
//độ phức tạp: O(n)