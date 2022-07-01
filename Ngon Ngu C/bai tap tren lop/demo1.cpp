#include<conio.h>
#include<stdio.h>
int main(){
    int i, n;
    int sotachra;
    int s = 0;
    do{
		printf("nhap n :");
		scanf("%d",&n);
	if(n<100||n>1000)
		printf("Nhap lai n");
	}while(n<100||n>1000);
    for(;i!=0;){
        sotachra = i % 10;
        s += sotachra;
        i /= 10;
    }
	if(s>9)    
    printf("%d",s);
    return 0;
}
