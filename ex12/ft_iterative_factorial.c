/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 17:04:53 by hchereau          #+#    #+#             */
/*   Updated: 2024/05/14 14:10:48 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb >= 12)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		res *= i;
		++i;
	}
	return (res);
}
