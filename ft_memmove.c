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

void	*ft_basic_edgecases(void *dest, const void *src, size_t n)
{
	if (dest == NULL || src == NULL )
		return (NULL);
	if (n == 0 || src == dest)
		return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*casted_dest;
	unsigned char	*casted_src;

	casted_dest = dest;
	casted_src = src;
	i = 0;
	ft_basic_edgecases(dest, src, n);
	if (src < dest)
	{
		while (n - 1 >= 0)
		{
			casted_dest[n] = casted_src[n];
			n--;
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
