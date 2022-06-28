// bài 36
// nhâp ma trân các sô thuc gôm m hàng n côt.tính tông các phân tu trên duong vien cua ma trân.viêt lai ma trân và in ra màn hình
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
