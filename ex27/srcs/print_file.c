/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:13:02 by midounhoc         #+#    #+#             */
/*   Updated: 2019/04/14 23:27:49 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void    print_file(int fd)
{   
    int ret;
    char buf[BUF_SIZE + 1];
    
    while ((ret = read(fd,buf,BUF_SIZE)))
    {
        buf[ret] = '\0';
        ft_putstr(buf);
    }
}
