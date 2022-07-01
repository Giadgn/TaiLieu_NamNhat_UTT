//bài 19
//viêt chuong trình nhâp vào 1 sô nguyên n.Dêm xem sô do co bao nhiêu chu sô và tính tông cua chúng.in kêt qua ra màn hình
#include<stdio.h>
#include<math.h>
int main()
{
	int n, tong=0, demso=0;
	printf("nhap so :");scanf("%d", &n);
	while(n>0)
	{
		tong+=n%10;
		n/=10;
		++demso;
	}
	printf("so co %d chu so\n", demso);
	printf("tong cac chu so la: %d\n", tong);	
}
