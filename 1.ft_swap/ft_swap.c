#include <stdio.h>
void	ft_swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(int argc, const char** argv) {
    int a = 1;
    int b = 2;
    printf("%d",a);
    printf("%d",b);
    ft_swap(&a,&b);
    printf("%d",a);
    printf("%d",b);
    return 0;
}