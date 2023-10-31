/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:14:22 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/10/31 20:14:24 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int iter(char *str,char c,int len)
{
    int i = 0;
    while(str[i] && (i < len || len == -1))
    {
        if(str[i++] == c)
            return 1;
    }
    return 0;
}

int main(int ac,char **av)
{
    if (ac == 3)
    {
        int i = 0;
        while(av[1][i])
        {
            if(!iter(av[1],av[1][i],i) && iter(av[2],av[1][i],-1))
                write(1,&av[1][i],1);
            i += 1;
        }
    }
    write(1,"\n",1);
}
