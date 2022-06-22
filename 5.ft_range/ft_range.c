#include <stdio.h>
#include <stdlib.h>

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

int *ft_range(int start, int end)
{
    int len = end - start + 1;
    int *out = malloc(sizeof(int) * (len));
    int i = 0;
    while (start <= end)
    {
        out[i] = start;
        start += 1;
        i += 1;
    }
    return (out);
}

int main(int argc, char **argv)
{
    int count = ft_atoi(argv[2]) - ft_atoi(argv[1]) + 1;
    int *result = ft_range(ft_atoi(argv[1]), ft_atoi(argv[2]));
    for (int i = 0; i < count; i++)
    {
        printf("%d \n", result[i]);
    }

    return 0;
}