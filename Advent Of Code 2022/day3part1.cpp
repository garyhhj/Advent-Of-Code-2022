//Day 3: Rucksack Reorganization
//part 1

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std; 
/*
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
	while (getline(fstr, line)) {
		int n = line.size(); 
		int mid = line.size() / 2; 

		vector<int> freq1(256, 0); 
		vector<int> freq2(256, 0); 

		for (int i = 0; i < mid; ++i) {
			freq1[line[i]] += 1; 
		}

		for (int i = mid; i < n; ++i) {
			freq2[line[i]] += 1; 
		}

		for (int i = 0; i < 256; ++i) {
			if (freq1[i] && freq2[i]) {
				total += priority[i]; 
			}
		}
	}

	cout << total << endl; 
}
*/