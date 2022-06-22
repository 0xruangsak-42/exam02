#include <stdio.h>
int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int out = 0;
    if (str[i] == '-')
    {
        sign = -1;
        i += 1;
    }
    while (str[i] != '\0')
    {
        out *= 10;
        out += str[i] - '0';
        i += 1;
    }
    return (sign * out);
}

int main(int argc, char **argv)
{
    ft_atoi(argv[1]);
    return 0;
}
