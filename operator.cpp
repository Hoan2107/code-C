# include <stdio.h>

int main (){
	int a = 300, b = 200;
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	float chia = a / b;
	int du = a % b;
	printf("Tong : %d, hieu: %d, tich: %d, chia: %.2f, du: %d", tong, hieu, tich, chia, du);
	return 0;
}
