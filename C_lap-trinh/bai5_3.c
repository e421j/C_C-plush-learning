// scanf
// để nhập giá trị đầu vào (input ) mà không cần đặt giá trị mặc đinh thì cần làm như sau
#include <stdio.h>
int main() {
    int age = 0;// phỉa gán trị trị 0 để nhập dữ liệu
    float gpa = 0.0f; 
    char lop = '\0'; 
    char name[30] = "";// không dùng đc với scanf

    printf("nhap tuoi: ");
    scanf("%d", &age);
    

    printf("nhap gpa: ");
    scanf("%f", &gpa);
    

    printf("ten lop: ");
    scanf(" %c", &lop);// cần phải cách để tránh input buffer. việc space để bỏ qua hàng mới
    

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", lop);
    printf("%s\n", name);
    return 0;
}

