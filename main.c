#include <stdio.h>

int main(int argc, const char** argv) {
    printf("%d",argc);
    printf("\n");
    printf("%s",argv[0]);
    printf("\n");
    printf("%s",argv[1]);
    printf("\n");
    printf("%c",argv[1][0]);
    return 0;
}