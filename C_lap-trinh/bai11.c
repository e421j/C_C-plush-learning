// Trong ngôi nhà của 12 vị thần trị vì đỉnh Olympus có cây cột hình trụ lọt vào mắt của
// vị thần Athena (nữ thần cai quản tri thức) vị thần đấy thắc mắc rằng bán kính 
// của cây cột hình trụ đấy là bao nhiêu, diện tích toàn phần, diện tích bề mặt toàn phần và thể tích
// của cây cột hình trụ đó.
// Bạn hãy giúp nữ thần Athena tính cái cột đó (đéo ai cần nhưng bạn vẫn làm =) ).
// Biết đường kính của hình tròn 2d đỉnh cột là 30 cm và chiều cao cây cột là 350 cm.
// Làm tròn đến số thứ 2 sau dấu phẩy.
// Các công thức để giải bài toán này : -bán kính: + r=d/2
                                     // -diện tích toàn phần: + 2PIrh + 2PTr²
                                     // -diện tích bề mặt toàn phần: +2PIr(r+h)
                                     // -thể tích hình cột: +PIr²h
#include <stdio.h>
#include <math.h>
int main(){
    double d,r,h,Stp,Sbmtp,V;
    const double PI = 3.14159;

    printf("nhap duong kinh ma de bai cho: ");
    scanf("%lf",&d);

    printf("nhap chieu cao ma de bai da cho:  ");
    scanf("%lf",&h);

    r = d/2;
    Stp = 2*PI*r*h + 2*PI*pow(r,2);
    Sbmtp = 2*PI*r*(r+h);
    V = PI*pow(r,2)*h;

    printf("ban kinh hinh tron 2d cua dinh cot la:%.2lfcm\n",r);
    printf("Dien tich toan phan cua cot la:%.2lfcm²\n",Stp);
    printf("Dien tich be mat toan phan cua cot la:%.2lfcm²\n",Sbmtp);
    printf("the tich cua  cot la:%.2lfcm³\n",V);

    return 0;

}