// giá trị só 6: _Bool (kiểu dữ liệu boolean)
#include <stdio.h>
#include <stdbool.h>
int main() {
    _Bool flag1 = 1; // true
    _Bool flag2 = 0; // false
    printf("Giá trị của flag1: %d\n", flag1);
    printf("Giá trị của flag2: %d\n", flag2);
    
    // Sử dụng stdbool.h để làm việc với kiểu bool
    bool bool1 = true;
    bool bool2 = false;
    printf("Giá trị của bool1: %d\n", bool1);
    printf("Giá trị của bool2: %d\n", bool2);
    
    // Kiểm tra điều kiện
    if (bool1) {
        printf("bool1 là true\n");
    } else {
        printf("bool1 là false\n");
    }
    
    if (!bool2) {
        printf("bool2 là false\n");
    } else {
        printf("bool2 là true\n");
    }

    return 0;
}