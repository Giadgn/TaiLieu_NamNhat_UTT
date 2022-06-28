// bài 34 cách 1
// viêt chuong trình nhâp môt day sô nguyên gôm n phân tu.kiêm tra xem dãy sô này có dôi xung không?nêu không hãy viêt theo thu tu nguoc lai.
#include<stdio.h>
#include<malloc.h>
#include<math.h>
int main()
{
	int a[100],n,i;
	int *p=a;
	printf("\n Nhap so phan tu:");scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
	printf("\na[%d]=",i);scanf("%d",&*(p+i));
	}
	printf("\nday so vua nhap:");
	for(i=0;i<n;i++)
		printf("%5d",*(p+i));
	for(i=0;i<n/2;i++)
		if(*(p+i)!=*(p+(n-i-1)))
		{
			printf("\nday khong doi xung\n");break;
		}
		else if(i=n/2) printf("\n day so doi xung:");	
	for(i=0;i<n;i++)
	printf("%5d",*(p+(n-i-1)));
}
