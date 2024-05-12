#include<iostream>

using namespace std;

int main()
{
	int test_scores [5] {98,96,94,91,88}; 

	int high_score_per_level [10] {3,5}; // initialize to 3,5 and remaining to 0

	const int days_in_year {365};

	double hi_temp[days_in_year] {}; // initialize all to zero
	// double hi_temp[days_in_year] {0}; // also all initialized to zero 

	int another_array [] {1,2,3,4,5}; // size automatically calculated

	cout << "First score at index 0: " << test_scores[0] << endl;
	cout << "Second score at index 1: " << test_scores[1] << endl;
	cout << "Third score at index 2: " << test_scores[2] << endl;
	cout << "Fourth score at index 3: " << test_scores[3] << endl;
	cout << "Fifth score at index 4: " << test_scores[4] << endl;	

	for(int i=0; i<=10; i++)
	{
		cout << hi_temp[i] << endl;
	}	

	cout << "Value of array name: " << test_scores << endl;

	return 0; 
}
