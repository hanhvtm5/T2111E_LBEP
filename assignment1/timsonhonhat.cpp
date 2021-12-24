#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a<b && a<c){
		printf("Min=%d\n",a);
	}else{
		if(c<b && c<a){
			printf("Min=%d\n",c);
		}else{
			printf("Min=%d\n",b);
		}
	}
}
