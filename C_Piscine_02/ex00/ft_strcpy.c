/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:43:02 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/08 22:13:15 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16";
	char	dest[1024];

	ft_strcpy(dest, src);
	printf("%s", ft_strcpy(dest, src));
	return (0);
}*/
