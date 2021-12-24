#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			float x=-c/b;
			printf("Phuong trinh co mot nghiem:%f\n",x);
		}
	}else{
		float d= b*b - 4*a*c;
		if(d<0){
			printf("Phuong trinh vo nghiem");
		}else{
			if(d==0){
				float x= -b/(2*a);
				printf("Phuong trinh co nghiem:%f\n",x);
			}else{
				float x1= float(-b + sqrt(d)) / (2*a);
				float x2= float(-b - sqrt(d)) / (2*a);
				printf("Phuong trinh co nghiem:%f\n",x1,x2);
			}
		}
    }
}
