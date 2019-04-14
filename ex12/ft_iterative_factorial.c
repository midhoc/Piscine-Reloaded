/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 15:55:18 by hmidoun           #+#    #+#             */
/*   Updated: 2018/07/08 17:06:21 by hmidoun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	fact = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb)
	{
		fact = fact * nb * i;
		i++;
		nb--;
	}
	if (i == nb)
		fact *= i;
	return (fact);
}
