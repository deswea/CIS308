#include <stdio.h>

int main() {
	int base;
	int power;
	printf("Base?\n");
	scanf_s("%d", &base);
	printf("Power?\n");
	scanf_s("%d", &power);

	if (base < 0 || power < 0 || base == 0 || power == 0) {
		printf("error");
		getchar();
	}
	printf("%d",calculate(base, power));
	getchar();
	return 0;


}
int calculate(int base, int power) {
	if (power != 0) {
		return (base * calculate(base, power - 1));
	}
	else{
		return 1;
	}

}
	

