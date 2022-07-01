// bài 12
// viêt chuong trình dôi co sô:nhâp sô nguyên duong n o hê 10.yêu câu dôi sang sô o hê m bât kì
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
