//b�i 35
// nh�p ma tr�n vu�ng c�p n c�c s� thuc.t�nh t�ng c�c ph�n tu tr�n duong ch�o ch�nh,duonng ch�o phu
// vi�t lai ma tr�n v� k�t qua ra m�n h�nh
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,a[10][10];
	float tgc=0,tgp=0;
	printf("nhap cap ma tran\n");scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]:",i,j);scanf("%d",&a[i][j]);
		}
		printf("ma tran vua nhap\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
	tgc=0;
	tgp=0;
	for(i=0;i<n;i++)
	{
		tgc+=a[i][i];
		tgp+=a[i][n-1-i];
	}
	printf("tong cheo chinh %f",tgc);
	printf("\ntong cheo phu %f",tgp);
}
