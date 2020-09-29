#include <iostream>
#include <cmath>

using namespace std;

bool rook(pair<int, int> posA, pair<int, int> posB){
	int x1 = posA.first, y1 = posA.second;
	int x2 = posB.first, y2 = posB.second;
	if (x1 == x2 || y1 == y2){
		return true;
	} else {
		return false;
	}
}

bool bishop(pair<int, int> posA, pair<int, int> posB){
	int x1 = posA.first, y1 = posA.second;
	int x2 = posB.first, y2 = posB.second;
	if (abs(x1 - x2) == abs(y1 - y2)){
		return true;
	} else {
		return false;
	}
}

bool king(pair<int, int> posA, pair<int, int> posB){
	int x1 = posA.first, y1 = posA.second;
	int x2 = posB.first, y2 = posB.second;
	if (abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1){
		return true;
	} else {
		return false;
	}
}

bool queen(pair<int, int> posA, pair<int, int> posB){
	int x1 = posA.first, y1 = posA.second;
	int x2 = posB.first, y2 = posB.second;
	if ((x1 == x2 || y1 == y2) || (abs(x1 - x2) == abs(y1 - y2))){
		return true;
	} else {
		return false;
	}
}

bool white_pawn_1(pair<int, int> posA, pair<int, int> posB){
	int x1 = posA.first, y1 = posA.second;
	int x2 = posB.first, y2 = posB.second;
	if (x1 == x2 && y2 - y1 == 1){
		return true;
	} else {
		return false;
	}
}

bool white_pawn_2(pair<int, int> posA, pair<int, int> posB){
	int x1 = posA.first, y1 = posA.second;
	int x2 = posB.first, y2 = posB.second;
	if (abs(x1 - x2) == 1 && (y2 - y1) == 1){
		return true;
	} else {
		return false;
	}
}

int main(){
	int a, b, c, d;
	cin >> a >> b;
	pair<int, int> PositionA (a, b);
	cin >> c >> d;
	pair<int, int> PositionB (c, d);
	cout << king(PositionA, PositionB);
	system("pause");
	return 1;
}