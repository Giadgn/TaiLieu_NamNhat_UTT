// b�i 26
//vi�t chuong tr�nh thuc hi�n lap lai vi�c nh�p 1 s� nguy�n duong n tu b�n ph�m,t�nh v� in n! . k�t th�c chuong tr�nh khi nh�p n=0
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	unsigned long int gt;
	do
	{
		gt=1;
		printf("\nnhap so:\n");scanf("%d",&n);
		for(i=1;i<=n;i++)
		gt=gt*i;
		printf("\n%d! = %lu",n,gt);		
	}
	while(n!=0);
}
