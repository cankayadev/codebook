/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cankaya <cankaya@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 09:15:34 by cankaya           #+#    #+#             */
/*   Updated: 2024/06/13 09:24:47 by cankaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_isspace(char c)
{
    return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int ft_atoi(const char *str)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (ft_isspace(*str))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (ft_isdigit(*str))
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * sign);
}

