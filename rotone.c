/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:05:19 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/10/31 17:05:20 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}
void rotone(char *s)
{
    int i = 0;
    while(s[i])
    {
        if((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
            ft_putchar(s[i] + 1);
        else if(s[i] == 'z' || s[i] == 'Z')
            ft_putchar(s[i] - 25);
        else
            ft_putchar(s[i]);
        i++;
    }
}

int main(int ac,char **av)
{
    if (ac == 2)
    {
        rotone(av[1]);
    }
    ft_putchar('\n');
}
