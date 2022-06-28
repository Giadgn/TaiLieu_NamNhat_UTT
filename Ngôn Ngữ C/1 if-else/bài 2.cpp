//bài 2
//giai phuong trình trùng phuong bâc 4 ax^4+bx^2+c=0
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,t1,t2,delta;
	printf("\ngiai phuong trinh ax^4+bx^2+c=0");
	printf("\nnhap a b c\n");scanf("%f %f %f",&a, &b, &c);

	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			printf("\nphuong trinh vo so nghiem");
			else
			printf("\nphuong trinh vo nghiem");
		}
		else
		{
			t1=-c/b;
			if(t1<0)
			printf("\nphuong trinh vo nghiem");
			else
			printf("\nphuong trinh co nghiem x1=+-%f",x1=sqrt(t1));
		}
	}
	else
	{
	delta=b*b-4*a*c;
	if(delta==0)
	{
		t1=t2=-b/2*a;
		if(t1<0 && t2<0)
		printf("\nphuong trinh vo nghiem");
		else
		printf("\nphuong trinh co nghiem x1=+-%f ",x1=sqrt(t1));
	}
	else
	{
		if(delta<0)
		printf("\nphuong trinh vo nghiem");
		else
		{
			t1=((-b+sqrt(delta))/(2*a));
			t2=((-b-sqrt(delta))/(2*a));
			if(t1<0 && t2<0)
			printf("\nphuong trinh vo nghiem");
			else
			printf("\nphuong trinh co nghiem x1=+-%f    x2=+-%f",x1=sqrt(t1),x2=sqrt(t2));
		}
	}
	}
}
