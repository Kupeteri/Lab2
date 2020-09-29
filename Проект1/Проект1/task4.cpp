#include <iostream>
#include <cmath>

using namespace std;

void multiplication_first(){
	for (int i = 8; i <= 15; i++){
		for (int j = i; j <= 15; j++){
			cout << i << " x " << j << " = " << i*j << endl;
		}
	}
}

void multiplication_second(int a){
	for (int i = a; i <= 20; i++){
		for (int j = i; j <= 20; j++){
			cout << i << " x " << j << " = " << i*j << endl;
		}
	}
}

void multiplication_third(int b){
	for (int i = 1; i <= b; i++){
		for (int j = i; j <= b; j++){
			cout << i << " x " << j << " = " << i*j << endl;
		}
	}
}

void multiplication_forth(int a, int b){
	for (int i = a; i <= b; i++){
		for (int j = i; j <= b; j++){
			cout << i << " x " << j << " = " << i*j << endl;
		}
	}
}

int main(){
	multiplication_forth(1, 15);
	system("pause");
	return 1;
}