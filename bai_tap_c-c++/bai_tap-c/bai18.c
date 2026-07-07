//Bài 5: So sánh hai chuỗi
//Yêu cầu: Nhập 2 chuỗi và dùng strcmp() để kiểm tra chúng có giống nhau hay không.
//Ví dụ:
//Input: cat cat
//Output: Hai chuoi giong nhau
#include <stdio.h>
#include <string.h> // thư viện dành cho chuỗi
int main() {
    char ki1[60]="0";
    char ki2[60]="0";

    printf("chuoi ki tu 1: ");
    fgets(ki1, sizeof(ki1), stdin);
    ki1[strcspn (ki1, "\n")]= '\0';

    printf("chuoi ki tu 2: ");
    fgets(ki2, sizeof(ki2), stdin);
    ki2[strcspn (ki2, "\n")]= '\0';

    if(strcmp(ki1, ki2)==0){
        printf("Hai chuoi giong nhau");
    }else{
        printf("Hai chuoi khac nhau");
    }

    return 0;
}