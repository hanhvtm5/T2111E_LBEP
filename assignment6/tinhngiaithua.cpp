#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d", &n);
	
	if(n<0){
		printf("Error!");
	}else{
			int tich=1;
	while(n>0){
		tich *= n;
		n --;
	}
	printf("Dap an :%d\n", tich);
	}
}
