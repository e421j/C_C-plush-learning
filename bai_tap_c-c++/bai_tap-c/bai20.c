//Bài 7: Sao chép chuỗi
//Yêu cầu: Nhập một chuỗi, sao chép sang chuỗi khác bằng strcpy().
//Ví dụ:
//Input: Python
//Output: Chuoi moi = Python
#include <stdio.h>
#include <string.h>
int main (){
    char chuoi_goc[60];
    char chuoi_copy[60];

    printf("nhap chuoi goc: ");
    fgets(chuoi_goc, sizeof(chuoi_goc), stdin);
    chuoi_goc[strcspn (chuoi_goc, "\n")]= '\0';

    strcpy(chuoi_copy, chuoi_goc);

    printf("chuoi moi = %s",chuoi_goc);

    return 0;

}
