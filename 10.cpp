#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <string> vector1 = { "Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can", "?" };
	string new_word;
	cout << "¬ведите новое слово: ";
	cin >> new_word;
	cout << endl;
	for (int i = 0; i < vector1.size(); ++i) {
		if (vector1[i] == "can" or vector1[i] == "Can") {
			vector1[i] = new_word;
		}
		cout << vector1[i] << " ";
	}
	cout << endl;
	return 0;
}
