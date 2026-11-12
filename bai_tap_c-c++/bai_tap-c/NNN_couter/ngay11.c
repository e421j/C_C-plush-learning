//Bài 11. Đếm ngược
//Dùng for để in các ngày còn lại từ 30 về 1.
#include <stdio.h>
int main()
{
    int i;
    for(i=30; i>=1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
// độ phức tạp: O(n)