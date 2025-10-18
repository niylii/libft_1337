/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:28:39 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/18 13:16:22 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*casted_s;

	i = 0;
	casted_s = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i < n)
		casted_s[i++] = '\0';
}
