// thư viện mới string.h
// sử dụng fgets(file get string = lấy dư liệu trong chuỗi)
// để tránh lỗi input buffer thì cần dùng getchar();
// để dạo ngược giá trị lên đầu thì ta cần dùng thư viện string và name[Strlen (name),stdm];
#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char lop = '\0';
    char name[30] = "";

    printf("nhap tuoi: ");
    scanf("%d", &age);

    printf("nhap gpa: ");
    scanf("%f", &gpa);

    printf("ten lop: ");
    scanf(" %c", &lop); 
    // space trước %c để bỏ qua '\n'

    getchar(); 
    // xóa ký tự '\n' còn sót lại trong input buffer

    printf("nhap full ten: ");
    fgets(name, sizeof(name), stdin);

    // xóa ký tự xuống dòng của fgets
    name[strlen(name) - 1] = '\0';

    printf("\n===== THONG TIN =====\n");
    printf("Ten: %s\n", name);
    printf("Tuoi: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Lop: %c\n", lop);

    return 0;
}