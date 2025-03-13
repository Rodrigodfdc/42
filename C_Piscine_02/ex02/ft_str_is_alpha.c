/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:44:52 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/08 21:43:02 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_alpha_check(char c)
{
	if (c == '\0')
	{
		return (1);
	}
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
{
	int	status;
	int	i;

	i = 0;
	status = 1;
	while (str[i] && status)
	{
		status = ft_alpha_check(str[i]);
		i++;
	}
	return (status);
}
/*
int	main(void)
{
	char	str[] = "AGH";

	ft_str_is_alpha(str);
	printf("the value is: %d ", ft_str_is_alpha(str));
	return (0);
}*/
