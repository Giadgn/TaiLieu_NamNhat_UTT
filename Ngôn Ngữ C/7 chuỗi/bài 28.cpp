// bài 28
// viêt chuong trình dê doc 1 sô(không quá 5 chu sô)
// VD:12345 =>"muoi hai nghin ba tram bon muoi lan"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int x;
    printf("Nhap so: ");
    scanf("%d", &x);
    int digit = log10((float)x) + 1;
    if (digit > 6)
        printf("Khong thoa man de bai\n");
    else
    {
        // Xet 5 chu so
        if (digit == 5)
        {
            int temp = x / 10000;
            if (temp == 1) printf(" muoi ");
            else if (temp == 2) printf(" hai muoi ");
            else if (temp == 3) printf(" ba muoi ");
            else if (temp == 4) printf(" bon muoi ");
            else if (temp == 5) printf(" nam muoi ");
            else if (temp == 6) printf(" sau muoi ");
            else if (temp == 7) printf(" bay muoi ");
            else if (temp == 8) printf(" tam muoi ");
            else if (temp == 9) printf(" chin muoi ");
            digit--;
            x %= 10000;
        }
        // Xet 4 chu so
        if (digit == 4)
        {
            int temp = x / 1000;
            if(temp==0) printf(" ngan");
            else if (temp == 1) printf(" mot ngan ");
            else if (temp == 2) printf(" hai ngan ");
            else if (temp == 3) printf(" ba ngan ");
            else if (temp == 4) printf(" bon ngan ");
            else if (temp == 5) printf(" nam ngan ");
            else if (temp == 6) printf(" sau ngan ");
            else if (temp == 7) printf(" bay ngan ");
            else if (temp == 8) printf(" tam ngan ");
            else if (temp == 9) printf(" chin ngan ");
            digit--;
            x %= 1000;
        }
        //Xet 3 chu so
        if (digit == 3)
        {
            int temp = x / 100;
            if(temp==0) printf(" khong tram");
            else if (temp == 1) printf(" mot tram ");
            else if (temp == 2) printf(" hai tram ");
            else if (temp == 3) printf(" ba tram");
            else if (temp == 4) printf(" bon tram ");
            else if (temp == 5) printf(" nam tram ");
            else if (temp == 6) printf(" sau tram ");
            else if (temp == 7) printf(" bay tram ");
            else if (temp == 8) printf(" tam tram ");
            else if (temp == 9) printf(" chin tram ");
            digit--;
            x %= 100;
        }
        // Xet 2 chu so
        if (digit == 2)
        {
            int temp = x / 10;
            if(temp==0) printf(" linh");
            else if (temp == 1) printf(" muoi ");
            else if (temp == 2) printf(" hai muoi ");
            else if (temp == 3) printf(" ba muoi ");
            else if (temp == 4) printf(" bon muoi ");
            else if (temp == 5) printf(" nam muoi ");
            else if (temp == 6) printf(" sau muoi ");
            else if (temp == 7) printf(" bay muoi ");
            else if (temp == 8) printf(" tam muoi ");
            else if (temp == 9) printf(" chin muoi ");
            digit--;
        }
        // Xet 1 chu so
         if (digit == 1)
        {
            int temp = x % 10;
			if (temp == 1) printf(" mot ");
            else if (temp == 2) printf(" hai ");
            else if (temp == 3) printf(" ba ");
            else if (temp == 4) printf(" bon ");
            else if (temp == 5) printf(" nam ");
            else if (temp == 6) printf(" sau ");
            else if (temp == 7) printf(" bay ");
            else if (temp == 8) printf(" tam ");
            else if (temp == 9) printf(" chin ");
            digit--;
        }
    }
    return 0;
    }
