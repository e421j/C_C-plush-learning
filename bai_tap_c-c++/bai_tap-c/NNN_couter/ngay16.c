//Bài 16. Mảng 7 ngày
//Lưu trạng thái hoàn thành của 7 ngày vào mảng số nguyên. In lại toàn bộ trạng thái.
#include <stdio.h>
int main()
{
    int a[7];
    for(int i=0;i<7;i++)
    {
        printf("Nhap trang thai hoan thanh cua ngay %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Trang thai hoan thanh cua 7 ngay la: ");
    for(int i=0;i<7;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}