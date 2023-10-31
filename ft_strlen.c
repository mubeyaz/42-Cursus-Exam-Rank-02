#include <unistd.h>

int	ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

#include <stdio.h>

int main()
{
    char *str = "Muhammed";
    int a = ft_strlen(str);
    printf("%d",a);
}