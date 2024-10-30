#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n = 0440;
    char *s2= ft_itoa(n);
    
    ft_putstr_fd(s2,1);
    ft_putchar_fd('\n',1);
    free(s2);
}