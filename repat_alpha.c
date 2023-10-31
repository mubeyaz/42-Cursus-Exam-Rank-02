#include <unistd.h>

void    ft_putchar_n(char c, int i)
{
    while (i > 0)
    {
        write(1, &c, 1);
        --i;
    }
}

void    repeat_alpha(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            ft_putchar_n(str[i],str[i] + 1 - 'a');
        else if(str[i] >= 'A' && str[i] <= 'Z')
            ft_putchar_n(str[i],str[i] + 1 - 'A');
        else
            write(1,&str[i],1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    
    write(1, "\n", 1);
    return (0);
}