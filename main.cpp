#include <iostream>
using namespace std

int main(void) {
	
	string word;
	cout << "Please type the word that you want to make it in capital letters: ";
	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		if (word[i] > 96 && word[i] < 123) {
			cout << char(word[i] - 32);
		}
		else {
			cout << word << endl;
			return 0;
		}
	}
	

	return 0;
}
