// tăng và giảm giá trị trong C
// Tăng (increment) và giảm (decrement) giá trị trong C là các phép toán được sử dụng để tăng hoặc giảm giá trị của một biến. C cung cấp hai loại phép toán này: tiền tố (prefix) và hậu tố (postfix).
// - Phép toán tiền tố (prefix): Trong phép toán này, biến được tăng hoặc giảm trước khi giá trị của nó được sử dụng trong biểu thức. Ví dụ: ++x sẽ tăng giá trị của x lên 1 trước khi sử dụng nó.
// - Phép toán hậu tố (postfix): Trong phép toán này, biến được sử dụng trong biểu thức trước khi giá trị của nó được tăng hoặc giảm. Ví dụ: x++ sẽ sử dụng giá trị hiện tại của x trong biểu thức trước khi tăng nó lên 1.
// VD: Nếu x = 5, thì ++x sẽ trả về 6 và x sẽ trở thành 6, trong khi x++ sẽ trả về 5 và sau đó x sẽ trở thành 6. Tương tự, nếu x = 5, thì --x sẽ trả về 4 và x sẽ trở thành 4, trong khi x-- sẽ trả về 5 và sau đó x sẽ trở thành 4.
#include <stdio.h>
int main() {
    int x = 5;
    printf("Gia tri ban dau cua x: %d\n", x);
    printf("Gia tri sau khi tang (prefix): %d\n", ++x); // Tăng trước khi sử dụng
    printf("Gia tri sau khi tang (postfix): %d\n", x++); // Sử dụng trước khi tăng
    printf("Gia tri sau khi giam (prefix): %d\n", --x); // Giảm trước khi sử dụng
    printf("Gia tri sau khi giam (postfix): %d\n", x--); // Sử dụng trước khi giảm
    return 0;
}