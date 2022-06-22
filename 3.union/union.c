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
    while (i++ < pos)
    {
        if (str[i] == c)
        {
            return(0);
        }
    }
    return(1);
}

void ft_union(char *str1, char *str2){
    int i = 0;
    while (str1[i++] != '\0')
    {
        if (check_doubles_pos(str1,str1[i],i) == 1)
        {
            write(1,&str1[i],1);
        }
    }
    i = 0;
    while (str2[i++] != '\0')
    {
        if (check_doubles(str1 ,str2[i]) == 1)
        {
            if (check_doubles_pos(srt2, str2[i],i) == 1)
            {
                write(1,&str2[i],1);
            }
        }
    }
}

int main(int argc, char** argv) {
    if (ac == 3)
    {
        ft_union(av[1],av[2]);
    }
    write(1,"\n",1);
    return 0;
}