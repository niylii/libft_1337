/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:07:01 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/15 22:04:29 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*casted_s;
	size_t				i;

	casted_s = s;
	i = 0;
	while (i < n)
	{
		if (casted_s[i] == (unsigned char)c)
			return ((void *)(casted_s + 1));
		i++;
	}
	return (NULL);
}
