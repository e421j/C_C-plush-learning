//Bài 7: Giải phương trình bậc 2 (double)
//Viết chương trình giải phương trình ax^2 + bx + c = 0.
//•	Nhập a, b, c là các số thực (double).
//•	Tính Delta: \Delta = b^2 - 4ac.
//•	Biện luận các trường hợp của Delta để tìm nghiệm x_1, x_2.
//•	Sử dụng thư viện <math.h> để dùng hàm sqrt().
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    printf("Giai phuong trinh bac hai ax^2 + bx + c = 0\n");
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);

    // Kiem tra neu a = 0 thi tro thanh phuong trinh bac nhat
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co mot nghiem: x = %g\n", -c / b);
        }
    } else {
        // Tinh Delta
        delta = b * b - 4 * a * c;

        // Bien luan cac truong hop cua Delta
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2lf\n", x1);
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }

    return 0;
}
