/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:04:43 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/15 22:03:59 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*casted_dest;
	const unsigned char	*casted_src;

	casted_dest = (unsigned char *)dest;
	casted_src = (const unsigned char *)src;
	i = 0;
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			casted_dest[n] = casted_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			casted_dest[i] = casted_src[i];
			i++;
		}
	}
	return (dest);
}
