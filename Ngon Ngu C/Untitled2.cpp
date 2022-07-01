/*xay dung cau truc nhan vien gom: manv,
hoten, tuoi. Viet chuong trinh nhap vao danh sach
gom n nhan vien.
a. in thong tin cua ds nhan vien len man hinh
b. in ra cac nhan vien co do tuoi tu 55-60t
c. in ra NV co nanv = "001"*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct nhanvien
{
	char mnv[10];
	char hoten[50];
	long int luong;
	int tuoi;
};
int i, n;
void nhapds(nhanvien nv[10], int n)
{
	for(i=0; i<n; i++)
	{
		printf("\n nhap nv thu %d= ", i);
		fflush(stdin);
		printf("\n manv= "); gets(nv[i].mnv);
		printf("\n hoten= "); gets(nv[i].hoten);
		printf("\n tuoi= "); gets(nv[i].tuoi);
		fflush(stdin);
		printf("\n luong= "); scanf("\n %ld", &nv[i].luong);
	}
}
void inds(nhanvien nv[10], int n)
{
	printf("\n danh sach nv: ");
	printf("\n Manv \t hoten \t tuoi \t luong: \n");
	for(i=0; i<n; i++)
printf("\n %s \t %s \t %d \t %ld", nv[i].mnv, nv[i].hoten, nv[i].tuoi, nv[i].luong);
}
void luongmax(nhanvien nv[10], int n)
{
	long int max=nv[0].luong;
	int vt =0;
	for(i=1; i<n; i++)
		if (max < nv[i].luong)
		{
			max = nv[i].luong;
			vt = i;
		}
	printf("\n nhan vien vo luong cao nhat: ");
	printf("\n %s \t %s \t %ld", nv[vt].mnv, nv[vt].hoten,nv[vt].luong);
}
main()
{
	nhanvien nv[10];
	printf("\n nhap so Nhanvien n= ");
	scanf("%d", &n);
	nhapds(nv, n);
	inds(nv, n);
	luongmax(nv, n);
	getch();
}

