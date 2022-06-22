#include <stdio.h>
int     *ft_range(int start, int end){
    int len = end - start + 1;
    int *out = malloc(sizeof(int)*(len));
    int i = 0;
    while (start <= end)
    {
        out[i] = start;
        start += 1;
        i += 1;
    }
    return(out)
}

int main(int argc, char** argv) {
    printf(ft_range(argv[1]));
    return 0;
}