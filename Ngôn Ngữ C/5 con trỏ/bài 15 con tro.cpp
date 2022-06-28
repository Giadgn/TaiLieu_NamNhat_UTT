//bài 15
// viêt chuong trình nhap tu ban phim môt day gôm n sô thuc.yêu câu:
//a dua ra màn hình sô lon nhât,nho nhât 	//b sap xêp lai day sô theo trât tu tang dân,giam dân 
//c tinh trung bình công các phân tu âm,không âm
#include<stdio.h>
#include<malloc.h>
#include<math.h>
int main()
{
	int n,i,j;
	float a[100],max,min,tg,tongam,sptam,tongduong,sptduong;
	float *p=a;
	printf("nhap so phan tu mang\n");scanf("%d",&n);
	p=(float*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("a[%d]\n",i);scanf("%f",&*(p+i));
	}
	printf("day so vua nhap:\n");
	for(i=0;i<n;i++)
	{
		printf("%5.1f\n",*(p+i));
	}
	//a1
	min=*(p+0);
	for(i=0;i<n;i++)
	{
		if(min>*(p+i))
		min=*(p+i);
	}
	printf("phan tu nho nhat %f\n",min);
	//a2
	max=*(p+0);
	for(i=0;i<n;i++)
	{
		if(max<*(p+i))
		max=*(p+i);
	}
	printf("phan tu lon nhat %f\n",max);
	//b1
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)	
			if(*(p+i)>*(p+j))
			{
				tg=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=tg;
			}
	printf("day so sap xep tang dan\n");
	for(i=0;i<n;i++)
		printf("%5.1f",*(p+i));	
	//b2
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)	
			if(*(p+i)<*(p+j))
			{
				tg=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=tg;
			}
	printf("\nday so sap xep giam dan\n");
	for(i=0;i<n;i++)
		printf("%5.1f",*(p+i));	
	//c1
	for(i=0;i<n;i++)
		if(*(p+i)<0)
		{
			tongam+=*(p+i);
			sptam++;
		}
		printf("\ntrung binh cong am %f\n",tongam/sptam);
	//c2 
	for(i=0;i<n;i++)
		if(*(p+i)>0)
		{
			tongduong+=*(p+i);
			sptduong++;
		}
		printf("\ntrung binh cong duong %f\n",tongduong/sptduong);				
}
