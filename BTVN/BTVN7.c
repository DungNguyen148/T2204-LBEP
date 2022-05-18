#include<stdio.h>
#include<math.h>

int main(){
	int n;
	float S=0;
	scanf("%d", &n);
	while(n>0){
		S= S+(float)1/n;
		n--;
	}
	printf("tong cua S=%.2f", S);
}
