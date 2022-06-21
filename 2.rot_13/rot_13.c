#include <stdio.h>

void rot13(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
        {
            str[i] += 13;
        }
        else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
        {
            str[i] -= 13;
        }
        printf("%c",str[i]);
        i += 1;
    }
}

int main(int argc, char** argv) {
    rot13(argv[1]);
    return 0;
}