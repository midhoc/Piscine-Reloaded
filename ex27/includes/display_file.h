/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 22:44:29 by midounhoc         #+#    #+#             */
/*   Updated: 2019/04/14 23:26:03 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define    BUF_SIZE 1024 

int     ft_strcmp(const char *s1, const char *s2);
void    ft_putchar(char c);
void    ft_putstr(char const *s);
int     tst_param(int argc);
void    print_file(int fd);

#endif
