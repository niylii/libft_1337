/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:00:24 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/18 13:17:42 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*casted_dest;
	const unsigned char	*casted_src;

	i = 0;
	casted_dest = (unsigned char *) dest;
	casted_src = (const unsigned char *) src;
	while (i < n)
	{
		casted_dest[i] = casted_src[i];
		i++;
	}
	return (dest);
}
