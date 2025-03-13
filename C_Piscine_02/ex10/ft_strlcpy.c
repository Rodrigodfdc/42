/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 06:06:46 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/08 22:38:48 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != 0)
	{
		i++;
	}
	if (size == 0)
	{
		return (i);
	}
	while ((j < size -1) && (src [j] != '\0'))
	{
		dest[j] = src [j];
		j++;
	}
	dest [j] = '\0';
	return (i);
}
/*
int	main(void)
{
	char src[] = "HolaMundo";
	char dst[20];

	unsigned int size = 3;
	unsigned int len = ft_strlcpy(dst, src, size);

	printf("Copy: %s\n", dst);
	printf("Length src: %u\n", len);

	return (0);
}*/
