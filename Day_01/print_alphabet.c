#include <unistd.h>

void print_alphabet(void) {
    write(1,"abcdefghijklmnopqrstuvwxyz" ,sizeof("abcdefghijklmnopqrstuvwxyz"))-1 ;
}
