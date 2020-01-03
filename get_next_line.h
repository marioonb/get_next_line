/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelorge <mbelorge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 13:21:00 by mbelorge          #+#    #+#             */
/*   Updated: 2020/01/03 15:46:07 by mbelorge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

size_t	ft_strlen(const char *str);
int		get_next_line(int fd, char **line);
char	*ft_strjoinfree(char const *s1, char const *s2);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_substr(const char *s, unsigned int star, size_t len);
void	*ft_calloc(size_t count, size_t size);

#endif
