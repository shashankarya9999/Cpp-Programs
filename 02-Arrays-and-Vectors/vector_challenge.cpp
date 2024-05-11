/*

////////////////////////////////////////////////////////////////	Challenge	///////////////////////////////////////////////////////////////

Write a C++ program as follows:

- Declare 2 empty vectors of integers named vector1 and vector2, respectively.

- Add 10 and 20 to vector1 dynamically using push_back
- Display the elements in vector1 using the .at() method as well as its size using the size() method

- Add 10 and 20 to vector2 dynamically using push_back
- Display the elements in vector2 using the .at() method as well as its size using the size() method

- Declare an empty 2D vector called vector_2d

- Add vector1 to vector_2d dynamically using push_back
- Add vector1 to vector_2d dynamically using push_back 

- Display the elements in vector_2d using the .at() method

- Change vector1.at(0) to 1000

- Display the elements in vector_2d again using the .at() method

- Display the elements in vector1 

*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vector1;
	vector<int> vector2;

	// only one argument for push_back
	vector1.push_back(10);
	vector1.push_back(20);	

	cout << "vector1[0] = " << vector1.at(0) << endl;
	cout << "vector1[1] = " << vector1.at(1) << endl;

	cout << "Size of vector1: " << vector1.size() << endl;
	cout << endl;
	
	vector2.push_back(100);
	vector2.push_back(200);

	cout << "vector2[0] = " << vector2.at(0) << endl;
	cout << "vector2[1] = " << vector2.at(1) << endl;

	cout << "Size of vector2: " << vector2.size() << endl;
	cout << endl;

	vector <vector<int>> vector_2d;

	// when we are putting vectors of int,float,doubles into 2D vectors, we are putting a copy of vector1 and vector2 in the 2D vector. 
	// This implies that any change in vector1 or vector2 will not be reflected in vector_2d.

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "vector_2d[0][0] = " << vector_2d.at(0).at(0) << endl;
	cout << "vector_2d[0][1] = " << vector_2d.at(0).at(1) << endl;
	cout << "vector_2d[1][0] = " << vector_2d.at(1).at(0) << endl;
	cout << "vector_2d[1][1] = " << vector_2d.at(1).at(1) << endl;
	cout << endl;

	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl; 
	cout << endl;
	
	vector1.at(0) = 1000;

	cout << "\nAfter change of vector1[0]: " << endl;

	cout << "vector_2d[0][0] = " << vector_2d.at(0).at(0) << endl;
	cout << "vector_2d[0][1] = " << vector_2d.at(0).at(1) << endl;	
	cout << "vector_2d[1][0] = " << vector_2d.at(1).at(0) << endl;
	cout << "vector_2d[1][1] = " << vector_2d.at(1).at(1) << endl;
	cout << endl;

	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	cout << endl;

	cout << "vector_2d size = " << vector_2d.size() << endl;

	cout << "\nElements in vector1: " << endl;

	for(int i=0; i<vector1.size(); i++)
	{
		cout << vector1.at(i) << endl;
	}

	return 0;
}
