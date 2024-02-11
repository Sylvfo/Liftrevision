/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:55:02 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 21:55:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	if (!str1 || !str2)
		return (0);
	while (str1[i] == str2[i] && n > i)
		i++;
	if (str1[i] - str2[i] == 0)
		return (0);
	if (str1[i] - str2[i] > 0)
		return (1);
	if (str1[i] - str2[i] < 0)
		return (-1);
	return (0);
}

/*
int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && i > n)
	{
		if (str1[i] == str2[i])
			i++;
	}
	return (str1[i] - str2[i]);
}
*/