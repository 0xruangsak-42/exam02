#include <stdio.h>

int	ft_strlen(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        i += 1;
    }
    return(i);
}


char	*ft_strrev(char *str)
{
	int i = 0;
	int len = ft_strlen(str) - 1;
	char temp
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i += 1;
		len -= 1;
	}
	return (str)
}

int main(int argc, const char** argv) {
    printf("%s",ft_strrev(argv[1]));
    return 0;
}