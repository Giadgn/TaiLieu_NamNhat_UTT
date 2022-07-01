#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, v, p, s;
	printf("Nhap ba canh cua tam giac: ");
	scanf("%d%d%d", &a, &b, &c);
	if( a < 0 or b < 0 or c < 0) {
		printf("Nhap lai ba canh cua tam giac: ");
	} else {
		v = a + b + c;
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("Tong = %d\n", v);
		printf("Chu vi = %d\n", p);
		printf("Dien tich = %d\n", s);
	} 
	return 0;
}
