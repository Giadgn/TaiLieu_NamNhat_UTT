// bài 36
// nhâp ma trân các sô thuc gôm m hàng n côt.tính tông các phân tu trên duong vien cua ma trân.viêt lai ma trân và in ra màn hình
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
