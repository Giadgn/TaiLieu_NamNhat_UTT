//b�i 4
//nhap vao so thuc a,b,c tu ban phim
//a) ki�m tra a,b,c co l�p th�nh 3 canh cua tam gi�c kh�ng?
//b) n�u c� hay ki�m tra d�y l� tam gi�c c�n,d�u,vu�ng hay tam gi�c thuong.t�nh chu vi v� di�n t�ch cua tam gi�c
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float p,s;
	printf("nhap 3 canh a b c\n");scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b)
	{
		printf("day la tam giac\n");
		if(a==b || b==c || a==c) printf("tam giac can\n");
		else printf("ko la tam giac can\n");
		if(a==b && b==c) printf("tam giac deu\n");
		else printf("ko la tam giac deu\n");
		if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b) printf("tam giac vuong\n");
		else printf("ko la tam giac vuong\n");
		p=(a+b+c)/2;
		printf("chu vi tam giac %f\n",2*p);
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("dien tich tam giac %f\n",s);
	}
	else printf("khong phai tam giac\n");
}
