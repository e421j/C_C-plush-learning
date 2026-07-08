//Bài 8: Đảo ngược chuỗi
//Yêu cầu: Nhập một chuỗi và in chuỗi theo thứ tự ngược lại.
//Ví dụ:
//Input: ABCD
//Output: DCBA
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự '\n' nếu có
    str[strcspn(str, "\n")] = '\0';

    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("Chuoi dao nguoc: %s", str);

    return 0;
}