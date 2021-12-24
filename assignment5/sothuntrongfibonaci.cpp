#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int x1=1,x2=1,x3=2;
	int i=4;
	while(i<=n){
		x1=x2;
		x2=x3;
		x3=x1+x2;
		i++;
	}
	printf("So phai tim:%d\n",x3);
}
	
