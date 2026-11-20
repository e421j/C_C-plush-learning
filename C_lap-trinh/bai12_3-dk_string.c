#include <stdio.h>
#include <string.h>
int main(){
    char a [50];

    printf("nhap chuoi: ");
    fgets(a, sizeof(a),stdin);
     a[strlen(a) -1] = '\0';

    if (strlen(a)==0)
    {
        printf("none");
    }else{
        printf("da nhap: %s",a);
    }
    return 0;
}