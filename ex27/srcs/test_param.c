/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_param.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <hmidoun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 22:53:51 by midounhoc         #+#    #+#             */
/*   Updated: 2019/04/15 13:10:00 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	tst_param(int argc)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}
