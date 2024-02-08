/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupperstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:29:56 by sforster          #+#    #+#             */
/*   Updated: 2024/02/08 22:05:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_toupper(char *str)
{
	int	a;
	
	a = 0;
	while (str[a])
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
			a++;
		}
		else
		{
			a++;
		}
	}
	return (str);
}
int main(void)
{
	char	*t = "JeuDi123";

	printf("%s", ft_toupper(t));
	return (0);
}