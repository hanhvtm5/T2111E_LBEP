#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhao b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+b>a){
		//Yes
		int p=a+b+c;
		float p2=(float)p/2;
		float s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
		printf("Day la ba canh cua tam giac co chu vi:%d \n",p);
		printf("Dien tich ta giac:%f",s);
	}else{
		// No
		printf("Day khong phai la ba canh cua tam giac");
	}
}
