#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int i,n;
    int S =0 ;
    printf("\nNhap n: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    S = S + (i*(i+1) );
   printf("\nTong S = %d",S);
}
