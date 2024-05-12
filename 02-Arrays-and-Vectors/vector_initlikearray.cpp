#include<iostream>
#include<vector>

using namespace std;

int main()
{
	// empty vector
	// vector<char> vowels;
	
	// 5 elements in vector of characters, all initialized to 0
	// vector<char> vowels (5);

	// 365 elements in a vector containing doubles, all initialized to 80.0
	// vector<double> hi_temp (365,80.0); 

	vector<int> test_scores { 100, 98, 99, 97, 88 };

	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Fifth score at index 4: " << test_scores[4] << endl;

	return 0;
}
