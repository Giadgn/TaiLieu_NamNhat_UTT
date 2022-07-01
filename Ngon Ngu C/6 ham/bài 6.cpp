//b�i 6
//x�y dung h�m t�m USCLN cua 2 s� nguy�n duong b�t ky.�p dung vi�t chuong tr�nh nh�p v�o 2 s� nguy�n tuong ung l� tu s� v� m�u s� cua 1 ph�n s�
//vi�t ra m�n h�nh dang t�i gian cua ph�n s� do
#include<stdio.h>
#include<math.h>
int UCLN(int a,int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main()
{
	int a,b;
	printf("\n nhap a=");scanf("%d",&a);
	printf("\n nhap b=");scanf("%d",&b);
	printf("\n UCLN(%d,%d)=%d",a,b,UCLN(a,b));
	printf("\n phan so %d/%d toi gian la %d/%d",a,b,a/UCLN(a,b),b/(UCLN(a,b)));
}
