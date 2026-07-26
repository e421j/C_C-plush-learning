//Bài 9: Đếm ký tự
//Yêu cầu: Đếm số chữ cái, chữ số trong chuỗi nhập vào.
//Ví dụ:
//Input: abc123
//Output: Chu cai = 3, Chu so = 3
#include <stdio.h>
#include <string.h>
#include <ctype.h> //thư viện dùng để xử lý chuỗi và vòng lặp
int main(){
    char str[60];
    int chucai=0;
    int chuso=0;

    printf("nhap chuoi: ");
    fgets(str, sizeof(str),stdin);
    str[strcspn(str, "\n")]='\0';

    for (int i=0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            chucai++;
        }
        else if (isdigit(str[i])) {
            chuso++;
        }   
        
    }

    printf("chu cai = %d\n",chucai);
    printf("chu so= %d", chuso);

    return 0;
}
