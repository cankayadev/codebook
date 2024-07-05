/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cankaya <cankaya@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:30:47 by cankaya           #+#    #+#             */
/*   Updated: 2024/06/11 10:38:52 by cankaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    if (!dst && !src)
        return (NULL);
    i = 0;
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
        i++;
    }
    return (dst);
}

