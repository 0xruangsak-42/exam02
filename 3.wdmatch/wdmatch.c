#include <stdio.h>

int wdmatch(char* str1, char* str2)
{
    int i = 0;
    int j = 0;
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
        return(0);
    }
    return (1);
}

int main(int argc, char** argv) {
    if (argc == 3 && wdmatch(argv[1],argv[2]))
    {
        printf("%s",argv[1]);
    }
    return 0;
}