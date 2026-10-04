#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
using namespace std;

void explainPair() {

	pair<int, int> p = { 1, 3 };

	cout << p.first << " " << p.second << endl;

	pair<int, pair<int, int>> p2 = {1, {3, 4}};

	cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

	pair<int, int> arr[] = {{1, 2}, {2 ,5}, {5, 1}};

	cout << arr[1].second << endl;
}

int main() {
	explainPair();
	
	return 0;
}