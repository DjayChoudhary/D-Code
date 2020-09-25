#include <unistd.h>
#include <iostream>
#include <termios.h>

void enableRawMode() {
    struct termios raw;

    tcgetattr(STDIN_FILENO, &raw);

    //raw.c_lflag &= ~(ECHO); // turning off ECHO in raw mode

    raw.c_lflag &= (ECHO);

    // turning on echo in raw mode
    // ECHO feature causes each key you type to be printed
    // to the terminal
    // In raw mode you can't see what you're typing when ECHO is off
    // but it is taking the input nonetheless
    // just like you enter your password
    // when you switch into sudo mode in linux terminal

    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

int main()
{
    enableRawMode();
    char c;
    // int count = 1;
    while (read(STDIN_FILENO, &c, 1) == 1 && c !='x');
    // while (read(STDIN_FILENO, &c, 1) == 1 && count++);
    // std::cout << "\n" << count << " " << c << "\n";
    return 0;
}

