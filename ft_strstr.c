/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:04:46 by sforster          #+#    #+#             */
/*   Updated: 2024/02/07 11:44:16 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
		while (str[a + i] == ned[i] && ned[i])
		{
			i++;
			return (&str[a]);
		}
		i = 0;
		a++;
	}
	return (str);
}

int main(void)
{
	char *st = "joli lapin blanc";
	char *n = "pin";

	printf("%s", ft_strstr(st, n));
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