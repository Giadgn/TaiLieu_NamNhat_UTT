// b�i 26
//vi�t chuong tr�nh thuc hi�n lap lai vi�c nh�p 1 s� nguy�n duong n tu b�n ph�m,t�nh v� in n! . k�t th�c chuong tr�nh khi nh�p n=0
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	unsigned long int gt;
	do
	{
		printf("nhap n:\n");scanf("%d", &n);
		gt=1;
		for(i=1; i<=n; i++)
		gt*=i; 
		printf("%d! = %lu\n",n,gt);
	}
	while (n!=0);
}

