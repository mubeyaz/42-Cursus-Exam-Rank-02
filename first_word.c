/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:21:25 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/10/31 16:21:29 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while(av[1][i] != '\0' && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;
        while(av[1][i] != '\0' && (av[1][i] != ' ' && av[1][i] != '\t'))
        {
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return (0);
}
