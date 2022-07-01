//bài 35
// nhâp ma trân vuông câp n các sô thuc.tính tông các phân tu trên duong chéo chính,duonng chéo phu
// viêt lai ma trân và kêt qua ra màn hình
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
