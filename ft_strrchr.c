/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 21:40:12 by marvin            #+#    #+#             */
/*   Updated: 2024/02/08 21:40:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*
int	ft_strlen(const char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}*/

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!c)
		return (&s[i + 1]);
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*tt = "I can buy myself flowers";
	char	t = 'y';

	printf("%s", ft_strrch(tt, t));
	return (0);
}*/
