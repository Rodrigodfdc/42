/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:37:00 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/12 06:23:23 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <string.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				i;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{ 
	char	dest[] = "aaaa";
	char	src[] = "zbc";

	unsigned int	nb;
	nb = 6;

	printf("%s\n", ft_strncat(dest, src, nb));

//--------------------Replicar------------------------//

	char	a[] = "aaaa";
	char	b[] = "zbc";
	unsigned int	xr;
	
	xr = 6;
	printf("%s", strncat(a, b, xr));
	
	return (0);
}*/
