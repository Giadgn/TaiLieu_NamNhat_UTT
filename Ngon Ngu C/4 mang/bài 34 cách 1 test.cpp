// b�i 34 c�ch 1
// vi�t chuong tr�nh nh�p m�t day s� nguy�n g�m n ph�n tu.ki�m tra xem d�y s� n�y c� d�i xung kh�ng?n�u kh�ng h�y vi�t theo thu tu nguoc lai.
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,a[10];
	printf("nhap so phan tu\n");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);scanf("%d",&a[i]);
	}
	printf("\nday so vua nhap\n");
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
	for(i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-1-i]) 
		{
			printf("\nday ko doi xung");break;
		}
		else if(i=n/2)
		printf("\nday doi xung\n");
	}
	printf("\nday so sap xep");
	for(i=0;i<n;i++)
	printf("%5d",a[n-1-i]);
}
