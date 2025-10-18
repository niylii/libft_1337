/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:34:34 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/18 13:15:55 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	nb;

	i = 0;
	signe = 1;
	nb = 1;
	while (nptr[i] == '\t' || nptr[i] == ' '
		|| nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			nb *= -1;
		i++;
	}
	while (ft_isdigit((int)nptr[i]) == 1)
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	return (nb * signe);
}
