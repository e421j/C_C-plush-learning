// giới thiệu thư viện cho thực hiện các phép tính toán hay
// thực hiện các logic toán học trong c là thư viện <math.h>
#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
    int z,a;
    float b,c;
    float d,e;
    float f,g;
    int h,i;
    float j,k;
    float l,n,m;

    printf("nhap gia tri x,y: ");
    scanf("%d,%d", &x, &y);

    printf("nhap gia tri z,a: ");
    scanf("%d,%d", &z, &a);

    printf("nhap gia tri b,c: ");
    scanf("%f,%f", &b, &c);
    
    printf("nhap gia tri d,e: ");
    scanf("%f,%f", &d, &e);
    
    printf("nhap gia tri f,g: ");
    scanf("%f,%f", &f, &g);

    printf("nhap gia tri h,i: ");
    scanf("%d,%d", &h, &i);

    printf("nhap gia tri h,i: ");
    scanf("%f,%f", &j, &k);

    printf("nhap gia tri h,i: ");
    scanf("%f,%f,%f", &l, &m ,&n);

    x = sqrt(x);// Square root => căn bậc 2
    y = sqrt(y);

    z = pow(z, 3);// power => số mũ
    a = pow(a, 3);

    b = round(b);// rounding => làm tròn
    c = round(c);

    d = ceil(d);// ceiling => làm tròn lên
    e = ceil(e);

    f = floor(f);
    g = floor(g);// làm tròn xuống

    h = abs(h);
    i = abs(i);// absolute value => giá trị tuyệt đối

    j = log(j);
    k = log(k);// logarit

    l = sin(l);
    m = cos(m);
    n = tan(n);// giá trị lượng giác


    printf("\n%d,%d\n",x,y);
    printf("\n%d,%d\n",z,a);
    printf("\n%.2f,%.2f\n",b,c);
    printf("\n%.2f,%.2f\n",d,e);
    printf("\n%.2f,%.2f\n",f,g);
    printf("\n%d,%d\n",h,i);
    printf("\n%.2f,%.2f\n",j,k);
    printf("\n%.2f,%.2f,%.2f\n",l,m,n);

    return 0;
}
