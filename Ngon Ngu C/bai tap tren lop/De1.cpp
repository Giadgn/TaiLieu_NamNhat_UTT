#include<stdio.h>
#include<conio.h>

int tinhTong (int n) {
	int tong = 0;
	while (n > 0) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int giaiThua (int n) {
	long long giaiThua = 1;
	for (int i = 1; i <= n; i++) {
		giaiThua=giaiThua*i;
	}
	printf ("%d\n",giaiThua);
}

int main () {
	int n, tong = 0;
	do {
		printf ("Nhap gt n > 100: ");
		scanf ("%d", &n);
	} while (n < 100 || n > 1000);
	
	for (int i = 100; i <= n; i++) {
		if (tinhTong(i) > 9) {
			printf ("%d\t ", i);
			printf("\n GIAI THUA %d",giaiThua);
		}
	}

	giaiThua(n);
	
	getch();
	return 0;
}
