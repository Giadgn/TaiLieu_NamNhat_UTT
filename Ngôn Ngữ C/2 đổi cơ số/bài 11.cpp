// bài 11
// viêt chuong trình dôi co sô:nhâp sô nguyên n o he m bat ki(2-16).yêu câu dôi sang co sô o hê 10
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,d=0,dem=0,cs;
	printf("nhap n,cs ");scanf("%d %d",&n,&cs);
	while (n!=0)
	{		
			a=n%10;
			n=n/10;	
			++dem;
			d+=(a*pow(cs,dem-1));
	}
	printf("\n so chuyen doi : %d ", d);
}
