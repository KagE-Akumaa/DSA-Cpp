#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();

}

void findingSubset(char *input, char *output, int i, int j, vector<string> &list) {
	// base case
	if (input[i] == '\0') {
		output[j] = '\0';
		string temp(output);
		list.push_back(temp);
		return;
	}
	output[j] = input[i];
	findingSubset(input, output, i + 1, j + 1, list);
	findingSubset(input, output, i + 1, j, list);
}

int main() {
	char input[100];
	char output[100];
	vector <string> list;
	cin >> input;

	findingSubset(input, output, 0, 0, list);
	sort(list.begin(), list.end(), compare);

	for (auto s : list)
		cout << s << endl;
}