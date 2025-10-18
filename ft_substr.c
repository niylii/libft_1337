/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhiyli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:25:39 by nouhiyli          #+#    #+#             */
/*   Updated: 2025/10/18 14:33:43 by nouhiyli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	while ((size_t)start < len)
		*(ptr++) = s[start++];
	*(ptr) = '\0';
	return (ptr);
}
