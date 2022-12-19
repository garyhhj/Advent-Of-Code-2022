//Day 6: Tuning Trouble 
//part 2

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/*
using namespace std;

int solve() {
	fstream fstr("Day6Input.txt");
	string signal;
	fstr >> signal;

	vector<int> vi(255, 0);

	for (int i = 0; i <= 12; ++i) {
		vi[signal[i]] += 1; 
	}

	int i = 0;
	int j = 13;	
	while (j < signal.size()) {
		vi[signal[j]] += 1;

		int count = 0;
		for (auto i : vi) {
			if (i) count += 1;
		}
		if (count == 14) {
			return j + 1;
		}

		++j;
		vi[signal[i]] -= 1;
		++i;
	}

	return -1;
}

int main() {
	cout << solve() << endl;
	return 1;
}
*/