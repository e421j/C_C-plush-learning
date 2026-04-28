// giới hạn và làm tròn
// Giới hạn (precision) trong C là một phần của định dạng chỉ thị (format specifier) được sử dụng để xác định số lượng chữ số sau dấu thập phân khi in ra màn hình
// VD: %.2f sẽ in một số thực với 2 chữ số sau dấu thập phân. Nếu số thực có nhiều hơn 2 chữ số sau dấu thập phân thì sẽ được làm tròn và chỉ in ra 2 chữ số đó. Nếu số thực có ít hơn 2 chữ số sau dấu thập phân thì sẽ được điền thêm bằng 0 để đảm bảo có đủ 2 chữ số sau dấu thập phân.
#include <stdio.h>
int main() {
    float x = 3.14159;
    double y = 2.71828;
    printf("Gia tri cua x: %.2f\n", x); // làm tròn và giới hạn 2 chữ số sau dấu thập phân
    printf("Gia tri cua y: %.3lf\n", y);// làm tròn và giới hạn 3 chữ số sau dấu thập phân
    return 0;
}