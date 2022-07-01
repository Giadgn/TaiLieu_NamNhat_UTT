// bài 17(2)
// nhâp sô nguyên n,sô thuc x.tính:
// S2=1/(2^2)-1/(4^2)+...+((-1)^n-1/(2n)^2)
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float S2=0;
	printf("nhap n\n");scanf("%d",&n);
	for(i=1;i<=n;i++)
		S2+=pow(-1,i-1)/pow(2*i,2);
		printf("tong S2=%f",S2);
}
