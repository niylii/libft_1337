/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:00:24 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/15 18:54:34 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*casted_dest;
	unsigned char	*casted_src;

	if (dest == NULL || src == NULL)
		return (NULL);
	casted_dest = dest;
	casted_src = src;
	while (n >= 0)
	{
		casted_dest[n] = casted_src[n];
		n--;
	}
	return (dest);
}
