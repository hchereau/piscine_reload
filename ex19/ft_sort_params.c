/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:02:38 by hucherea          #+#    #+#             */
/*   Updated: 2024/05/14 16:44:05 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		++i;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*convert;

	convert = *a;
	*a = *b;
	*b = convert;
}

int	main(int ac, char **av)
{
	int	i_start;
	int	i_tri;

	i_start = 1;
	while (i_start < ac - 1)
	{
		i_tri = i_start + 1;
		while (i_tri < ac)
		{
			if (ft_strcmp(av[i_start], av[i_tri]) < 0)
			{
				ft_swap(&av[i_start], &av[i_tri]);
			}
			++i_tri;
		}
		++i_start;
	}
	--ac;
	while (ac > 0)
	{
		ft_putstr(av[ac]);
		ft_putchar('\n');
		--ac;
	}
}
