//Day 7: No Space Left on Device 
//part 2 

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

int spaceNeeded = 30000000;

struct node {
	string name;
	vector<pair<string, int>> files; //file name, size  
	vector<node*> edge;
};

vector<node*> location;

//soemthing is wrong and but I don't know 
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
				if (s == "..") {
					location.pop_back();
				}
				else if (location.empty()) {
					node* start = new node;
					start->name = s;
					location.push_back(start);
				}
				else if (s == "/") {
					while (location.size() >= 2) {
						location.pop_back(); 
					}
				}
				else {
					vector<node*>& nxt = location[location.size() - 1]->edge; 
					for (int i = 0; i < nxt.size(); ++i) {
						if (nxt[i]->name == s) {
							location.push_back(nxt[i]); 
							break; 
						}
					}
				}
			}
			else if (s == "ls") {

			}
		}
		else if (s == "dir") {
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

	cout << nodeSize[start] << endl; 
	
	int diff = 30000000 - 21618835;

	int ddiff = diff; 
	int dirSize = -1; 
	for (auto i : nodeSize) {
		if (i.second - diff >= 0 && i.second - diff < ddiff) {
			dirSize = i.second;
		}
	}
	cout << dirSize << endl; 

}