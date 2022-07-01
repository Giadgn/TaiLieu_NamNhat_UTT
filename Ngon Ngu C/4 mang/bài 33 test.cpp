//bài 33
//viet chuong trinh nhap day gom n so thuc.dua tat ca cac so am len dau,cac so duong xuong cuoi va cac so 0 dung giua,thu tu khong thay doi
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,tg,a[10];
	printf("nhap so phan tu\n");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);scanf("%d",&a[i]);
	}
	printf("\nday so vua nhap\n");
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
	printf("\nday so sap xep la:");
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
}
