#include <iostream>
#include <cmath>

using namespace std;

void mult_table_seven(){
	for (int i = 1; i <= 9; i++){
		cout << i << " x " << 7 << " = " << 7*i << endl;
	}
}

void mult_table_any(int n){
	for (int i = 1; i <= 9; i++){
		cout << i << " x " << n << " = " << i*n << endl;
	}
}

int main(){
	mult_table_any(4);
	system("pause");
	return 1;
}