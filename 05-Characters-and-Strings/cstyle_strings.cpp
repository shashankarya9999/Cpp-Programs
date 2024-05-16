#include<iostream>
#include<cstring>   // for c-style string functions
#include<cctype>    // for character-based functions

using namespace std;

int main()
{
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "Enter your last name: ";
    cin >> last_name;

    cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name);  // copy first_name to full_name
    strcat(full_name, " ");         // concatenate full_name and a space
    strcat(full_name, last_name);   // concatenate last_name to full_name

    cout << "Your full name is: " << full_name << endl;

    // cout << "\n--------------------------------------------" << endl;
    // cout << "Enter your full name: ";
    // cin >> full_name;

    // cout << "Your full name is " << full_name << endl;

    // cout << "\n--------------------------------------------" << endl;
    // cout << "Enter your full name: ";
    // cin.getline(full_name, 50);

    // cout << "Your full name is " << full_name << endl;

    cout << "\n--------------------------------------------" << endl;
    strcpy(temp, full_name);

    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    
    else
        cout << temp << " and " << full_name << "are different" << endl;

    for(size_t i {0}; i < strlen(full_name); ++i)
    {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }

    cout << "Your full name is: " << full_name << endl; 

    cout << "\n--------------------------------------------" << endl;
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same " << endl;

    else
        cout << temp << " and " << full_name << " are different " << endl;

    cout << "\n--------------------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;

    return 0;
}
