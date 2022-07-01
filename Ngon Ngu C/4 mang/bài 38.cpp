// bài 38
// nhâp ma trân gôm các sô nguyên m hàng và n côt.sap xêp các phân tu theo chiêu tang dân cua hàng và côt
#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,x,y,i,j,a[10][10],tg;
	float tong=0;
	printf("nhap so dong-so cot ma tran\n");scanf("%d %d",&m,&n);
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
	printf("\n Ma tran duoc sap xep theo thu tu tang dan theo hang va cot:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			for(x=0;x<m;x++)
			for(y=0;y<n;y++)
			if (a[i][j]<a[x][y])
         	{
				tg=a[i][j];
	         	a[i][j]=a[x][y];
	         	a[x][y]=tg;
      		}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
}
