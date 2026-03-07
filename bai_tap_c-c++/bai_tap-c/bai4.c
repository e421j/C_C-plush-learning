//kí tự và má ASCII
#include <stdio.h>
int main() {
    char ky_tu;
    printf("Nhap mot ki tu: ");
    scanf("%c", &ky_tu);

    int ma_ascii = (int)ky_tu;

    printf("Ki tu: %c\n", ky_tu);
    printf("Ma ASCII: %d\n", ma_ascii);

    return 0;
}