//nhâp chiêu dài va chiêu rông hcn. Tính chu vi và diên tích HCN
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
