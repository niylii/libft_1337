/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:15:17 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/16 13:29:10 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*casted_s1;
	const unsigned char	*casted_s2;
	size_t				i;

	i = 0;
	casted_s1 = s1;
	casted_s2 = s2;
	while ((i < n) && casted_s1[i] == casted_s2[i])
		i++;
	if (i == n)
		return (0);
	return (casted_s1[i] - casted_s2[i]);
}
