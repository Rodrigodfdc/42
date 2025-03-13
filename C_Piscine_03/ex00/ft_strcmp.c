/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:59:37 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/12 00:15:21 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <string.h>
//#include <stdio.h>
/*
void	ft_putchar_convert(int n)
{
	char	c;

	if (n > 10)
	{
		ft_putchar_convert(n / 10);
	}
	c = (n % 10) + '0';
	write (1, &c, 1);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	status;

	i = 0;
	status = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			status = (s1[i] - s2[i]);
			return (status);
		}
		i++;
	}
	status = (s1[i] - s2[i]);
	return (status);
}
/*
int	main(void)
{
	char	s1[] = "abaA";
	char	s2[] = "aba";

	ft_putchar_convert(ft_strcmp(s1, s2));

	//--------------------replicar---------------------//
	char a[] = "abaA";
	char b[] = "aba";

	int c = strcmp (a, b);
	printf ("%d", c);
	return (0);
}*/
