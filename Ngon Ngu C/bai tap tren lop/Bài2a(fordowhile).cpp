//b�i 2(a)
// nh�p s� nguy�n n t�nh:
// S1=1^2+2^2+3^2+...+n^2
#include<stdio.h>
#include<math.h>
main()
{
	int n,i,S1=0;
	printf("nhap n :");scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		S1=S1+pow(i,2);
	}
		printf("tong S1=%d",S1);
	return 0;
}
