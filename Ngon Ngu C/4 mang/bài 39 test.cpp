// b�i 39
// nh�p ma tr�n g�m c�c s� nguy�n m h�ng v� n c�t.sap x�p c�c ph�n tu theo chi�u giam d�n cua h�ng v� c�t
#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j,x,y,a[100][100],tg;
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
		for(j=0;j<n;j++)
			for(x=0;x<m;x++)
			for(y=0;y<n;y++)
			if(a[i][j]>a[x][y])
			{
				tg=a[i][j];
				a[i][j]=a[x][y];
				a[x][y]=tg;
			}
			printf("ma tran sap xep theo chieu giam dan\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
}			
