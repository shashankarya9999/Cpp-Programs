#include<iostream>
#include<vector>

using namespace std;

int main()
{
        vector<int> test_scores {100,98,99,97,88};

        cout << "First score at index 0: " << test_scores.at(0) << endl;
        
	cout << "Second score at index 1: " << test_scores.at(1) << endl;
        
	cout << "Third score at index 2: " << test_scores.at(2) << endl;
        
	cout << "Fourth score at index 3: " << test_scores.at(3) << endl;
        
	cout << "Fifth score at index 4: " << test_scores.at(4) << endl;

	test_scores.push_back(80);
	test_scores.push_back(84);

	for(int i=5; i<7; i++ )
	{
		cout << test_scores.at(i) << endl;
	}

	cout << "There are " << test_scores.size() << " scores in the vector" << endl;

	// cout << test_scores[10] << endl; // no exception

	cout << test_scores.at(10) << endl; // exception

	return 0;
}                   
