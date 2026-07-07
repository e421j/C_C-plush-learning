//Bài 4: Đếm độ dài chuỗi
//Yêu cầu: Nhập chuỗi bằng fgets(), dùng strlen() để đếm số ký tự.
//Ví dụ:
//Input: Hello
//Output: Do dai chuoi = 5
// int in ra số nguyên
#include <stdio.h>
#include <string.h>
int main() {
    char ki[60]="0";

    printf("chuoi ki tu: ");
    fgets(ki, sizeof(ki), stdin);
    ki[strcspn (ki, "\n")]= '\0';
    strlen(ki);

    printf("do dai chuoi la: %d",strlen(ki));

    return 0;
}
