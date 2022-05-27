#include<iostream>
using namespace std;
int Ucln(int a, int b){
	int ucln;
	for (int i = 1; ; i++){
		if(a%i == 0 && b%i ==0){
			ucln = i;
		}
		if(i==a || i== b){
			break;
		}
	}
	return ucln;
}




int main(){
	int a = 55, b= 45;
	int ketqua = Ucln(a,b);
	cout<<"uoc chung lon nhat cua a va b la "<<ketqua;
	return 0;
}
