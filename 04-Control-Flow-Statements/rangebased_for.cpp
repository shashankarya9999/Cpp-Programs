#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
    // array
    int scores[] {100,90,87};

    for(auto score: scores)
        cout << score << endl;

    // vector
    vector<double> temps {87.2, 77.1, 80.0, 72.5};

    double average_temp {};
    double running_sum {};

    for(auto temp: temps)
        running_sum += temp;

    if(temps.size() != 0)
    {
        average_temp = running_sum / temps.size();
    }

    cout << fixed << setprecision(1);
    cout << running_sum << endl;
    cout << "Average temperature is: " << average_temp << endl;

    /*
    
    ///////////// initializer list /////////////////

    double average_temp {};
    double running_sum {};
    int size {0};

    for(auto temp: {60.2, 80.1, 90.0, 78.2})
    {
        running_sum += temp;
        ++size;
    }

    average_temp = running_sum / size;

    //////////////////// string //////////////////////

    for(auto c: "Frank")
    {
        cout << c << endl;
    }

    */

    for(auto c: "This is a test")
    {
        if(c != ' ')
            cout << c;
    }

    cout << endl;

    for(auto c: "This is a test")
    {
        if(c == ' ')
            cout << "\t";
        
        else
            cout << c;
    }

    cout << endl;

    return 0;
}
