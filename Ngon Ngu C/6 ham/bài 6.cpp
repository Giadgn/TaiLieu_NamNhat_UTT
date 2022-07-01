//bài 6
//xây dung hàm tìm USCLN cua 2 sô nguyên duong bât ky.áp dung viêt chuong trình nhâp vào 2 sô nguyên tuong ung là tu sô và mâu sô cua 1 phân sô
//viêt ra màn hình dang tôi gian cua phân sô do
#include<stdio.h>
#include<math.h>
int UCLN(int a,int b)
{
	a=abs(a);
	b=abs(b);
	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main()
{
	int a,b;
	printf("\n nhap a=");scanf("%d",&a);
	printf("\n nhap b=");scanf("%d",&b);
	printf("\n UCLN(%d,%d)=%d",a,b,UCLN(a,b));
	printf("\n phan so %d/%d toi gian la %d/%d",a,b,a/UCLN(a,b),b/(UCLN(a,b)));
}
