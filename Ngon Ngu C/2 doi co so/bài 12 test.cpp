// b�i 12
// vi�t chuong tr�nh d�i co s�:nh�p s� nguy�n duong n o h� 10.y�u c�u d�i sang s� o h� m b�t k�
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,cs;
	int i,j,k;
	
	printf("nhap n-cs\n");scanf("%d %d",&n,&cs);
	printf("so chuyen doi la:\n");
	while(n!=0)
	{
		a=n%cs;
		n/=cs;
			switch(a)
			{
				case 10: printf("A");break;
				case 11: printf("B");break;
				case 12: printf("C");break;
				case 14: printf("E");break;
				case 15: printf("F");break;
				default:printf("%d",a);
				a=a/10;
			}
	}		
}
