#include <stdbool.h>
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

void ft_rev_print(char *str){
    int i = ft_strlen(str);
    while (true)
    {
        printf("%c",str[i]);
        i -= 1;
        if (i == -1)
        {
            break;
        }
    }
}

int main(int argc, char** argv) {
    ft_rev_print("hello");
    return 0;
}