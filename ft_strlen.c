/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:25:39 by sforster          #+#    #+#             */
/*   Updated: 2024/02/08 22:04:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

/*
int main(void)
{
	char	*t = "Le silence du sapin sous la soie";
	printf("%d", ft_strlen(t));
	return (0);
}*/