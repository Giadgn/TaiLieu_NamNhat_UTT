// b�i 36
// nh�p ma tr�n c�c s� thuc g�m m h�ng n c�t.t�nh t�ng c�c ph�n tu tr�n duong vien cua ma tr�n.vi�t lai ma tr�n v� in ra m�n h�nh
#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j,a[100][100];
	float tong=0;
	printf("nhap so dong-so cot\n");scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
		printf("a[%d][%d]:",i,j);scanf("%d",&a[i][j]);
		}
		printf("ma tran vua nhap\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		tong+=a[i][0];
	}
	for(j=1;i<n;j++)
	{
		tong+=a[0][j];
	}
	for(i=1;i<m-1;i++)
	{
		tong+=a[i][n-1];
	}
	for(j=1;i<n;j++)
	{
		tong+=a[m-1][j];
	}	
	printf("tong duong vien %f",tong);
}
