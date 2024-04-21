#include <iostream>
#include <thread>
#include <string>
#include <vector>

std::string isProductOfSomeBinaryNumbers(int number)
{
    // check if the number is binary
    std::string number_str = std::to_string(number);
    bool isBinary = true;
    for (int i = 0; i < number_str.length(); i++)
    {
        if (number_str[i] != '0' && number_str[i] != '1')
        {
            isBinary = false;
        }
    }
    if (isBinary)
    {
        return "YES";
    }
    // create list of all binary numbers till 100000
    std::vector<int> bins = {10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 100000};

    // find if the number is a product of some binary numbers
    int i = 0;
    while (number > 1)
    {
        if (bins[i] > number)
        {
            return "NO";
        }
        if (number % bins[i] == 0)
        {
            number = number / bins[i];
            i = 0;
            continue;
        }
        i++;
    }
    return "YES";
}

int main(int argc, char **argv)
{
    int number_of_lines = 0;
    std::cin >> number_of_lines;
    int n;

    std::vector<int> numbers;
    for (int i = 0; i < number_of_lines; i++)
    {
        std::cin >> n;
        numbers.push_back(n);
    }
    for (int i = 0; i < number_of_lines; i++)
    {
        std::cout << isProductOfSomeBinaryNumbers(numbers[i]) << std::endl;
    }

    return 0;
}