//bài 35
// nhâp ma trân vuông câp n các sô thuc.tính tông các phân tu trên duong chéo chính,duonng chéo phu
// viêt lai ma trân và kêt qua ra màn hình
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
