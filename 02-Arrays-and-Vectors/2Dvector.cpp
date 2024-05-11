#include<iostream>

using namespace std;

int main()
{
	// a 2D vector is a vector of vectors, so intuitively the following syntax comes in mind.
	
	vector<vector<int>> movie_ratings
	{
		{1,2,3,4},
		{2,3,1,1},
		{1,3,4,1}
	};

	// rows: reviewers, columns: movies

	cout << "\nMovie rating for reviewer 1 using array syntax: " << endl;

	cout << movie_ratings[0][0] << endl;
	cout << movie_ratings[0][1] << endl;
	cout << movie_ratings[0][2] << endl;
	cout << movie_ratings[0][3] << endl;

        cout << "\nMovie rating for reviewer 1 using vector syntax: " << endl;	

	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl;	

	return 0;
}
