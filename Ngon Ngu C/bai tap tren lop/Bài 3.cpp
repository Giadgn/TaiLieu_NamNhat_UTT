//nh�p chi�u d�i va chi�u r�ng hcn. T�nh chu vi v� di�n t�ch HCN
#include <stdio.h>

int main() {
	float width, height;
	printf("Nhap hai canh cua HCN: ");	
	scanf("%f%f", &width, &height);
	if(width < 0 && height < 0) {
		printf("Nhap lai canh cua HCN\n");
	} else {
		float a = (width + height) * 2;
		float b = width * height;
		printf("Chu vi cua HCN = %f\n", a);
		printf("Dien tich cua HCN = %f\n,", b);
	}
	return 0;
}
