//b�i 37
// nh�p ma tr�n c�c s� thuc g�m m h�ng v� n c�t.nh�p v�o m�t s� k tu ban phim.t�nh t�ng c�c ph�n tu tr�n h�ng k v� c�t k.
// vi�t lai ma tr�n v� k�t qua ra m�n h�nh
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,m,a[10][10],k;
	float tong=0; 
	printf("\n nhap so dong cua ma tran:"); scanf("%d",&m);	
	printf("\n nhap so cot cua ma tran:"); scanf("%d",&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			printf("\n a[%d][%d]=",i,j); scanf("%d",&a[i][j]);
		}
		printf("ma tran vua nhap:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
	// tinh tong hang k
	printf("\nnhap hang k:"); scanf("%d",&k);
	for (j=0;j<n;j++)
		 tong+= a[k][j];
	printf("\ntong hang %d= %.1f\n",k,tong);
	tong=0;
	// tinh tong cot k
	printf("\nnhap cot k:");scanf("%d",&k);
	for(i=0;i<m;i++)
		tong=tong+a[i][k];
		printf("\ntong cot:%d=%.1f",k,tong);	
	}
