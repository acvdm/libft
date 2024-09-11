/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:46:59 by anvander          #+#    #+#             */
/*   Updated: 2024/09/11 12:48:17 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t elementCount, size_t elementSize);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int nb);
void			*ft_memchr(const void *s, int c, size_t size);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t size);
void			*ft_memset(void *ptr, int c, size_t size);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *str, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr_fd(char *str, int fd);
void			ft_putstr(char *str);
char			**ft_split(char const *str, char c);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *src);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
unsigned long	ft_strlcat(char *dst, const char *src, size_t size);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size);
unsigned long	ft_strlen(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif 
