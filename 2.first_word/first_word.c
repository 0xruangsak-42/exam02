#include <unistd.h>
#include <stdio.h>

int main(int argc, const char** argv) {
    int i = 0;
    while (argv[1] != " " || argv[1] != '\t')
    {
        printf("%c",argv[1][i]);
        i += 1;
    }
    return 0;
}