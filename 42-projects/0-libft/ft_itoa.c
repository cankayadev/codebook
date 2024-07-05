/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cankaya <cankaya@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 08:35:23 by cankaya           #+#    #+#             */
/*   Updated: 2024/06/13 08:44:51 by cankaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_numlen(int n)
{
    size_t len;

    len = (n <= 0) ? 1 : 0;
    while (n)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    char    *str;
    size_t  len;
    unsigned int num;

    len = ft_numlen(n);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    num = (n < 0) ? -n : n;
    while (len--)
    {
        str[len] = num % 10 + '0';
        num /= 10;
    }
    if (n < 0)
        str[0] = '-';
    return (str);
}

