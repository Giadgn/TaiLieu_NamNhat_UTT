// b�i 27
// vi�t chuong tr�nh nh�p x�u k� tu ho v� t�n.
// Hay chu�n h�a x�u do v� vi�t k�t qua ra m�n h�nh
// (c�c k� tu d�u vi�t hoa,c�c ky tu sau vi�t thuong,giua c�c tu c� 1 ky tu trang,kh�ng c� k� trang o d�u hoac cu�i x�u)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuanxau(char s[])
 {
  int i;char *s1;
  while (s[0]==' ') strcpy(&s[0],&s[1]); //Xoa dau xau
  while (s[strlen(s)-1]==' ') 
  strcpy(&s[strlen(s)-1],&s[strlen(s)]);//Cuoi xau
  for (i=0;i<strlen(s)-1;i++)
   if (s[i]==' '&& s[i+1]==' ')
    { 
	  strcpy(&s[i],&s[i+1]);
	   i--;
    } 
	//Xoa vo nghia trong xau
  s1=strlwr(s); //Chuyen xau ve chu thuong
  s[0]=toupper(s[0]);  //Dau tu la chu hoa
  while (strstr(s," ")!='\0')
   { 
     s=strstr(s," ")+1;
     s[0]=toupper(s[0]); 
   }
 }
main()
 {
  char s[200];
  printf(" Nhap xau:");gets(s);
  chuanxau(s);
  printf("\n Xau sau khi chuan hoa\n");
  printf("%s",s);
  printf("\n");
 }

