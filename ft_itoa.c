/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:35:28 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/18 14:45:45 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char	*ptr;
	char	tab[11];
	int	i;

	i = 0;
	if (n < 0)
		tab[i++] = '-';
	while (n >= 0)
	{
		n /= 10;
		tab[i++] = n + '0';
	}
	ptr = malloc(ft_strlen(tab) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i >= 0)
		*(ptr++) = tab[i--];
	*(ptr) = '\0';
	return (ptr);
}
