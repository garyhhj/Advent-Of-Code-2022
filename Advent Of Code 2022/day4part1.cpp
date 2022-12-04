//Day 4: Camp Cleanup 
//part 1 

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
/*
using namespace std; 

bool getPair(fstream& fstr, pair<int,int>& a, pair<int,int>&b) {
	if (!fstr.good()) return false; 

	//get the pairs 
	string line; 
	getline(fstr, line); 

	int index = 0; 
	string num = ""; 

	//first number of first range 
	while (line[index] != '-') {
		num += line[index];
		++index; 
	}
	a.first = stoi(num); 
	num = ""; 
	++index; 

	//second number of first range 
	while (line[index] != ',') {
		num += line[index]; 
		++index; 
	}
	a.second = stoi(num); 
	num = ""; 
	++index;

	//first number of second range 
	while (line[index] != '-') {
		num += line[index]; 
		++index; 
	}
	b.first = stoi(num); 
	num = ""; 
	++index; 

	//second number of second range 
	while (index != line.size()) {
		num += line[index]; 
		++index; 
	}
	b.second = stoi(num); 
	return true; 
}

int main() {
	fstream fstr("Day4Input.txt"); 


	int contain = 0; 
	pair<int, int> a; 
	pair<int, int> b; 
	while (getPair(fstr, a, b)) {	 
		int i = min(a.first, b.first); 
		int j = max(a.second, b.second); 

		if ((i == a.first && j == a.second) || (i == b.first && j == b.second)) {
			contain += 1; 
		}
	}
	cout << contain << endl; 
}
*/