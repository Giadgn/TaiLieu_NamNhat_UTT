//bài 3
//giai và biên luân hê hai phuong trình bâc nhât 2 ân
// {ax+by=c
// {dx+ey=f
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f;
	float x,y,D,DX,DY;
	printf("giai he phuong trinh\n");
	printf("ax+by=c nhap a b c\n");scanf("%d %d %d",&a,&b,&c);
	printf("dx+ey=f nhap d e f\n");scanf("%d %d %d",&d,&e,&f);
	D=a*e-b*d;
	DX=-b*f+c*e;
	DY=a*f-c*d;
	if(D==0)
	{
		if(DX==0 && DY==0) printf("phuong trinh vo so nghiem");
		else printf("phuong trinh vo nghiem\n");
	}
	else 
	{
		x=DX/D;
		y=DY/D;
	printf("phuong trinh co nghiem duy nhat x=%f y=%f",x,y);
	}
}
