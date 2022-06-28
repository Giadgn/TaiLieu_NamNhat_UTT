// bài 13
//viêt chuong trình nhâp vào 1 sô nguyên n.phân tích sô do thành tích cua các sô nguyên tô
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i;
	printf("\nnhap so:");scanf("%d", &n);
	for(i=2;i<=n;i++ )
	{
		while(n%i==0)
		{
		if(n==i)
		printf("%d", i);
		else
		printf("%d*", i);
		n/=i;
		}	
	}
}
