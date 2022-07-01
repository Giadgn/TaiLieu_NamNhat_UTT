// bài 34 cách 1
// viêt chuong trình nhâp môt day sô nguyên gôm n phân tu.kiêm tra xem dãy sô này có dôi xung không?nêu không hãy viêt theo thu tu nguoc lai.
#include<stdio.h>
#include<math.h>
int main()
{
	int a[100],n,i;
	printf("\n Nhap so phan tu:");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\na[%d]=",i);scanf("%d",&a[i]);
	}
	printf("\nday so vua nhap:");
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	for(i=0;i<n/2;i++)
		if(a[i]!=a[n-i-1])
		{
			printf("\nday khong doi xung\n");break;
		}
		else if(i=n/2) printf("\n day so doi xung:");	
	for(i=0;i<n;i++)
	printf("%5d",a[n-i-1]);
}
