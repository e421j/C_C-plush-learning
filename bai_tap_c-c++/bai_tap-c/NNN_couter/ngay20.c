//Bài 20. Tìm kiếm nhiệm vụ
//Tạo mảng tên 5 nhiệm vụ. Cho người dùng nhập tên nhiệm vụ cần tìm và kiểm tra xem nhiệm vụ đó có trong danh sách hay không.
//Gợi ý: strcmp trong string.h
#include <stdio.h>
#include <string.h>
int main(){
    char tasks[5][50];
    char searchTask[50];
    int found = 0;

    // Nhập tên 5 nhiệm vụ
    for(int i = 0; i < 5; i++) {
        printf("Nhap ten nhiem vu %d: ", i + 1);
        fgets(tasks[i], sizeof(tasks[i]), stdin);
        // Loại bỏ ký tự newline nếu có
        tasks[i][strcspn(tasks[i], "\n")] = 0;
    }

    // Nhập tên nhiệm vụ cần tìm
    printf("Nhap ten nhiem vu can tim: ");
    fgets(searchTask, sizeof(searchTask), stdin);
    searchTask[strcspn(searchTask, "\n")] = 0;

    // Kiểm tra xem nhiệm vụ có trong danh sách hay không
    for(int i = 0; i < 5; i++) {
        if(strcmp(tasks[i], searchTask) == 0) {
            found = 1;
            break;
        }
    }

    if(found) {
        printf("Nhiem vu '%s' co trong danh sach.\n", searchTask);
    } else {
        printf("Nhiem vu '%s' khong co trong danh sach.\n", searchTask);
    }

    return 0;
}