//bài 5
// xây dung hàm kiêm tra 1 sô có phai la 1 sô nguyên tô không? Áp dung viêt chuong trình nhâp vào tu bàn phím sô nguyên duong n,
// viêt ra màn hình các sô nguyên tô <=n
#include<stdio.h>
#include<math.h>
int ktsonguyento(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
		{
			return 0;
			break;
		}
		return 1;		
}
int main()
{
	int n;
	printf("nhap n:");scanf("%d",&n);
	for(int i=2;i<=n;i++)
	if(ktsonguyento(i)==1)
	printf("\n cac so nguyen to: %d",i);
}
