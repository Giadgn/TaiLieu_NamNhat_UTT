// bài 27
// viêt chuong trình nhâp xâu kí tu ho và tên.
// Hay chuân hóa xâu do và viêt kêt qua ra màn hình
// (các ký tu dâu viêt hoa,các ky tu sau viêt thuong,giua các tu có 1 ky tu trang,không có ký trang o dâu hoac cuôi xâu)
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

