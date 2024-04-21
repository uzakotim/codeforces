#include <iostream>
#include <thread>
#include <string>

void drawChessBoard(int n)
{
    char result[2 * n][2 * n];
    int counter_horizontal = 0;
    int counter_vertical = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        counter_horizontal = 0;
        if (counter_vertical % 4 == 0)
            counter_vertical = 0;
        // PRINT ROW
        if (counter_vertical < 2)
        {
            for (int j = 0; j < 2 * n; j++)
            {
                if (counter_horizontal % 4 == 0)
                {
                    result[i][j] = '#';
                    counter_horizontal = 0;
                }
                if (counter_horizontal < 2)
                {
                    result[i][j] = '#';
                }
                else
                {

                    result[i][j] = '.';
                }
                counter_horizontal++;
            }
        }
        else
        {
            // PRINT REVERSE ROW
            for (int j = 0; j < 2 * n; j++)
            {
                if (counter_horizontal < 2)
                {
                    result[i][j] = '.';
                }
                else
                {

                    if (counter_horizontal % 4 == 0)
                    {
                        result[i][j] = '.';
                        counter_horizontal = 0;
                    }
                    else
                    {
                        result[i][j] = '#';
                    }
                }
                counter_horizontal++;
            }
        }
        counter_vertical++;
    }
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            std::cout << result[i][j];
        }
        std::cout << std::endl;
    }
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