/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubeyaz <mubeyaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:05:27 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/10/31 17:05:29 by mubeyaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b= temp;
}

int main()
{
    int a = 10;
    int b = 5;
    ft_swap(&a,&b);
    printf("%d %d",a,b);
}
