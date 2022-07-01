//bài 7
// viêt chuong trình nhâp vào tu bàn phím ngày,tháng,nam.Kiêm tra tinh hop lê cua các giá tri vua nhâp.cho biêt sô ngày trong tháng do
//,sau do tính tông sô ngày tu dau nam dên ngày do.
#include<stdio.h>
#include<math.h>
int main()
{
	int ngay,thang,nam,nhongay=0,maxngay=0;
	printf("nhap ngay-thang-nam\n");scanf("%d %d %d",&ngay,&thang,&nam);
	if(nam%4==0)
	{
		switch(thang)
		{
			case 1:nhongay=0,maxngay=31;break;
			case 2:nhongay=31,maxngay=29;break;
			case 3:nhongay=60,maxngay=31;break;
			case 4:nhongay=91,maxngay=30;break;
			case 5:nhongay=121,maxngay=31;break;
			case 6:nhongay=152,maxngay=30;break;
			case 7:nhongay=182,maxngay=31;break;
			case 8:nhongay=213,maxngay=31;break;
			case 9:nhongay=244,maxngay=30;break;
			case 10:nhongay=274,maxngay=31;break;
			case 11:nhongay=305,maxngay=30;break;
			case 12:nhongay=335,maxngay=31;break;
		}
		if(ngay>0 && ngay<=maxngay && thang>0 && thang<=12)
		{
			printf("ngay %d thang %d nam %d hop le\n",ngay,thang,nam);
			printf("thang %d co %d ngay\n",thang,maxngay);
			printf("tong so ngay %d\n",ngay+nhongay);
		}
		else 			
		printf("ngay %d thang %d nam %d ko hop le\n",ngay,thang,nam);
	}
	else
	{
		switch(thang)
		{
			case 1:nhongay=0,maxngay=31;break;
			case 2:nhongay=31,maxngay=28;break;
			case 3:nhongay=59,maxngay=31;break;
			case 4:nhongay=90,maxngay=30;break;
			case 5:nhongay=120,maxngay=31;break;
			case 6:nhongay=151,maxngay=30;break;
			case 7:nhongay=181,maxngay=31;break;
			case 8:nhongay=212,maxngay=31;break;
			case 9:nhongay=243,maxngay=30;break;
			case 10:nhongay=273,maxngay=31;break;
			case 11:nhongay=304,maxngay=30;break;
			case 12:nhongay=334,maxngay=31;break;
		}
		if(ngay>0 && ngay<=maxngay && thang>0 && thang<=12)
		{
			printf("ngay %d thang %d nam %d hop le\n",ngay,thang,nam);
			printf("thang %d co %d ngay\n",thang,maxngay);
			printf("tong so ngay %d\n",ngay+nhongay);
		}
		else 			
		printf("ngay %d thang %d nam %d ko hop le",ngay,thang,nam);	
	}
}


