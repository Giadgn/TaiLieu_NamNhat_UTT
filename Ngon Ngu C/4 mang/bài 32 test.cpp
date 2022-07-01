// bài 32 
// viêt chuong trình nhâp day gôm n sô nguyên duong.xét xem trong day co so chinh phuong khong.nêu có in ra màn hình các sô chính phuong
// tu do tìm sô chính phuong lon nhât,bé nhât trong day
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,min,max,a[10],dem=0;
	printf("nhap so phan tu\n");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);scanf("%d",&a[i]);
	}
	printf("day so vua nhap\n");
	for(i=0;i<n;i++)
	printf("%5d",a[i]);
	min=a[0];
	max=a[0];
	for(i=0;i<n;i++)
		if(sqrt(a[i])*sqrt(a[i])==a[i])
		{
			dem++;
			printf("\nso chinh phuong\n");
			printf("%5d",a[i]);
			if(max<a[i]) max=a[i];
			if(min>a[i]) min=a[i];
		}
		if(dem>0)
		{
			printf("\nco %d so chinh phuong",dem);
			printf("\nso chinh phuong lon nhat %d",max);
			printf("\nso chinh phuong nho nhat %d",min);
		}
		else printf("\nko co so chinh phuong");
}				
