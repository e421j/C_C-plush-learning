//Bài 19. Nhật ký ngắn
//Cho người dùng nhập một dòng ghi chú ngắn. In lại nội dung.
//Yêu cầu: thực hành fgets và loại bỏ ký tự xuống dòng nếu có.
#include <stdio.h>
#include <string.h>
int main(){
    char ghi_chu[100];
    printf("Nhap mot dong ghi chu ngan: ");
    fgets(ghi_chu, sizeof(ghi_chu), stdin);
    
    // Loại bỏ ký tự xuống dòng nếu có
    size_t len = strlen(ghi_chu);
    if (len > 0 && ghi_chu[len - 1] == '\n') {
        ghi_chu[len - 1] = '\0';
    }
    
    printf("Noi dung ghi chu la: %s\n", ghi_chu);
    return 0;
}