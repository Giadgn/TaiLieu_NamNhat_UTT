#include<stdio.h>
main ()
{
	int t, n;
	printf("\n Nhap thang, nam:");
	scanf("%d%d", &t,&n);
	switch(t)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\n Co 31 ngay");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\n Co 30 ngay");
			break;
		case 2:
			if(n%4==0)
			{
				printf("\n Thang 2 co 29 ngay");
				break;
			}	
			else
			{
				printf("\n Thang 2 co 28 ngay");
				break;
			}
		default:
			printf("\n Khong co thang nay");
	}
	return 0;
}
