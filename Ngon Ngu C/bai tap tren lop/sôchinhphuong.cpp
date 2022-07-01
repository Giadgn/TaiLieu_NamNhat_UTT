#include<stdio.h>
#include<conio.h>

struct Sach{
	char masach[50];
	char tensach[50];
	int sotrang;
};

void nhapdanhsach(Sach s[], int &n){
	do{
		printf("Nhap danh sach sach n :");
		scanf("%d",&n);
	}while(n<0);
	for(int i=0;i<n;i++){
		printf("\n Nhap vao sach thu %d", i+1);
		printf("\nNhap Masach : "); fflush(stdin); gets(s[i].masach);
		printf("Nhap Tensach : "); fflush(stdin); gets(s[i].tensach);
		printf("Nhap so trang "); scanf("%d",&s[i].sotrang);
	}
}

void xuatdanhsach(Sach s[], int n){
	printf("\Danh sach :");
	printf("\n|%10s|%10s|%10s|","Ma sach","Ten sach","So trang");
	printf("\n");
	for(int i=0;i<n;i++){
		printf("|%10s|%10s|%10d|",s[i].masach,s[i].tensach,s[i].sotrang);
		printf("\n");
	}
}

main () 
{
	int n;
	Sach s[n];
	nhapdanhsach(s,n);
	xuatdanhsach(s,n);
  	getch();
}
