//Day 6: Tuning Trouble 
//part 1

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

	vi[signal[0]] += 1;
	vi[signal[1]] += 1; 
	vi[signal[2]] += 1; 

	int i = 0; 
	int j = 3; 
	while (j < signal.size()) {
		vi[signal[j]] += 1; 

		int count = 0; 
		for (auto i : vi) {
			if (i) count += 1; 
		}
		if (count == 4) {
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