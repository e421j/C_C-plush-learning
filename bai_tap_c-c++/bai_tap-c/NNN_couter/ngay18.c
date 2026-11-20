//Bài 18. Ngày tốt nhất
//Nhập điểm ý chí của 7 ngày vào mảng. Tìm điểm cao nhất và vị trí ngày tương ứng.
#include <stdio.h>
int main(){
    int a[7];
    int max=0, vi_tri=0;
    for(int i=0;i<7;i++)
    {
        printf("Nhap diem y chi cua ngay %d: ",i+1);
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
            vi_tri=i;
        }
    }
    printf("Diem y chi cao nhat la: %d\n",max);
    printf("Ngay tuong ung la: %d\n",vi_tri+1);
    return 0;
}//không cho lên đc máy tính không có cho lên đc