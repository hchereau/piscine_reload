/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:42:43 by hchereau          #+#    #+#             */
/*   Updated: 2024/05/11 19:48:09 by hchereau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

int	ft_count_if(char **tab, int(*f)(char))
{
	int		count;
	size_t	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			++count;
		}
		++i;
	}
	return (count);
}
