/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 15:02:57 by midounhoc         #+#    #+#             */
/*   Updated: 2019/04/14 23:06:29 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"display_file.h"
void    ft_putchar(char c)
{
    write(1,&c,1);
}
