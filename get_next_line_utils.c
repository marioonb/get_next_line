/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 13:19:22 by mbelorge          #+#    #+#             */
/*   Updated: 2020/01/03 15:46:20 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void		*ft_calloc(size_t count, size_t size)
{
	int		*pointeur;
	int		s;
	size_t	i;

	s = count * size;
	if (s == 0)
		s = 1;
	pointeur = malloc(s);
	if (pointeur == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		((unsigned char *)pointeur)[i] = '\0';
		i++;
	}
	return (pointeur);
}

size_t		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_substr(char const *s, unsigned int star, size_t len)
{
	char	*resultat;
	size_t	i;
	size_t	j;

	resultat = NULL;
	i = 0;
	j = 0;
	resultat = malloc(sizeof(char) * (len + 1));
	if (!resultat)
		return (0);
	while (s[i] != '\0' && len > 0)
	{
		if (i >= star)
		{
			resultat[j] = s[i];
			j++;
			len--;
		}
		i++;
	}
	resultat[j] = '\0';
	return (resultat);
}

char		*ft_strchr(char *s, int c)
{
	if (!s || !c)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char		*ft_strdup(const char *s1)
{
	char	*resultat;
	int		i;

	resultat = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!resultat)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		resultat[i] = s1[i];
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}
