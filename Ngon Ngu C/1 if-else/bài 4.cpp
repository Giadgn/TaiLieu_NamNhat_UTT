//bài 4
//nhap vao so thuc a,b,c tu ban phim
//a) kiêm tra a,b,c co lâp thành 3 canh cua tam giác không?
//b) nêu có hay kiêm tra dây là tam giác cân,dêu,vuông hay tam giác thuong.tính chu vi và diên tích cua tam giác
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 	int a ,b ,c;
 	float p,s;
 	printf("nhap so lieu 3 canh:\n");scanf("%d %d %d", &a ,&b ,&c);
 	if(a+b>c && a+c>b && b+c>a)
 	{
	 	printf("day la tam giac\n");
	 	}else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
	 	printf("day la tam giac vuong\n");
	 	/*else
	 	printf("ko phai tam giac vuong\n");*/
	 	else if(a==b && b==c )
	 	printf("day la tam giac deu\n");
	 	/*else
	 	printf("ko phai tam giac deu\n");*/
	 	else if(a==b || b==c || a==c)
	 	printf("day la tam giac can\n");
	 	/*else
	 	printf("ko phai tam giac can\n");*/
	 	p=(a+b+c)/2;
	 	printf("chu vi tam giac la: %d\n ",a+b+c);
	 	s=(sqrt(p*(p-a)*(p-b)*(p-c)));
	 	printf("dien tich tam giac la: %0.2f\n",s);
	}
	else
	printf("ko phai tam giac");
	 getch();
}
