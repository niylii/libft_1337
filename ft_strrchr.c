/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:38:15 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/15 22:12:53 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_occ_pos;

	i = 0;
	last_occ_pos = -1;
	while (s[i])
	{
		if (s[i] == c)
			last_occ_pos = i;
		i++;
	}
	if (c == '\0')
		return (s + i);
	if (last_occ_pos == -1)
		return (NULL);
	return (s + last_occ_pos);
}
