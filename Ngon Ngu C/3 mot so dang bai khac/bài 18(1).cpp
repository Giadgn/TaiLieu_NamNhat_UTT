// bài 18(1)
// S1=x+(x^2/2!)+(x^3/3!)+...+(x^n/n!)
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,gt;
	float x,S1=0;
	printf("nhap n-x\n");scanf("%d %f",&n,&x);
	gt=1;
	for(i=1;i<=n;i++)
	{
		gt=gt*i;
		S1=S1*(gt);
	}
	printf("tong S1=%f",S1);
}
