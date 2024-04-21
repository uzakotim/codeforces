#include <iostream>
#include <thread>
#include <string>
#include <vector>

char *convertTime(const char *line)
{
    int hours = 0;
    int minutes = 0;

    hours = (line[0] - '0') * 10 + (line[1] - '0');
    minutes = (line[3] - '0') * 10 + (line[4] - '0');

    std::string marker = "AM";
    if (hours < 12)
    {
        marker = "AM";
    }
    else
    {
        marker = "PM";
    }
    // convert hours to clock format
    if (hours == 0)
    {
        hours = 12;
    }
    else if (hours > 12)
    {
        hours -= 12;
    }
    char *new_line = new char[9];
    sprintf(new_line, "%02d:%02d %s", hours, minutes, marker.c_str());
    return new_line;
}

int main(int argc, char **argv)
{
    int number_of_lines = 0;
    std::cin >> number_of_lines;
    int n;

    std::vector<std::string> lines(number_of_lines);
    std::string line;
    for (int i = 0; i < number_of_lines; i++)
    {
        std::cin >> line;
        lines[i] = line;
    }
    for (int i = 0; i < number_of_lines; i++)
    {
        std::cout << convertTime(lines[i].c_str()) << std::endl;
    }

    return 0;
}