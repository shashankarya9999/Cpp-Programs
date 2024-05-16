#include<iostream>
#include<vector>

using namespace std;

void find_first_vowel(const vector<char>& vec) 
{
    // Initialize an index variable to 0. It's used to track the current position in the vector.
    size_t i{0};

    // Declare a boolean flag to indicate whether a vowel has been found.
    bool vowel_found {false};

    // Check if the vector is not empty before proceeding.
    if (!vec.empty()) 
    {
        // Enter a do-while loop, which will run at least once.
        do 
        {
            // Check if the current character at index i is a lowercase Englisg vowel.
            if (vec.at(i) == 'a' || vec.at(i) == 'e' || vec.at(i) == 'i' || vec.at(i) == 'o' || vec.at(i) == 'u') 
            {
                // If a vowel is found, set vowel_found to true, which will cause the loop to exit.
                vowel_found = true;
            } 
            else 
            {
                // If not a vowel, increment the index to check the next character.
                i++;
            }
        // Continue the loop until a vowel is found or the end of the vector is reached.
        } while (!vowel_found && i < vec.size());
    }
    
    // After exiting the loop, check if a vowel was found.
    if (vowel_found) 
    {
        // If a vowel was found, print it.
        cout << "Vowel found: " << vec.at(i);
    } 
    
    else 
    {
        // If no vowel was found, print a message indicating that.
        cout << "No vowel was found";
    }
    // End of function.
}

int main()
{
    return 0;
}