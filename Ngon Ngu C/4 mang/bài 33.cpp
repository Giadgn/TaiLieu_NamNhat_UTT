//bài 33
//viet chuong trinh nhap day gom n so thuc.dua tat ca cac so am len dau,cac so duong xuong cuoi va cac so 0 dung giua,thu tu khong thay doi
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,j;
	float a[100],tg;
	printf("\nnhap so phan tu cua mang:");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\na[%d]:",i);scanf("%f",&a[i]);
	}
	printf("day so vua nhap\n");
	for(i=0;i<n;i++)
		printf("%5.1f",a[i]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			tg=a[i];	
			a[i]=a[j];		
			a[j]=tg;
		}
	printf("\nday so sap xep theo thu tu:\n");
	for(i=0;i<n;i++)
		printf("%5.1f",a[i]);	
}
