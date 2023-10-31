/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:20:41 by mubeyaz           #+#    #+#             */
/*   Updated: 2023/10/31 18:30:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    while(*str == ' ' || (*str >= 9 && *str <= 13))
         str++;
    if (*str == '-')
        sign = -1;
    if(*str == '-' || *str == '+')
        str++;
    while(*str && *str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (sign * result);
}

int main()
{
    int a = ft_atoi("-213");
    printf("%d",a);
}
