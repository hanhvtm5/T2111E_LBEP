#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d", &n);
	int tong=0;
	
	while(n>0){
		tong += n%10;
		n /= 10;
	}
	printf("Tong cac chu so cua so nguyen n:%d\n", tong);
}
