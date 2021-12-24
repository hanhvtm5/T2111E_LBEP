#include <stdio.h>
int main(){
	int tk = 4000;
	int ls= 8 ;
	int n = 0;
	while(n<4){
		tk= tk + tk*ls/100;
		n ++;
	}
	printf("So tien nhan duoc la:%d", tk);
}
