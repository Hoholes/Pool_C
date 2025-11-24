/* Temporary test file for local verification */
#include <unistd.h>

void print_char(char a);

int main(void)
{
    print_char('H');
    print_char('i');
    print_char('!');
    print_char('\n');
    return 0;
}
