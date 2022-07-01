// bài 30 
// viêt chuong trình nhâp tu bàn phím nam duong lich.viêt ra màn hình nam âm lich tuong ung
// ví du:2015=> AT MUI
#include <stdio.h>
#include <string.h>
void Doinam()
 {
  char can[10][5]={"Canh","Tan","Nham","Quy","Giap","At","Binh","Dinh","Mau","Ki"};
  char chi[12][5]={"Than","Dau","Tuat","Hoi","Ti","Suu","Dan","Mao","Thin","Ty","Ngo","Mui"};
  int nam,i,j;
  printf(" Nhap nam duong lich:");scanf("%d",&nam);
  if (nam>0)
	{ 
   		i=nam%10;j=nam%12;
     	printf("\n Nam %d la nam: %s %s",nam,can[i],chi[j]);
	}
 }
main()
{
  Doinam();
  printf("\n");
 }

