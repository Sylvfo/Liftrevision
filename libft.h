/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:06:33 by sforster          #+#    #+#             */
/*   Updated: 2024/02/08 22:10:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	size_t			*content_size;
	struct s_list	*next;
}					t_list;
// check and manipulate characters

//int				ft_isalnum(int c);
// verifie si (c) est un chiffre ou une lettre dans ascii
int				ft_isalpha(int c);
// verifie si (c) est une lettre dans ascii
int				ft_toupper(int c);
// met une minuscule en majuscule
// manipulate string
int				ft_strlen(const char *str);
// retourne la taille d une string
int				ft_strncmp(const char *s1, const char *s2, size_t n);
// applique une fonction (f) a tous les char d'une string(s)
char			*ft_strchr(char *s, int c);
// recherche 1ere occurence du charactere (c) dans une string (s)
char			*ft_strrchr(char *s, int c);
// recherche la derniere occurence d une char dans une string.

#endif