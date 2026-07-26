//Bài 8: Đảo ngược chuỗi
//Yêu cầu: Nhập một chuỗi và in chuỗi theo thứ tự ngược lại.
//Ví dụ:
//Input: ABCD
//Output: DCBA
#include <stdio.h>
#include <string.h>
int main() {
    char ki[60];

    printf("nhap ki tu: ");
    fgets(ki, sizeof(ki), stdin);
    ki[strcspn (ki, "\n")]= '\0';

    int left = 0; // phần bền trái 
    int right = strlen(ki) - 1; //phải nó sẽ bị thụt 1 giá trị

    while (left < right) {
        char temp = ki[left];
        ki[left] = ki[right];
        ki[right] = temp;

        left++; // tăng lên 2 giá trị
        right--; // phải sẽ gaimr 2 giá trị
    }
    printf("%s",ki);

    return 0;
}