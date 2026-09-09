// int isPrime(int a): kiểm tra xem có phải số nguyên tố hay không.
//- Tương tự như int isEven(int a) thì cấu trúc nó tương tự y như vậy
//- số nguyên tố là số lớn hơn hoặc bằng 2 và  chia hết cho 1 và chính nó
#include <stdio.h>
int isPrime(int a){
    if( a <2 ){
        return 0; //kiểm tra giá trị xem lớn hơn 2 nếu không thì lập tức kết thúc chương trình
    }

for (int i = 2; i <a; i++)// đặt i là 2 và lắy i để so và kiểm giá trị đã input vào xem có phải số nguyên không
                      // i++ là lấy giá trị trước rồi tăng sau, ++i là tăng trước là lấy sau về công dụng thì giống nhau
        if ( a%i==0 ){
            return 0;
        }
        {
            return 1; // cơ chế nếu isPrime(7) thì 7/2 là 1, i++ sẽ lập tức +1 tăng 1 gái trị cho đến khi nào đạt đến mốc gần bằng input thì sẽ dừng chương trình

        }
    }
        int main(){
            int n;

            printf("nhap gia tri n: ");
            scanf("%d", &n);

            if (isPrime(n)) {
                printf("la so nguyen");
            }
            else {
                printf("khong phai so nguyen");
            }
            return 0;
        }