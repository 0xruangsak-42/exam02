#include <stdio.h>

void rot13(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
        {
            str[i] += 1;
        }
        else if ((str[i] == 'z') || (str[i] == 'Z'))
        {
            str[i] -= 25;
        }
        printf("%c",str[i]);
        i += 1;
    }
}

int main(int argc, char** argv) {
    rot13(argv[1]);
    return 0;
}