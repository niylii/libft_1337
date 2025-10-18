/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:30:49 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/18 13:14:04 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return (big);
	while (i < len && big[i])
	{
		j = 0;
		while (((i + j) < len) && little[j])
		{
			if (big[i + j] == little[j])
				j++;
			else
				break ;
		}
		if (little[j] == '\0')
			return (big + i);
		i++;
	}
	return (NULL);
}
