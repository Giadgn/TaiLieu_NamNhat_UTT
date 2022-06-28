// bài 34 cách 1
// viêt chuong trình nhâp môt day sô nguyên gôm n phân tu.kiêm tra xem dãy sô này có dôi xung không?nêu không hãy viêt theo thu tu nguoc lai.
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,a[10];
	printf("nhap so phan tu\n");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);scanf("%d",&a[i]);
	}
	printf("\nday so vua nhap\n");
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
	for(i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-1-i]) 
		{
			printf("\nday ko doi xung");break;
		}
		else if(i=n/2)
		printf("\nday doi xung\n");
	}
	printf("\nday so sap xep");
	for(i=0;i<n;i++)
	printf("%5d",a[n-1-i]);
}
