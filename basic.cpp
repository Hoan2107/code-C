#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap gia tri cua n: ");
	scanf("%d", &n); # reads variable
	if ((n % 2) == 0){
		printf("N là so chan");
	}
	return 0;
}
