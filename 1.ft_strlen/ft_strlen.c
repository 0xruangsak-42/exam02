#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i += 1;
    }
    return(i);
}

int main(int argc, const char** argv) {
    printf("%d",ft_strlen("hello there"));
    return 0;
}