//b�i 3
//giai v� bi�n lu�n h� hai phuong tr�nh b�c nh�t 2 �n
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
