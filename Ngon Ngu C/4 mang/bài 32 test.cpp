// b�i 32 
// vi�t chuong tr�nh nh�p day g�m n s� nguy�n duong.x�t xem trong day co so chinh phuong khong.n�u c� in ra m�n h�nh c�c s� ch�nh phuong
// tu do t�m s� ch�nh phuong lon nh�t,b� nh�t trong day
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
