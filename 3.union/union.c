#include <stdio.h>

int	ft_strlen(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        i += 1;
    }
    return(i);
}

char *ft_union(char *str1, char *str2)
{
    int i = 0;
    char *out;
    int count = 0;
    while (str1[i] != '\0')
    {
        int j = 0;
        while (str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                out[count++] = str1[i];
                break;
            }
            j += 1;
        }
        i += 1;
    }
    int i = 0;
    while (str2[i] != '\0')
    {
        int j = 0;
        while (str1[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                out[count++] = str1[i];
                break;
            }
            j += 1;
        }
        i += 1;
    }
    return out;
}

char *ft_str_rm_duplicate (char *str){
    int i = 0;
    int count = 0;
    char *out;
    while (str[i++] != '\0')
    {
        int j = i;
        if (str[i] != '*')
        {
            out[count++] = str[i];
        }
        while (str[j++] != 0)
        {
            if (str[i] = str[j])
            {
                str[j] = '*';
            }
        }
    }
    return out;
}

int main(int argc, char** argv) {
    char *out;
    if (argc == 3)
    {
        out = ft_union(argv[1], argv[2]);
        printf("%s",ft_str_rm_duplicate(out));
    }
    printf("\n");
    return 0;
}