#include<stdio.h>

int main(){
	int n;
	int s = 0;
	int i=1;
	scanf("%d", &n);
	for(i; i<n; i++){
		if(i%2==0 && i%3==0){
			s=i;
		}
	}
	printf("%d", s);
	return 0;
}
