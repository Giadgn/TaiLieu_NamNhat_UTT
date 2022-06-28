// bài 26
//viêt chuong trình thuc hiên lap lai viêc nhâp 1 sô nguyên duong n tu bàn phím,tính và in n! . kêt thúc chuong trình khi nhâp n=0
#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	unsigned long int gt;
	do
	{
		printf("nhap n:\n");scanf("%d", &n);
		gt=1;
		for(i=1; i<=n; i++)
		gt*=i; 
		printf("%d! = %lu\n",n,gt);
	}
	while (n!=0);
}

