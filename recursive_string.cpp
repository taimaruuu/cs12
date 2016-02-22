#include <iostream>

using namespace std;

void flipString(string &s);

int main() {
	string line;
	cout << "Enter a sentence:" << endl;
	getline(cin, line);
	cout << endl;
	cout << line << endl;
	flipString(line);
	cout << line << endl;

   return 0;
}

void flipString(string &s)  {
	string word = "";
	int string_size = s.size()

	if (string_size <= 1) {
		return s;
	} else {
		word += s.substr(string_size - 1, 1);


	}
	return word;
}