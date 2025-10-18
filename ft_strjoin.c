/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:16:20 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/18 14:25:23 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	t_len;

	t_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	ptr = malloc(t_len);
	if (ptr == NULL)
		return (NULL);
	while (i < t_len)
	{
		while (i < ft_strlen(s1) && *s1)
			ptr[i++] = *(s1++);
		while (i < ft_strlen(s1) && *s2)
			ptr[i++] = *(s2++);
	}
	ptr[i] = '\0';
	return (ptr);
}
