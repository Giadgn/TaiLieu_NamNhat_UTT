//b�i 35
// nh�p ma tr�n vu�ng c�p n c�c s� thuc.t�nh t�ng c�c ph�n tu tr�n duong ch�o ch�nh,duonng ch�o phu
// vi�t lai ma tr�n v� k�t qua ra m�n h�nh
#include<stdio.h>
#include<math.h>
int main()
{
	int a[10][10],i,j,n,tgc=0,tgp=0;
	printf("\n nhap cap ma tran:"); scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("\n a[%d][%d]=",i,j); scanf("%d",&a[i][j]);
		}
		printf("ma tran vua nhap:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%5d",a[i][j]);
			printf("\n");
	}
	for(i=0;i<n;i++)
	{
		tgc+=a[i][i];
		tgp+=a[i][n-1-i];
	}
	printf("\ntong cheo chinh:%d",tgc);
	printf("\ntong cheo phu:%d",tgp);
}
