//Bài 2 — Input hỗn hợp
//Nhập:
//Họ tên:
//Tuổi:
//Điểm C:
//Điểm C++:
//Điểm Java:

//Sau đó in bảng thông tin và điểm trung bình.

//Bẫy: xử lý vấn đề scanf() + fgets().
#include <stdio.h>
#include <string.h>
int main() {
    char ten[60];
    int Age;
    float diem_c;
    float diem_c_plus;
    float diem_java;

    printf("ten: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strcspn (ten, "\n")] = '\0';
    

    printf("nhap tuoi: ");
    scanf("%d",&Age);
    getchar();

    printf("nhap diem c: ");
    scanf("%f",&diem_c);

    printf("nhap diem c++: ");
    scanf("%f",&diem_c_plus);

    printf("nhap diem java: ");
    scanf("%f",&diem_java);

    

    printf("\n ten: %s\n", ten);
    printf("\n tuoi: %d\n", Age);
    printf("diem tb cua 3 mon: %.2f\n", (diem_c + diem_c_plus + diem_java)/3);

    return 0;


}