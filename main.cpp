#include <iostream>
#include <vector>

#include "csv.hpp"


int main()
{
    // print every cell in every row
    csv::CSVReader reader("your-path-to-the-example.csv");
    for (auto& row : reader)
    {
        for (auto& col : row)
        {
            std::cout << col.get<>() << ", ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // print every cell in "temperature" row
    csv::CSVReader reader2("your-path-to-the-example.csv");
    double         sum = 0;
    int            i   = 0;
    for (auto& row : reader2)
    {
        auto value = row["temperature"].get<double>();
        std::cout << i << ": " << value << std::endl;
        sum += value;
        i++;
    }
    std::cout << "sum = " << sum << std::endl;
}
