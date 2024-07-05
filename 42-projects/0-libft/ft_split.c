/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cankaya <cankaya@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:32:58 by cankaya           #+#    #+#             */
/*   Updated: 2024/06/12 14:47:19 by cankaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_wordcount(char const *s, char c)
{
    size_t count;

    count = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return (count);
}

static char *ft_worddup(char const *s, size_t len)
{
    char *word;

    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    ft_memcpy(word, s, len);
    word[len] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char    **split;
    size_t  i;
    size_t  len;

    if (!s)
        return (NULL);
    split = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
    if (!split)
        return (NULL);
    i = 0;
    while (*s)
    {
        while (*s == c)
            s++;
        if (*s)
        {
            len = 0;
            while (s[len] && s[len] != c)
                len++;
            split[i++] = ft_worddup(s, len);
            s += len;
        }
    }
    split[i] = NULL;
    return (split);
}

