/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 21:12:20 by hucherea          #+#    #+#             */
/*   Updated: 2024/05/11 17:45:08 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0)
		return (0);
	sqrt = 1;
	while (sqrt <= 0xFFFF)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		++sqrt;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
    printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2147395600));

}
*/
