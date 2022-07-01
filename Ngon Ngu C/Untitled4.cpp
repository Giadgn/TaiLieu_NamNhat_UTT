#include<stdio.h>
#include<conio.h>

main(){
	int n, i;
	printf("Nhap n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		switch(i){
			case 0 : i+=5;
			case 1 : i+=2;
			case 5 : i+=5;
			default : i+=4;
			break;
		}
		printf("%d\t",i);
	}
	getch();
}
