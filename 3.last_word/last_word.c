#include <unistd.h>

int	ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i += 1;
    }
    return(i);
}

void first_word (char *str){
    int len = ft_strlen(str);
    while (str[len] != "\t" && str[len] != " ")
    {
        len -= 1;
    }
    while (str[len] != "\0")
    {
        write(1,&str[len],1);
        len += 1;
    }
}

int main(int argc, char** argv) {
    if (argc == 2)
    {
        first_word(argv[1]);
    }
    write(1,"/n",1);
    return 0;
}