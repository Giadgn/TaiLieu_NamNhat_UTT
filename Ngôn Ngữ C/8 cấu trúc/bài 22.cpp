//b�i 22
//x�y dung c�u tr�c sinhvien g�m c�c th�ng tin sau:hoten,namsinh,diemtb
//a vi�t chuong tr�nh nh�p v�o danh s�ch n sinh vi�n
//b in ra m�n h�nh danh s�ch c�c sinh vi�n x�p loai kh� tro l�n
//c in ra m�n h�nh danh s�ch c�c sinh vi�n c� nam sinh <1997
//d sap x�p v� in lai danh s�ch sinh vi�n theo thu tu giam d�n cua di�m tb
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
//a vi�t chuong tr�nh nh�p v�o danh s�ch n sinh vi�n
  for (i=0;i<n;i++)
   {
   	printf("\nNhap SV thu %d\n",i+1);fflush(stdin);
  
   	printf("Ho ten:");gets(sv[i].ht);
   	printf("Nam sinh:");scanf("%d",&sv[i].ns);
   	printf("Diem TB:");scanf("%f",&sv[i].dtb);
   }
//b in ra m�n h�nh danh s�ch c�c sinh vi�n x�p loai kh� tro l�n
  printf("\nDanh sach cac SV xep loai kha tro len:\n");
  for (i=0;i<n;i++)
   if (sv[i].dtb>=7)
   xuatdulieusinhvien(sv[i]);
//c in ra m�n h�nh danh s�ch c�c sinh vi�n c� nam sinh <1997
  printf("\nDanh sach cac SV co nam sinh <1997:\n");
  for (i=0;i<n;i++)
   if (sv[i].ns<1997)
   xuatdulieusinhvien(sv[i]); 
//d sap x�p v� in lai danh s�ch sinh vi�n theo thu tu giam d�n cua di�m tb
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

