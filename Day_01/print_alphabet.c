#include <unistd.h>
#include <stdio.h>
void print_alphabet(void) {
    write(1,"abcdefghijklmnopqrstuvwxyz" ,sizeof("abcdefghijklmnopqrstuvwxyz"))-1 ;
}
