//Day 2: Rock Paper Scissors 
//part 2

#include <iostream>
#include <fstream>
#include <vector>

/*
using namespace std;

//points based on [A- 'A'][B - 'X']
vector<vector<int>> score = {
	//lose draw win 
		{3, 4, 8}, //rock 
		{1, 5, 9}, //paper 
		{2, 6, 7}, //scissors 
};


int points(char A, char B) {
	int a = A - 'A';
	int b = B - 'X';

	return score[a][b];
}


int main() {
	fstream fstr("Day2Input.txt");

	int total = 0;
	char a, b;
	while (true) {
		fstr >> a >> b;
		if (!fstr.good()) {
			break;
		}

		total += points(a, b);
	}

	cout << total << endl;
}
*/