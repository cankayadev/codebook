/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cankaya <cankaya@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 10:22:14 by cankaya           #+#    #+#             */
/*   Updated: 2024/06/15 10:28:46 by cankaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *dup;
    size_t len;

    len = ft_strlen(s1);
    dup = malloc((len + 1) * sizeof(char));
    if (!dup)
        return (NULL);
    ft_memcpy(dup, s1, len + 1);
    return (dup);
}

