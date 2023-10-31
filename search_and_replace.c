/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:05:57 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/10/31 17:05:58 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}
int main(int ac, char **av)
{
    if (ac == 4 && !av[2][1] & !av[3][1])
    {
        int i = 0;
        while(av[1][i])
        {
            if(av[1][i] == av[2][0])
                av[1][i] = av[3][0];
            ft_putchar(av[1][i]);
            i++;
        }
    }
    write(1,"\n",1);
}