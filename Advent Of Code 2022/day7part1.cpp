//Day 7: No Space Left On Device 
//part 1 

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
/*
using namespace std; 

struct node {
	string name; 
	vector<pair<string, int>> files; //file name, size  
	vector<node*> edge; 
};

vector<node*> location;

node* read() {
	fstream fstr("Day7Input.txt"); 
	string line; 
	while (getline(fstr, line)) {
		stringstream ss(line); 

		string s; 
		ss >> s; 
		
		if (s == "$") {
			ss >> s; 
			if (s == "cd") {
				ss >> s; 
				if (location.empty()) {
					node* start = new node; 
					start->name = s; 
					location.push_back(start); 
				}
				if (s == "..") {
					location.pop_back(); 
				}
				else {
					for (auto& i : location[location.size() - 1]->edge) {
						if (i->name == s) {
							location.push_back(i); 
							break; 
						}
					}
				}
			}
			else if (s == "ls") {
				//do nothing 
			}
		}
		else if(s == "dir"){
			ss >> s; 
			node* nxt = new node; 
			nxt->name = s; 
			location[location.size() - 1]->edge.push_back(nxt); 
		}
		else {
			int size = stoi(s); 
			ss >> s; 
			location[location.size() - 1]->files.push_back({ s, size }); 
		}
	}
	return location[0]; 
}

map<node*, int> nodeSize; 
int sizeOfDir(node* n) {
	int size = 0; 
	for (auto& i : n->files) {
		size += i.second; 
	}

	for (auto& i : n->edge) {
		size += sizeOfDir(i); 
	}
	
	nodeSize[n] = size; 
	return size; 
}

int main() {
	node* start = read(); 
	sizeOfDir(start); 

	int res = 0; 
	for (auto i : nodeSize) {
		if (i.second <= 100000) {
			res += i.second; 
		}
	}
	cout << res << endl; 

}
*/