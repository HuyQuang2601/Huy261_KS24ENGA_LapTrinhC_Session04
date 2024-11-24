#include <stdio.h>

int main(){
	int a;
	printf("Moi ban nhap vao 1 so nguyen");
	scanf("%d, &a");
	if (a <= 0){
		printf("Day la so nguyen am");
	} else {
		printf("Day la so nguyen duong");
	}
}
