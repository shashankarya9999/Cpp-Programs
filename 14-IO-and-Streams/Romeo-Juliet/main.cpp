#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

int main()
{
    std::fstream in_file {"romeojuliet.txt"};
    std::ofstream out_file {"romeojuliet_out.txt"};

    if(!in_file.is_open())
    {
        std::cerr << "Error opening input file" << std::endl;

        return 1;
    }

    if(!out_file.is_open())
    {
        std::cerr << "Error opening input file" << std::endl;

        return 1;
    }

    std::string line {};
    int line_number {0};

    while(getline(in_file, line))
    {
        // put line number on the lines which contain actual text only
        if(line == "" || line == "\r")
            out_file << std::endl;
        
        else
        {            
            ++line_number;

            out_file << std::setw(7) << std::left << line_number
                     << line << std::endl;
        }
    }

    std::cout << "\nCopy Complete" << std::endl;

    in_file.close();
    out_file.close();

    return 0;
}