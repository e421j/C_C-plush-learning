//Bài 10: Đăng nhập đơn giản
//Yêu cầu: Nhập username và password, dùng strcmp() để kiểm tra.
//Ví dụ:
//Input: admin 123456
//Output: Dang nhap thanh cong
#include <stdio.h>
#include <string.h>
int main() {
    char user[60];
    int pass;

    printf("nhap username: ");
    fgets(user, sizeof(user) , stdin);
    user[strcspn (user, "\n")]= '\0';

    printf("nhap password: ");
    scanf("%d",&pass);

    if(strcmp(user,"admin")==0 && pass == 123456){
        printf("dang nhap thanh cong");
    }else{
        printf("dang nhap khong thanh cong");
    }
}