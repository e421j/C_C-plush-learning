// giá trị số 5: char[] (mảng ký tự - chuỗi)
#include <stdio.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    printf("Chuỗi 1: %s\n", str1);
    printf("Chuỗi 2: %s\n", str2);
    // Kết hợp hai chuỗi
    char combined[100]; // Đảm bảo mảng đủ lớn để chứa chuỗi kết hợp
    snprintf(combined, sizeof(combined), "%s %s", str1, str2);
    printf("Chuỗi kết hợp: %s\n", combined);
    return 0;
}