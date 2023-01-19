/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:02:48 by ahooghe           #+#    #+#             */
/*   Updated: 2023/01/12 12:16:33 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *ptr, int value, size_t num )
{
	size_t			i;
	unsigned char	*a;
	unsigned char	c;

	c = (unsigned char)value;
	a = (unsigned char *)ptr;
	i = 0;
	if (!num)
		return (NULL);
	while (i < num)
	{
		if (a[i] == c)
			return (a + i);
		i++;
	}
	return (NULL);
}
