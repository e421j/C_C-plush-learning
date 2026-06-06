//Bài 1: Nhập tên và tuổi
//Yêu cầu: Sử dụng scanf() để nhập tên (1 từ) và tuổi của người dùng. In lại thông tin.
//Ví dụ:
//Input: An 18
//Output: Ten: An
//Tuoi: 18
#include <stdio.h>
int main() {
    char ten = '\0';// là biểu thị cho kí tự trống nếu viết mỗi không vào thì chương hiểu là mã trong ASCII
    int tuoi = 0;
    
   

    printf("nhap tuoi:");
    scanf("%d", &tuoi);

    printf("nhap ten:");
    scanf(" %c", &ten);// kí hiệu & đc biểu thị là địa chỉ của hàm.

    printf("\n toi ten la %c va nam nay toi %d tuoi\n", ten, tuoi);

    return 0;
}
