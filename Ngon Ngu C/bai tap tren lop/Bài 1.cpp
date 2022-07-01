//nhâp vào 2 sô a, b. Tính tông, tích, thuong, hiêu
#include <stdio.h>

int main () {
	int a, b;
	printf("Nhap hai so nguyen a, b: ");
	scanf("%d%d", &a, &b);
	int sum = a + b;
	int mul = a * b;
	int sub = a - b;
	
	printf("%d + %d = %d\n", a, b, sum);
	printf("%d - %d = %d\n", a, b, sub);
	printf("%d * %d = %d\n", a, b, mul);	
	
	if(b == 0) {
		printf("Khong thuc hien duoc phep chia.");
	} else {
		float div = (float)a / b;
		printf("%d / %d  = %f\n", a, b, div);
	}
	return 0;
}

