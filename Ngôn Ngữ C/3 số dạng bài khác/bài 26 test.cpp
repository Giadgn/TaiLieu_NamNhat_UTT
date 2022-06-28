// bài 26
//viêt chuong trình thuc hiên lap lai viêc nhâp 1 sô nguyên duong n tu bàn phím,tính và in n! . kêt thúc chuong trình khi nhâp n=0
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	unsigned long int gt;
	do
	{
		gt=1;
		printf("\nnhap so:\n");scanf("%d",&n);
		for(i=1;i<=n;i++)
		gt=gt*i;
		printf("\n%d! = %lu",n,gt);		
	}
	while(n!=0);
}
