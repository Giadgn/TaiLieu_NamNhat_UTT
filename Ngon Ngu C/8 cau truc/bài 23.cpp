// bài 23
// xây dung câu trúc sach gôm:masach,tensach,tacgia,namxb
// yêu câu:
// a viêt chuong trình nhâp vào danh sách n quyên sách
// b tìm và in ra màn hình các quyên sách có tên "tin hoc dai cuong"
// c sap xêp và in lai danh sách các quyên sách theo thu tu abc cua tên sách
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
// a viêt chuong trình nhâp vào danh sách n quyên sách
  printf("Nhap so sach:");scanf("%d",&n);
  for (i=0;i<n;i++)
   {
   	printf("\nNhap sach thu %d\n",i+1);fflush(stdin);
   	printf("Ma sach:");gets(s[i].ms);
   	printf("Ten sach:");gets(s[i].ts);
   	printf("Tac gia:");gets(s[i].tg);
   	printf("Nam xuat ban:");scanf("%d",&s[i].nxb);
   }
// b tìm và in ra màn hình các quyên sách có tên "tin hoc dai cuong"
  printf("\n---Sach Tin hoc dai cuong---");
  for (i=0;i<n;i++)
   if (s[i].nxb=2000)
	xuatdulieusach(s[i]);
// c sap xêp và in lai danh sách các quyên sách theo thu tu abc cua tên sách 
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

