//b�i 15
// vi�t chuong tr�nh nhap tu ban phim m�t day g�m n s� thuc.y�u c�u:
//a dua ra m�n h�nh s� lon nh�t,nho nh�t 	//b sap x�p lai day s� theo tr�t tu tang d�n,giam d�n 
//c tinh trung b�nh c�ng c�c ph�n tu �m,kh�ng �m
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
