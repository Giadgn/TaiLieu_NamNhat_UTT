#include<stdio.h>
#include<string.h>

typedef struct nhanvien{ // khai báo ki?u cau trc nhan vien
	int manv;   // kieu so nguyen
	char hoten[30];  // ky tu chu 
	char phongban[30];
};
void Nhap(nhanvien nv[], int n){
	for(int i=0; i<n; i++){
		char sect_cat;
		printf("\n-----\n Nhap ma nhan vien :");scanf("%d", &nv[i].manv);
		scanf("%c", &sect_cat);
		printf("Nhap ho ten: ");gets(nv[i].hoten); // có khoang trong
		printf("Nhap phong ban: ");gets(nv[i].phongban);
	}
}
void Xuat(nhanvien nv[], int n){
	printf("\n------- \n Danh sach nhan vien phong ke toan :");
	printf("\n%10s|%30s|%30s|" , "ma nv " , "ho ten" , "phong ban");
	for (int i=0; i<n; i++){
		if(strcmp(nv[i].phongban, "ke toan") == 0 || // hàm so sánh strcmp(const char *str1, const char *str2)
			strcmp(nv[i].phongban, "ke toan") == 0 ||
			strcmp(nv[i].phongban, "ke toan") == 0) {
				printf("\n%10d|%30s|%30s|", nv[i].manv, nv[i].hoten, nv[i].phongban);
			}
	}
}
int main(){
	int n;
	printf("\n Nhap n:"); scanf("%d",&n);
	nhanvien nv[n];
	Nhap(nv,n);
	Xuat(nv,n);
}






