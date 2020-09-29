#include <iostream>

using namespace std;

bool task1_1 (int x, int y, int z){
	if (x % 2 != 0 && y % 2 != 0){
		cout << "condition is true";
		return true;
	} else {
		cout << "condition is false";
		return false;
	}
}

bool task1_2 (int x, int y, int z){
	if (x < 20 ^ y < 20){
		cout << "condition is true";
		return true;
	} else {
		cout << "condition is false";
		return false;
	}
}

bool task1_3 (int x, int y, int z){
	if (x == 0 || y == 0){
		cout << "condition is true";
		return true;
	} else {
		cout << "condition is false";
		return false;
	}
}

bool task1_4 (int x, int y, int z){
	if (x < 0 && y < 0 && z < 0){
		cout << "condition is true";
		return true;
	} else {
		cout << "condition is false";
		return false;
	}
}

bool task1_5 (int x, int y, int z){
	if ((x % 5 == 0 ^ y % 5 == 0) ^ z % 5 == 0){
		cout << "condition is true";
		return true;
	} else {
		cout << "condition is false";
		return false;
	}
}

bool task1_6 (int x, int y, int z){
	if (x > 100 || y > 100 || z > 100){
		cout << "condition is true";
		return true;
	} else {
		cout << "condition is false";
		return false;
	}
}

int main(){
	cout << task1_5(1, 1, 1);
	system("pause");
	return 1;
}