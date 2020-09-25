#include <unistd.h>
#include <iostream>
#include <termios.h>


int main()
{
    char c;
    // int count = 1;
    while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
    // while (read(STDIN_FILENO, &c, 1) == 1 && count++);
    // std::cout << "\n" << count << " " << c << "\n";
    return 0;
}

