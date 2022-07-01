// nhâp vào 2 sô nguyên duong bât kì,xây dung hàm tìm USCLN và BSCNN cua 2 so do
// Tim UCLN - BCNN 
#include <math.h>
#include <stdio.h>
int ucln(int a, int b)
{
	while (a!=b)
	{ 
		if (a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int bcnn(int a,int b)
{
  int t,i;
  for (i=1;i<=b;i++)
   if ((a*i)%b==0)
    { 
		t=a*i; break; 
	}
  return t;
}
main()
{
  int a,b;
  do
	{
    	printf(" Nhap a: ");scanf("%d",&a);
     	printf("\n Nhap b: ");scanf("%d",&b); 
	}
  while ((b<=0)||(a<=0));
 printf("\n Uoc so chung lon nhat cua %d va %d : %d",a,b,ucln(a,b));
 printf("\n Boi so chung nho nhat cua %d va %d : %d",a,b,bcnn(a,b));
 printf("\n");
 	return 0;
}


