//bài 22
//xây dung câu trúc sinhvien gôm các thông tin sau:hoten,namsinh,diemtb
//a viêt chuong trình nhâp vào danh sách n sinh viên
//b in ra màn hình danh sách các sinh viên xêp loai khá tro lên
//c in ra màn hình danh sách các sinh viên có nam sinh <1997
//d sap xêp và in lai danh sách sinh viên theo thu tu giam dân cua diêm tb
#include <string.h>
#include <stdio.h>
 struct sinhvien
  {
  	char ht[25];
  	int ns;
  	float dtb;
  };
 void xuatdulieusinhvien (sinhvien sv)
  {
    printf("\nHoten:%-20s-Nam sinh: %d-Diem TB: %3.2f\n",
      sv.ht,sv.ns,sv.dtb);
  }
main()
 {
  struct sinhvien sv[100],tg;
  int i,n,j;
  printf("Nhap so sinh vien:");scanf("%d",&n);
//a viêt chuong trình nhâp vào danh sách n sinh viên
  for (i=0;i<n;i++)
   {
   	printf("\nNhap SV thu %d\n",i+1);fflush(stdin);
  
   	printf("Ho ten:");gets(sv[i].ht);
   	printf("Nam sinh:");scanf("%d",&sv[i].ns);
   	printf("Diem TB:");scanf("%f",&sv[i].dtb);
   }
//b in ra màn hình danh sách các sinh viên xêp loai khá tro lên
  printf("\nDanh sach cac SV xep loai kha tro len:\n");
  for (i=0;i<n;i++)
   if (sv[i].dtb>=7)
   xuatdulieusinhvien(sv[i]);
//c in ra màn hình danh sách các sinh viên có nam sinh <1997
  printf("\nDanh sach cac SV co nam sinh <1997:\n");
  for (i=0;i<n;i++)
   if (sv[i].ns<1997)
   xuatdulieusinhvien(sv[i]); 
//d sap xêp và in lai danh sách sinh viên theo thu tu giam dân cua diêm tb
  printf("\nDanh sach cac SV xep theo Diem TB giam dan:\n"); 
  for (i=0;i<n-1;i++)
   for (j=i+1;j<n;j++)
    if (sv[i].dtb<sv[j].dtb)
     { 
		tg=sv[i];
		sv[i]=sv[j];
		sv[j]=tg;
	 }
  for (i=0;i<n;i++)
   xuatdulieusinhvien(sv[i]);
 }

