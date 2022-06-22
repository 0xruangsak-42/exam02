#include <unistd.h>

int check_doubles(char *str, char c){
    int i = 0;
    while (str[i++] != '\0')
    {
        if (str[i] == c)
        {
            return(0);
        }
    }
    return(1);
}

int check_doubles_pos(char *str, char c, int pos){
    int i = 0;
    
}