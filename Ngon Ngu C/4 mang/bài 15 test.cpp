//bài 15
// viêt chuong trình nhap tu ban phim môt day gôm n sô thuc.yêu câu:
//a dua ra màn hình sô lon nhât,nho nhât 	//b sap xêp lai day sô theo trât tu tang dân,giam dân 
//c tinh trung bình công các phân tu âm,không âm
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,min,max,a[10],tg,tongam=0,sptam=0,tongduong=0,sptduong=0;
	printf("nhap so phan tu\n");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);scanf("%d",&a[i]);
	}
	printf("day so vua nhap\n");
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
	//a1
	min=a[0];
	for(i=0;i<n;i++)
	if(min>a[i])
	{
		min=a[i];
	}
	printf("\nphan tu nho nhat: %d",min);
	//a2
	max=a[0];
	for(i=0;i<n;i++)
	if(max<a[i])
	{
		max=a[i];
	}
	printf("\nphan tu lon nhat: %d",max);	
	//b1
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			tg=a[i];
			a[i]=a[j];
			a[j]=tg;
		}
		printf("\nday sap xep tang dan\n");
		for(i=0;i<n;i++)
		printf("%5d",a[i]);
	//b2
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(a[i]<a[j])
		{
			tg=a[i];
			a[i]=a[j];
			a[j]=tg;
		}
		printf("\nday sap xep giam dan\n");
		for(i=0;i<n;i++)
		printf("%5d",a[i]);	
	//c1 
	for(i=0;i<n;i++)
		if(a[i]<0)
		{
			sptam++;
			tongam+=a[i];
		}
		printf("\ntong trung binh am %d\n",tongam/sptam);
	//c2 
	for(i=0;i<n;i++)
		if(a[i]>0)
		{
			sptduong++;
			tongduong+=a[i];
		}
		printf("\ntong trung binh duong %d\n",tongduong/sptduong);		
}
