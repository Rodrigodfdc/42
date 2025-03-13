/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 00:11:48 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/08 21:57:44 by rodde-fr         ###   ########.fr       */
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
	else if (c > 31 && c < 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_printable(char *str)
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
	char	str[] = "aaa";
	ft_str_is_printable(str);
	printf("The value is: %d ", ft_str_is_printable(str));
	return (0);
}*/
