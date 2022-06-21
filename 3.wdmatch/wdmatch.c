#include <stdio.h>

int wdmatch(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    int out;
    while (str1[i] != '\0')
    {
        i += 1;
        while (str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                break;
            }
            j += 1;
        }
        out = 0;
    }
    out = 1;
    return (out);
}

int main(int argc, char **argv)
{
    if (argc == 3 && wdmatch(argv[1], argv[2]))
    {
        printf("%s", argv[1]);
    }
    return 0;
}