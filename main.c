#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char masinhvien;
    char tensinhvien;
    char sodienthoai;
}Sinhvien;
void themMoiSinhVien() {
    Sinhvien structsinhvien[10];
    for (int i = 0; i < 10; ++i) {
        printf("Vui long nhap ma  sinh vien lan thu nhat: %s\n", i + 1);
        fgets(&structsinhvien[i].masinhvien, 50, stdin);
        printf("Vui long nhap ten sinh vien lan thu nhat: %s\n", i + 1);
        fgets(&structsinhvien[i].tensinhvien, 50, stdin);
        printf("Vui long nhap so dien thoai sinh vien lan thu nhat: %s\n", i + 1);
        scanf("%s",&structsinhvien[i].sodienthoai);
    }
}
void hienthidanhsachsinhvien(){
        Sinhvien structsinhvien[10];
        for (int i = 0; i < 10; ++i) {
            printf("Vui long nhap ma  sinh vien lan thu nhat: %s\n", i + 1);
            fgets(&structsinhvien[i].masinhvien, 50, stdin);
            printf("Vui long nhap ten sinh vien lan thu nhat: %s\n", i + 1);
            fgets(&structsinhvien[i].tensinhvien, 50, stdin);
            printf("Vui long nhap so dien thoai sinh vien lan thu nhat: %s\n", i + 1);
            fgets(&structsinhvien[i].sodienthoai, 50, stdin);
        }
    }
int main() {
    printf("1.thêm mới sinh viên \n");
    printf("2.hien thị danh sách sinh viên  \n");
    printf("3.lưu danh sách sinh viên ra fire \n");
    printf("4.đọc danh sách sinh viên từ fire  \n ");
    printf("5.thoát trương trình\n ");
    int choice;
    printf("vui long chon lua chon cua ban \n");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            printf("them moi sinh vien \n");
            break;
        case 2:
            printf("hien thi danh sách sinh viên\n");
            break;
        case 3:
            printf("lưu danh sách sinh viên ra fire  \n");
            break;
        case 4:
            printf("đọc danh sách sinh viên từ fire \n");
            break;
        case 5:
            printf("thoát trương trình %s\n");
            break;
    }


}