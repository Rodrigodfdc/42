/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 23:31:04 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/03 18:40:49 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*int	main(void)
{
	char	arraySuma20[] = "Suma de veinte digitos.";	
	char	*str;

	str = arraySuma20;	
	printf("sum: %d", ft_strlen(str));

	return (0);
}*/
