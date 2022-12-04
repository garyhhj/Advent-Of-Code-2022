//Day 3: Rucksack Reorganization
//part 2

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
/*
using namespace std;

bool getItem(std::fstream& fstr, vector<int>& freq) {
	if (!fstr.good()) return false;

	string line; 
	getline(fstr, line); 
	for (int i = 0; i < line.size();  ++i) {
		freq[line[i]] += 1; 
	}
	return true; 
}

int main() {

	vector<int> priority(256, 0);
	for (int i = 'a'; i <= 'z'; ++i) {
		priority[i] = i - 'a' + 1;
	}
	for (int i = 'A'; i <= 'Z'; ++i) {
		priority[i] = i - 'A' + 27;
	}



	fstream fstr("Day3Input.txt");

	int total = 0;
	string line;
	while (true) {
		vector<int> freq1(256, 0);
		vector<int> freq2(256, 0);
		vector<int> freq3(256, 0);

		if (!getItem(fstr, freq1)) break; 
		if (!getItem(fstr, freq2)) break; 
		if (!getItem(fstr, freq3)) break; 

		for (int i = 0; i < 256; ++i) {
			if (freq1[i] && freq2[i] && freq3[i]) {
				total += priority[i];
			}
		}
	}

	cout << total << endl;
}
*/