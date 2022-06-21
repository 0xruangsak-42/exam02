#include <stdio.h>

void ft_inter(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0')
    {
        int j = 0;
        while (str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                printf("%c", str1[i]);
                break;
            }
            j += 1;
        }
        i += 1;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_inter(argv[1], argv[2]);
    }
    printf("\n");
    return 0;
}