/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:53:54 by sghajdao          #+#    #+#             */
/*   Updated: 2021/11/21 17:53:56 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char			*get_next_line(int fd);
unsigned int	ft_strlen(char const *s);
char			*ft_strjoin(char *s1, char const *s2);
char			*ft_strdup(const char *src);
int				ft_search(char *buf);

#endif
