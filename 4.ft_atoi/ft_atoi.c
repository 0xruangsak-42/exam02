int ft_atoi(char *str){
    int i = 0;
    int sign = 1;
    int out = 0;
    if (str[i++] == '-')
    {
        sign = -1
    }
    while (str[i++] != '\0')
    {
        out *= 10;
        out += str[i] - '0';
    }
    return (sign*out)
}