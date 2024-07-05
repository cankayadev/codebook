/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cankaya <cankaya@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 10:20:45 by cankaya           #+#    #+#             */
/*   Updated: 2024/06/13 10:27:38 by cankaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *new_str;
    size_t  i;

    if (!s || !f)
        return (NULL);
    new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!new_str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

