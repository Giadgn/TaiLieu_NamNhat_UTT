// b�i 23
// x�y dung c�u tr�c sach g�m:masach,tensach,tacgia,namxb
// y�u c�u:
// a vi�t chuong tr�nh nh�p v�o danh s�ch n quy�n s�ch
// b t�m v� in ra m�n h�nh c�c quy�n s�ch c� t�n "tin hoc dai cuong"
// c sap x�p v� in lai danh s�ch c�c quy�n s�ch theo thu tu abc cua t�n s�ch
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
 struct sach
  {
  	char ms[20],ts[20],tg[20];
  	int nxb;
  };
 void xuatdulieusach(sach s)
  {
    printf("\nMa sach:%8s Ten sach:%8s Tac gia:%8s Nam XB:%d\n",
      s.ms,s.ts,s.tg,s.nxb);
  }
main()
 {
  struct sach s[100],tg;
  int i,n,j;
  char str[50],ten[50]="tin hoc dai cuong";
// a vi�t chuong tr�nh nh�p v�o danh s�ch n quy�n s�ch
  printf("Nhap so sach:");scanf("%d",&n);
  for (i=0;i<n;i++)
   {
   	printf("\nNhap sach thu %d\n",i+1);fflush(stdin);
   	printf("Ma sach:");gets(s[i].ms);
   	printf("Ten sach:");gets(s[i].ts);
   	printf("Tac gia:");gets(s[i].tg);
   	printf("Nam xuat ban:");scanf("%d",&s[i].nxb);
   }
// b t�m v� in ra m�n h�nh c�c quy�n s�ch c� t�n "tin hoc dai cuong"
  printf("\n---Sach Tin hoc dai cuong---");
  for (i=0;i<n;i++)
   if (s[i].nxb=2000)
	xuatdulieusach(s[i]);
// c sap x�p v� in lai danh s�ch c�c quy�n s�ch theo thu tu abc cua t�n s�ch 
  printf("\n---Danh sach sach sap xep theo ten sach:---"); 
  for (i=0;i<n-1;i++)
   for (j=i+1;j<n;j++)
    if(strcmp(s[i].ts,s[j].ts)>0)
		{
	      tg=s[i];
		  s[i]=s[j];
		  s[j]=tg;
  	    }
  for (i=0;i<n;i++)
	xuatdulieusach(s[i]);
  getch();
 }

