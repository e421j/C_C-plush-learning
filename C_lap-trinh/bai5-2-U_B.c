// gán giá trị cố định vào biến là cách fix underfined behavior ( hành vi không xác định)
#include <stdio.h>
int main() {
    int age=0;
    float gpa=0.0f; // xác định là float không phải là double
    char lop="\0"; // kí tự rỗ nếu không thêm "\" vào trước sso kông thì sẽ ra con số rong mã ASCII
    char name[30]="";
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", lop);
    printf("%s\n", name);
    return 0;
}
