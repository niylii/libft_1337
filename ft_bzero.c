/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:28:39 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/15 22:05:34 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	unsigned char	*casted_s;

	casted_s = s;
	if (n == 0)
		return ;
	while (n >= 0)
		casted_s[n--] = '\0';
	return (s);
}
