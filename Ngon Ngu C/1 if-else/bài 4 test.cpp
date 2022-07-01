//bài 4
//nhap vao so thuc a,b,c tu ban phim
//a) kiêm tra a,b,c co lâp thành 3 canh cua tam giác không?
//b) nêu có hay kiêm tra dây là tam giác cân,dêu,vuông hay tam giác thuong.tính chu vi và diên tích cua tam giác
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
