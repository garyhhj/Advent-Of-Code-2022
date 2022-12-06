//Day 5: Supply Stack 
//part 1

/* this was removed from beginning of input file 
[N]     [Q]         [N]            
[R]     [F] [Q]     [G] [M]        
[J]     [Z] [T]     [R] [H] [J]    
[T] [H] [G] [R]     [B] [N] [T]    
[Z] [J] [J] [G] [F] [Z] [S] [M]    
[B] [N] [N] [N] [Q] [W] [L] [Q] [S]
[D] [S] [R] [V] [T] [C] [C] [N] [G]
[F] [R] [C] [F] [L] [Q] [F] [D] [P]
 1   2   3   4   5   6   7   8   9 
 */


#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
/*
using namespace std; 

vector<vector<char>> supplyStack = {
	{},
	{'F', 'D', 'B', 'Z', 'T', 'J', 'R', 'N'},
	{'R', 'S', 'N', 'J', 'H'},
	{'C', 'R', 'N', 'J', 'G', 'Z', 'F', 'Q'},
	{'F', 'V', 'N', 'G', 'R', 'T', 'Q'},
	{'L', 'T', 'Q', 'F'},
	{'Q', 'C', 'W', 'Z', 'B', 'R', 'G', 'N'},
	{'F', 'C', 'L', 'S', 'N', 'H', 'M'},
	{'D', 'N', 'Q', 'M', 'T', 'J'},
	{'P', 'G', 'S'},
};



void move(fstream& fstr) {
	string line; 
	while (getline(fstr, line)) {
		stringstream ss(line);
		string num;
		int n, a, b;
		ss >> num; //move 
		ss >> n;
		ss >> num; //from 
		ss >> a;
		ss >> num; //to 
		ss >> b;

		while (n--) {
			char temp = supplyStack[a][supplyStack[a].size() - 1];
			supplyStack[a].pop_back();
			supplyStack[b].push_back(temp);
		}

	} 

	return; 
}

int main() {
	fstream fstr("Day5Input.txt"); 
	move(fstr); 

	for (int i = 0; i < supplyStack.size(); ++i) {
		if (supplyStack[i].empty()) continue; 
		cout << supplyStack[i][supplyStack[i].size() - 1]; 
	}
	cout << endl; 

}
*/