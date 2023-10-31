/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:21:19 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/10/31 16:21:20 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_wrnum(int num)
{
    char str[10] = "0123456789";
    
    if (num > 9)
        ft_wrnum(num / 10);
    
    write(1,&str[num % 10],1);
}

int main()
{
    int i = 1;
    while(i <= 100)
    {
        if(i % 15 == 0)
            write(1,"fizzbuzz",8);
        else if(i % 5 == 0)
            write(1,"buzz",4);
        else if(i % 3 == 0)
            write(1,"fizz",4);
        else
            ft_wrnum(i);
        i++;
        write(1,"\n",1);
    }
}
