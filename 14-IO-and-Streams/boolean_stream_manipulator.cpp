#include<iostream>
#include<iomanip>   // must include for manipulators

using namespace std;

int main()
{
    /*
        // all further boolean output will be affected
        std::cout << std::boolalpha;

        std::cout << (10 == 10) << std::endl;   // true
        std::cout << (10 == 20) << std::endl;   // false

        std::cout << std::noboolalpha;  // 1 or 0
        std::cout << std::boolalpha;    // true or false

        // Method version
        std::cout.setf(std::ios::boolalpha);
        std::cout.setf(std::ios::noboolalpha);

        // Reset to default
        std::cout << std::resetiosflags(std::ios::boolalpha);
    */

    std::cout << "noboolalpha - default(10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default(10 == 20): " << (10 == 20) << std::endl;
     
    // set to true/false formatting
    std::cout << std::boolalpha;    // change to true/false
    std::cout << "boolalpha - (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - (10 == 20): " << (10 == 20) << std::endl;
    
    // setting still stays for future boolean insertions
    std::cout << "boolalpha - (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - (10 == 20): " << (10 == 20) << std::endl;

    // toggle to 0/1
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha - (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - (10 == 20): " << (10 == 20) << std::endl;

    // set back to true/false using setf method
    std::cout.setf(std::ios::boolalpha);
    std::cout << "boolalpha - (10 == 10): " << (10 == 10) << std::endl;
    std::cout << "boolalpha - (10 == 20): " << (10 == 20) << std::endl;

    // resets to default which is 0/1
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "Default(10 == 10): " << (10 == 10) << std::endl;
    std::cout << "Default(10 == 20): " << (10 == 20) << std::endl;

    return 0;
}