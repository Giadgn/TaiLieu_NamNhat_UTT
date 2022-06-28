// bài 32 
// viêt chuong trình nhâp day gôm n sô nguyên duong.xét xem trong day co so chinh phuong khong.nêu có in ra màn hình các sô chính phuong
// tu do tìm sô chính phuong lon nhât,bé nhât trong day
#include<stdio.h>
#include<math.h>
#include<malloc.h>
int main()
{
	int n,i,min,max,a[10],dem=0;
	int *p=a;
	printf("nhap so phan tu\n");scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);scanf("%d",&*(p+i));
	}
	printf("day so vua nhap\n");
	for(i=0;i<n;i++)
	printf("%5d",*(p+i));
	min=*(p+0);
	max=*(p+0);
	for(i=0;i<n;i++)
		if(sqrt(*(p+i))*sqrt(*(p+i))==*(p+i))
		{
			dem++;
			printf("\nso chinh phuong\n");
			printf("%5d",*(p+i));
			if(max<*(p+i)) max=*(p+i);
			if(min>*(p+i)) min=*(p+i);
		}
		if(dem>0)
		{
			printf("\nco %d so chinh phuong",dem);
			printf("\nso chinh phuong lon nhat %d",max);
			printf("\nso chinh phuong nho nhat %d",min);
		}
		else printf("\nko co so chinh phuong");
}				
