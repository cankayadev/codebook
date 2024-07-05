/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cankaya <cankaya@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 09:15:43 by cankaya           #+#    #+#             */
/*   Updated: 2024/06/14 09:22:17 by cankaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

