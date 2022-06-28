//bài 1
//giai và biên luân phuong trình bâc 2 ax^2+bx+c=0
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2,delta;
	printf("giai phuong trinh ax^2+bx+c=0\n");
	printf("nhap a b c\n");scanf("%d %d %d",&a,&b,&c);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0) printf("phuong trinh co vo so nghiem");
			else printf("phuong trinh vo nghiem\n");
		}
		else
		{
			x1=-c/b;
			printf("phuong trinh co nghiem x1=%f",x1);
		}
	}
	else
	{
		delta=b*b-4*a*c;
		if(delta<0) printf("phuong trinh vo nghiem");
		if(delta==0)
		{
			x1=-b/2*a;
			printf("phuong trinh co nghiem kep x1=%f",x1);
		}
		if(delta>0)
		{
			x1=((-b+sqrt(delta))/(2*a));
			x2=((-b-sqrt(delta))/(2*a));
			printf("phuong trinh co 2 nghiem phan biet x1=%f \t x2=%f",x1,x2);
		}
	}
}
