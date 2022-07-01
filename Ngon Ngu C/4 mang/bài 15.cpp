//bài 15
// viêt chuong trình nhap tu ban phim môt day gôm n sô thuc.yêu câu:
//a dua ra màn hình sô lon nhât,nho nhât 	//b sap xêp lai day sô theo trât tu tang dân,giam dân 
//c tinh trung bình công các phân tu âm,không âm
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	float a[100],max,min,tg,tongam,sptam,tongduong,sptduong;
	printf("nhap so phan tu mang\n");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]\n",i);scanf("%f",&a[i]);
	}
	printf("day so vua nhap:\n");
	for(i=0;i<n;i++)
	{
		printf("%5.1f\n",a[i]);
	}
	//a1
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	printf("phan tu nho nhat %f\n",min);
	//a2
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("phan tu lon nhat %f\n",max);
	//b1
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)	
			if(a[i]>a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
	printf("day so sap xep tang dan\n");
	for(i=0;i<n;i++)
		printf("%5.1f",a[i]);
	//b2
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)	
			if(a[i]<a[j])
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
	printf("\nday so sap xep giam dan\n");
	for(i=0;i<n;i++)
		printf("%5.1f",a[i]);
	//c1
	for(i=0;i<n;i++)
		if(a[i]<0)
		{
			tongam+=a[i];
			sptam++;
		}
		printf("\ntrung binh cong %f\n",tongam/sptam);
	//c2 
	for(i=0;i<n;i++)
		if(a[i]>0)
		{
			tongduong+=a[i];
			sptduong++;
		}
		printf("\ntrung binh cong %f\n",tongduong/sptduong);	
}
