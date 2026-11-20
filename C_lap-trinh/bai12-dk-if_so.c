//Cơ chế:
//Nếu if mà true thì thưc hiện lệnh printf nếu if sai mà có điều kiện bổ xung esle if thì thực thi printf
//nếu esle if true còn nếu esle if mà sai thì thực thì đk cuối là esle.
//nếu true thì tất cả các dòng đk khác sẽ đánh là false (sẽ không đc thực thi)
#include <stdio.h>
int main(){
    int age;

    printf("nhap tuoi: ");
    scanf("%d",&age);

    if(age == 0){
        printf("chua sinh");
    } else if (age <= 18)
    {
        printf("la tre vi thanh nien");
    } else{
        printf("la nguoi truong thanh");
    }
    return 0;
}