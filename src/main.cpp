#include <iostream>
#include <thread>
#include <string>

void drawChessBoard(int n)
{
}
int main(int argc, char **argv)
{
    int number_of_lines = 0;
    std::cin >> number_of_lines;
    int n;
    int ns[number_of_lines];
    for (int i = 0; i < number_of_lines; i++)
    {
        std::cin >> ns[i];
    }
    for (int i = 0; i < number_of_lines; i++)
    {
        drawChessBoard(ns[i]);
    }
    return 0;
}