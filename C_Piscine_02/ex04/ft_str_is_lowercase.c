/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:29:10 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/07 00:03:28 by rodde-fr         ###   ########.fr       */
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
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_lowercase(char *str)
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
	char	str[] = "aaAAAA";

	ft_str_is_lowercase(str);
	printf("The value is: %d", ft_str_is_lowercase(str));
	return (0);
}*/
