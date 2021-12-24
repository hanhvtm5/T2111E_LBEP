#include <stdio.h>
int main(){
	int n, SND = 0;
	printf("Nhap n=");
	scanf("%d",&n);
	
	do{
		SND= SND*10 + n%10;
	}
	while(n=n/10);
	printf("So nghich dao la:%d\n",SND);
}	
