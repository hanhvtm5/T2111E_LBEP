#include <stdio.h>
int main(){
	int s=0;
	for(int i=0; i<200; i+=2){
		s += i;
	}
	printf("Tong 100 so le dau tien la:%d",s);
}
