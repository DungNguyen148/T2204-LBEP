#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao chieu cao cua n:");
	scanf("%d",&n);
	if (n>0){
		int i, j;
		for(i =1 ; i < 7 ; i++){
			for(j = 1 ; j<i; j++){
				printf("*");
			}
			printf("\n");
		}
	}else{
		printf("Nhap vao so duong n!");
	}
}

