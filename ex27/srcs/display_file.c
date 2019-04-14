/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: midounhocine <mdho@hotmail.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 22:42:40 by midounhoc         #+#    #+#             */
/*   Updated: 2019/04/14 23:16:42 by midounhoc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int main(int argc, char **argv)
{
    int fd;

    if(tst_param(argc))
    {
        fd = open(argv[1], O_RDONLY);
        print_file(fd);
        close(fd);
    }
    return(0);
}
