//bài 33
//viet chuong trinh nhap day gom n so thuc.dua tat ca cac so am len dau,cac so duong xuong cuoi va cac so 0 dung giua,thu tu khong thay doi
#include<stdio.h>
#include<malloc.h>
#include<math.h>
int main()
{
	int i,n,j;
	float a[100],tg;
	float *p=a;
	printf("\nnhap so phan tu cua mang:");scanf("%d",&n);
	p=(float*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("\na[%d]:",i);scanf("%f",&*(p+i));
	}
	printf("day so vua nhap\n");
	for(i=0;i<n;i++)
		printf("%5.1f",*(p+i));
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(*(p+i)>*(p+j))
		{
			tg=*(p+i);	
			*(p+i)=*(p+j);		
			*(p+j)=tg;
		}
	printf("\nday so sap xep theo thu tu:\n");
	for(i=0;i<n;i++)
		printf("%5.1f",*(p+i));	
}
