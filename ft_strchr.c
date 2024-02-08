/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:04:46 by sforster          #+#    #+#             */
/*   Updated: 2024/02/08 22:09:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!c)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char *st = "joli lapin blanc";
	char n = 'p';

	printf("%s", ft_strchr(st, n));
	return (0);
}
*/