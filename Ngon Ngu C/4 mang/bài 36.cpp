// b�i 36
// nh�p ma tr�n c�c s� thuc g�m m h�ng n c�t.t�nh t�ng c�c ph�n tu tr�n duong vien cua ma tr�n.vi�t lai ma tr�n v� in ra m�n h�nh
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,m,a[10][10];
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
	for(i=0;i<m;i++)
	{
		tong=tong+a[i][0];
	}
	for(j=1;j<n;j++)
	{
		tong=tong+a[0][j];
	}
	for(i=1;i<m-1;i++)
	{
		tong=tong+a[i][n-1];	
	}
	for(j=1;j<n;j++)
	{
		tong=tong+a[m-1][j];
	}
	printf("tong la:%f\n",tong);
}
