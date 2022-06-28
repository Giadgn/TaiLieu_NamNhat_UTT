//bài 37
// nhâp ma trân các sô thuc gôm m hàng và n côt.nhâp vào môt sô k tu ban phim.tính tông các phân tu trên hàng k và côt k.
// viêt lai ma trân và kêt qua ra màn hình
#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j,k,a[100][100];
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
	//tinh tong hang k
	printf("nhap hang k\n");scanf("%d",&k);
	for(j=0;j<n;j++)
		tong+=a[k][j];
		printf("tong hang %d = %f",k,tong);
	//tinh tong cot k
	tong=0;
	printf("\nnhap cot k\n");scanf("%d",&k);
	for(i=0;i<m;i++)
		tong+=a[i][k];
		printf("tong cot %d = %f",k,tong);
}
