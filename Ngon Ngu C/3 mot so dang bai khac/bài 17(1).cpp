//bài 17(1)
// nhâp sô nguyên n,sô thuc x.tính:
// S1=1+x^1+x^2+...+x^n
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	float x,S1=0;
	printf("nhap n-x\n");scanf("%d %f",&n,&x);
	for(i=0;i<=n;i++)
		S1+=pow(x,i);
		printf("tong S1=%f",S1);
}
