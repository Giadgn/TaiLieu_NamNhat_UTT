//b�i 16(tam gi�c c�n r�ng)
//nhap so nguy�n h,ve tam gi�c * c� chi�u cao h
#include<stdio.h>
int main()
{
	int i,j,h;
	printf("nhap so:");
	scanf("%d",&h);
	for(i=0; i<(h-1); i++)
	{
		for(j=0 ;j<(2*h-1);j++)
		{
		if(j == (h-1-i) || j == (h-1+i)) 
		printf(" * ");
		else 
		printf("   ");
		}
		printf("\n");
	}
	for(i=0; i<(2*h-1); i++)
	printf(" * ");
}
