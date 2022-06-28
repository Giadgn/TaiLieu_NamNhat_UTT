//bài 2
//giai phuong trình trùng phuong bâc 4 ax^4+bx^2+c=0
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2,t1,t2,delta;
	printf("giai phuong trinh ax^4+bx^2+c=0\n");
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
			t1=-c/b;
			if(t1<0)	printf("phuong trinh vo nghiem\n");
			else printf("phuong trinh co nghiem x1=+-%f",x1=sqrt(t1));
		}
	}
	else
	{
		delta=b*b-4*a*c;
		if(delta<0) printf("phuong trinh vo nghiem");
		if(delta==0)
		{
			t1=t2=-b/2*a;
			if(t1<0 && t2)	printf("phuong trinh vo nghiem\n");
			else printf("phuong trinh co nghiem x1=+-%f",x1=sqrt(t1));
		}
		if(delta>0)
		{
			t1=((-b+sqrt(delta))/(2*a));
			t2=((-b-sqrt(delta))/(2*a));
			if(t1<0 && t2<0)	printf("phuong trinh vo nghiem\n");
			else printf("phuong trinh co nghiem x1=+-%f va x2=+-%f",x1=sqrt(t1),x2=sqrt(t2));
		}
	}
}
