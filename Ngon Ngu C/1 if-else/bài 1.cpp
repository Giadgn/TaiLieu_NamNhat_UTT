//bài 1
//giai và biên luân phuong trình bâc 2 ax^2+bx+c=0
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{	 float a ,b ,c ,x1 ,x2 ,delta;
	 printf("phuong trinh bac 2 co dang: ax^2+bx+c=0\n");
	 printf("nhap so lieu a ,b ,c:\n");scanf("%f %f %f", &a ,&b ,&c);
	 if(a==0)
	{
		if(b==0)		
			{	if(c==0)
				printf("phuong trinh vo so nghiem\n");
				else
				printf("phuong trinh vo nghiem\n");
			}
		else
			{
				x1=-c/b;
				printf("phuong trinh co 1 nghiem %f\n",x1);
			}
	}
	else
	{
		delta=b*b-4*a*c ;
		if (delta<0) printf("Phuong trinh vo nghiem");
		if (delta==0)
		{
			x1=-b/(2*a);
			printf("Phuong trinh da nghiem kep:%f",x1);
		}
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet");
			printf("%f",x1);
			printf("%f",x2);
		}
	}
}

