//tính hình tròn bằng số thực: tính diện tích, bán kính và chu vi tròn
#include <stdio.h> 
#define PI 3.14159265359

int main() {
    float ban_kinh;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &ban_kinh);

    float dien_tich = PI * ban_kinh * ban_kinh;
    float chu_vi = 2 * PI * ban_kinh;

    printf("Dien tich hinh tron: %.2f\n", dien_tich);
    printf("Chu vi hinh tron: %.2f\n", chu_vi);

    return 0;
}