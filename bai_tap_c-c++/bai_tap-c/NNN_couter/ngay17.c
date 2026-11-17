//Bài 17. Thống kê tuần
//Với mảng trạng thái 7 ngày, đếm số ngày hoàn thành và số ngày chưa hoàn thành.
#include <stdio.h>
int main()

{
    int a[7];
    int hoan_thanh=0, chua_hoan_thanh=0;
    for(int i=0;i<7;i++)
    {
        printf("Nhap trang thai hoan thanh cua ngay %d: ",i+1);
        scanf("%d",&a[i]);
        if(a[i]==1)
            hoan_thanh++;
        else
            chua_hoan_thanh++;
    }
    printf("So ngay hoan thanh: %d\n",hoan_thanh);
    printf("So ngay chua hoan thanh: %d\n",chua_hoan_thanh);
    return 0;
}