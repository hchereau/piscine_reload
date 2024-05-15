/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 21:47:13 by hchereau          #+#    #+#             */
/*   Updated: 2024/05/14 19:20:50 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		print_file(av[1]);
	}
	else if (ac >= 3)
	{
		ft_putstr_error("Too many arguments.\n");
	}
	else if (ac <= 1)
	{
		ft_putstr_error("File name missing.\n");
	}
}
