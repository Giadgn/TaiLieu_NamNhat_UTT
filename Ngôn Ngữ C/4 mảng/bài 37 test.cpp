//b�i 37
// nh�p ma tr�n c�c s� thuc g�m m h�ng v� n c�t.nh�p v�o m�t s� k tu ban phim.t�nh t�ng c�c ph�n tu tr�n h�ng k v� c�t k.
// vi�t lai ma tr�n v� k�t qua ra m�n h�nh
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
