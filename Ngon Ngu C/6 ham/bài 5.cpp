//b�i 5
// x�y dung h�m ki�m tra 1 s� c� phai la 1 s� nguy�n t� kh�ng? �p dung vi�t chuong tr�nh nh�p v�o tu b�n ph�m s� nguy�n duong n,
// vi�t ra m�n h�nh c�c s� nguy�n t� <=n
#include<stdio.h>
#include<math.h>
int ktsonguyento(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
		{
			return 0;
			break;
		}
		return 1;		
}
int main()
{
	int n;
	printf("nhap n:");scanf("%d",&n);
	for(int i=2;i<=n;i++)
	if(ktsonguyento(i)==1)
	printf("\n cac so nguyen to: %d",i);
}
