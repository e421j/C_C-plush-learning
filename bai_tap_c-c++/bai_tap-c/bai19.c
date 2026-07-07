//Bài 6: Nối chuỗi
//Yêu cầu: Nhập 2 chuỗi và dùng strcat() để nối chúng.
//Ví dụ:
//Input: Hello World
//Output: HelloWorld
#include <stdio.h>
#include <string.h>
int main(){
    char ki1[60]="0";
    char ki2[60]="0";

    printf("chuoi ki tu 1: ");
    fgets(ki1, sizeof(ki1), stdin);
    ki1[strcspn (ki1, "\n")]= '\0';

    printf("chuoi ki tu 2: ");
    fgets(ki2, sizeof(ki2), stdin);
    ki2[strcspn (ki2, "\n")]= '\0';

    strcat(ki1, ki2);// nối chuỗi vào với nhau

    printf("%s",ki1);// do ki1 và ki2 hợp lại làm 1 nên lấy làm đại diện là ki tự đầu tiên

    return 0;
}