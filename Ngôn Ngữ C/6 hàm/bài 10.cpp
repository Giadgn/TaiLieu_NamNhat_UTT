//bai 10 
//x�y dung h�m t�nh k!.t�nh t� hop ch�p k cua n
#include<stdio.h>
double gt(int n)
{	
	double kq=1;
	int i;
	for(i=1;i<=n;i++)
		kq*=i;
	return kq;
}
main()
{
	int k,n,kq;
	printf("\n nhap k=");scanf("%d",&k);
	printf("\n nhap n=");scanf("%d",&n);
	kq=gt(n)/(gt(k)*gt(n-k));
	printf("ket qua la %d ",kq);
}
