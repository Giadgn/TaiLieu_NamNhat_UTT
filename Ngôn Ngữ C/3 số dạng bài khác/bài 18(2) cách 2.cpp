// bài 18(2) cách 2
// S2=1+1/(2^2)+...+1/(n^2)
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float S2=0;
	printf("nhap n\n");scanf("%d",&n);
	for(i=1;i<=n;i++)
		S2+=1/pow(i,2);
		printf("tong S2=%f",S2);
}
