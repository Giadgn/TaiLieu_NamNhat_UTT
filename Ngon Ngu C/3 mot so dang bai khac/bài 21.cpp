//bài 21
// cân có tông 20000d tu ba loai giây 1000d,2000d,5000d.lâp chuong trình dê tìm tât ca phuong án có thê
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z,dem=0;
	for(x=1;x<=20;x++)
	for(y=1;y<=10;y++)
	for(z=1;z<=9;z++)
	if(1000*x+2000*y+5000*z==20000)
	{
	dem++;
	printf("phuong an la: %d-%d-%d\n",x,y,z);
	}
	printf("so phuong an:%d\n",dem);
}
