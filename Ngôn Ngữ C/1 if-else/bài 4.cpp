//b�i 4
//nhap vao so thuc a,b,c tu ban phim
//a) ki�m tra a,b,c co l�p th�nh 3 canh cua tam gi�c kh�ng?
//b) n�u c� hay ki�m tra d�y l� tam gi�c c�n,d�u,vu�ng hay tam gi�c thuong.t�nh chu vi v� di�n t�ch cua tam gi�c
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
	 	if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
	 	printf("day la tam giac vuong\n");
	 	else
	 	printf("ko phai tam giac vuong\n");
	 	if(a==b && b==c )
	 	printf("day la tam giac deu\n");
	 	else
	 	printf("ko phai tam giac deu\n");
	 	if(a==b || b==c || a==c)
	 	printf("day la tam giac can\n");
	 	else
	 	printf("ko phai tam giac can\n");
	 	p=(a+b+c)/2;
	 	printf("chu vi tam giac la: %d\n ",a+b+c);
	 	s=(sqrt(p*(p-a)*(p-b)*(p-c)));
	 	printf("dien tich tam giac la: %0.2f\n",s);
	}
	else
	printf("ko phai tam giac");
	 getch();
}
