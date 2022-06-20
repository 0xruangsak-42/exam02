#include <stdio.h>

int	ft_strlen(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        i += 1;
    }
    return(i);
}

char    *ft_strrev(char *str){
    int i = 0;
    int len = ft_strlen(str);
    char *tmp;
    while (len >= 0)
    {
        tmp[i] = str[len];
        len -= 1;
        i += 1;
    }
    return(str);
}

int main(int argc, const char** argv) {
    printf(ft_strrev(argv[1]));
    return 0;
}