//Nhâp sô nguyên n. Tính tông S=1+2+3+...+n
#include<stdio.h>
int main()
{
  int n;
  long S;
  S = 0;
  printf("\n Nhap So Nguyen n: ");
  scanf("%d", &n);
 
  for(int i = 1; i <=n; i++)
    {
        S = S + i;
    }
  printf("\n tong %ld: ", S);
}
