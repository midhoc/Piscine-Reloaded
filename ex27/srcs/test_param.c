/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 22:53:51 by midounhoc         #+#    #+#             */
/*   Updated: 2019/04/14 23:03:54 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int tst_param(int argc)
{

    if(argc < 2)
    {
        ft_putstr("File name missing.\n");
        return(0);
    }
    if(argc > 2)
    {
        ft_putstr("Too many arguments.\n");
        return(0);
    }
    return(1);
}
