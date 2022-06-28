//bài 16(tam giác cân)
//nhap so nguyên h,ve tam giác * có chiêu cao h
#include<stdio.h>
int main()
{
	int i,j,h;
	printf("nhap so:\n");
	scanf("%d" ,&h);
	for(i =0; i<h; i++)
	{
		for(j =0; j<(2*h-1); j++)
		{
			if(j >= (h-1-i) && j <= (h-1+i))
			printf(" * ");
			else 
			printf("   ");
		}
		printf("\n");
	}
}	
