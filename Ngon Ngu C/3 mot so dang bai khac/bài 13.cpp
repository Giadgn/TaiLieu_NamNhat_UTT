// b�i 13
//vi�t chuong tr�nh nh�p v�o 1 s� nguy�n n.ph�n t�ch s� do th�nh t�ch cua c�c s� nguy�n t�
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	printf("\nnhap so:");scanf("%d", &n);
	for(i=2;i<=n;i++ )
	{
		while(n%i==0)
		{
		if(n==i)
		printf("%d", i);
		else
		printf("%d*", i);
		n/=i;
		}	
	}
}
