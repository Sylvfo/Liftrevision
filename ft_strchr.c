/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:04:46 by sforster          #+#    #+#             */
/*   Updated: 2024/02/07 11:51:47 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char *str, char c)
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

int main(void)
{
	char *st = "joli lapin blanc";
	char n = 't';

	printf("%s", ft_strchr(st, n));
	return (0);
}

/*
char	*ft_strstr(char *str, char *ned)
{
	int	a;
	int i;

	a = 0;
	i = 0;
	if (!ned)
		return (NULL);
	while (str[a])
	{
		if (str[a] == ned[i])
		{
			return (&str[a]);
		}
		i = 0;
		a++;
	}
	return ("toto");
}
*/