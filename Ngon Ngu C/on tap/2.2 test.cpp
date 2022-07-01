#include <stdio.h>
#include <string.h>

typedef struct {
    int maNv;
    char hoTen[30];
    char phongBan[30];
}nhanvien;

void nhapDs(nhanvien nv[], int n){
    for (int i = 0; i < n; i++) {
        char sect_cat;
        printf("\n-----\nNhap ma nhan vien: "); scanf("%d", &nv[i].maNv);
        scanf("%c", &sect_cat);
        printf("Nhap ho ten: "); gets(nv[i].hoTen);
        printf("Nhap phong ban: "); gets(nv[i].phongBan);
    }
}

void xuatDsKT(nhanvien nv[], int n){
    printf("\n-----\n Danh sach nhan vien phong ke toan:");
    printf("\n%10s|%30s|%30s|","ma nv","ho ten","phong ban");
    for (int i = 0; i < n; i++) {
        if(strcmp(nv[i].phongBan, "ke toan") == 0 || 
            strcmp(nv[i].phongBan, "Ke toan") == 0 ||
            strcmp(nv[i].phongBan, "Ke Toan") == 0){
            printf("\n%10d|%30s|%30s|", nv[i].maNv, nv[i].hoTen, nv[i].phongBan);
        }
    }
}

int main(){
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    nhanvien nv[n];
    nhapDs(nv, n);
    xuatDsKT(nv, n);
}
