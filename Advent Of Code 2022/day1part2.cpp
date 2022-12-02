//Day 1: Calorie Counting 
//part 2 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
/*
#define ll long long

using namespace std;

int main() {
	fstream fstr("Day1Input.txt");

	vector<int> top3(3, 0); 
	top3.reserve(4); 

	int curr = 0;
	string line;
	while (getline(fstr, line)) {
		if (line.empty()) {
			top3.push_back(curr); 
			sort(top3.rbegin(), top3.rend()); 
			top3.pop_back(); 
			curr = 0;
		}
		else {
			curr += stoi(line);
		}

	}

	int total = 0; 
	for (auto i : top3) {
		total += i; 
	}
	cout << total << endl;
}
*/