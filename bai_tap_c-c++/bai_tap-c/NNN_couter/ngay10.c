//Bài 10. Quy tắc nhận thưởng
//Nhập số ngày liên tiếp và số nhiệm vụ phụ đã hoàn thành. Chỉ nhận thưởng lớn khi chuỗi ngày đạt ít nhất 7 ngày VÀ nhiệm vụ phụ đạt ít nhất 3.
#include <stdio.h>
int main(){
    int So_ngay_lien_tiep,So_nhiem_vu_phu_da_hoan_thanh;
    
    printf("nhap so ngay da nhin lo: ");
    scanf("%d",&So_ngay_lien_tiep);

    printf("nhap so nhiem vu da hoan thanh: ");
    scanf("%d",&So_nhiem_vu_phu_da_hoan_thanh);

    if(So_ngay_lien_tiep >= 7  && So_nhiem_vu_phu_da_hoan_thanh >=3){
        printf("1\n");
    } else{
        printf("0\n");
    }
    return 0;
}