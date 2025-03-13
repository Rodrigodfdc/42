/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 23:05:24 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/07 00:14:40 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_check(char c)
{
	if (c == '\0')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	status;

	i = 0;
	status = 1;
	while (str[i] && status)
	{
		status = ft_check(str[i]);
		i++;
	}
	return (status);
}
/*
int	main(void)
{

	char	str[] = "aaaGG";

	ft_str_is_uppercase(str);

	printf("the value is: %d", ft_str_is_uppercase(str));

	return (0);
}*/
