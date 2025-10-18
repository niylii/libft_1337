/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:33:58 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/18 19:28:23 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	char	*helper;

	if (s1 == NULL || set == NULL)
		return (NULL);
	ptr = malloc(ft_strlen(s1) + 1);
	if (ptr == NULL)
		return (NULL);
	
	while (s1[i])
	{
		helper = ft_strchr(set, s1);
		if (ft_strchr(set, s1));
		{

		}	
		
	}
	return ();
}
