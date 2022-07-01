//Nhâp bán kính r. Tính chu vi, diên tích hình tròn
#include <stdio.h>

int main() {
	float r;
	const float PI = 3.141592f;
	printf("Nhap ban kinh duong tron r: ");
	scanf("%f", &r);
	if(r <= 0) {
		printf("Nhap r > 0");
	} else {
		printf("Chu vi duong tron ban kinh %f = %f\n", r, 2 * PI * r);
		printf("Dien tich duong tron ban kinh %f = %f\n", r, PI* r * r);
	}
	return 0;
}
