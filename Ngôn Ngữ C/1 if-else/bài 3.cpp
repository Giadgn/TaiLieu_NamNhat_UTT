//b�i 3
//giai v� bi�n lu�n h� hai phuong tr�nh b�c nh�t 2 �n
// {ax+by=c
// {dx+ey=f
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	 int a,b,c,d,e,f;
	 float D,Dx,Dy,x,y;
	 printf("giai va bien luan he phuong trinh\n");
	 printf("ax+by=c-nhap a b c\n");
	 scanf("%d %d %d",&a,&b,&c);
	 printf("dx+ey=f - nhap d e f \n");
	 scanf("%d %d %d",&d,&e,&f);
	 D=a*e-b*d;
	 Dx=c*e-b*f;
	 Dy=a*f-c*d;
	if(D==0)
	{
	 	 if(Dx==0 && Dy==0) 
	 	 printf("phuong trinh vo so nghiem\n");
	 	 else
	 	 printf("phuong trinh vo nghiem\n");
	}
	 else
	 {	 
		 x=Dx/D, y=Dy/D;
		 printf("phuong trinh tren co nghiem duy nhat x=%0.2f y=%0.2f",x ,y);
	 }
	 getch();
}
