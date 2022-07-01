// bài 11
// viêt chuong trình dôi co sô:nhâp sô nguyên n o he m bat ki(2-16).yêu câu dôi sang co sô o hê 10
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,cs,d=0,dem=0;
	printf("nhap so n-cs\n");scanf("%d %d",&n,&cs);
	while(n!=0)
	{
		++dem;
		a=n%10;
		n/=10;
		d+=(a*pow(cs,dem-1));
	}
	printf("so chuyen doi la %d",d);
}
