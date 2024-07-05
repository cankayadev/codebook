/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cankaya <cankaya@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 08:34:56 by cankaya           #+#    #+#             */
/*   Updated: 2024/06/13 08:45:13 by cankaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len;

    if (*needle == '\0')
        return ((char *)haystack);
    needle_len = ft_strlen(needle);
    while (*haystack && len-- >= needle_len)
    {
        if (*haystack == *needle && ft_memcmp(haystack, needle, needle_len) == 0)
            return ((char *)haystack);
        haystack++;
    }
    return (NULL);
}

