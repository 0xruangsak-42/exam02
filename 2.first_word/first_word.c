#include <unistd.h>
#include <stdio.h>

int main(int argc, const char** argv) {
    int i = 0;
    while (argv[1][i] != ' ' && argv[1][i] != '\t')
    {
        write(1,&argv[1][i],1);
        i += 1;
    }
    printf("\n");
    return 0;
}