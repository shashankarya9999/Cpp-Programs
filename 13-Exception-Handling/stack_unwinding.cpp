#include<iostream>

void func_a()
{
    std::cout << "Starting func_a" << std::endl;
    func_b();
    std::cout << "Ending func_a" << std::endl;
}

void func_b()
{
    std::cout << "Starting func_b" << std::endl;
    func_c();
    std::cout << "Ending func_b" << std::endl;
}

void func_c()
{
    std::cout << "Starting func_c" << std::endl;
    std::cout << "Ending func_c" << std::endl;
}

int main()
{
    std::cout << "Starting main" << std::endl;

    func_a();

    std::cout << "Finishing main" << std::endl;

    return 0;
}