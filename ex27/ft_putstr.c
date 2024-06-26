/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:43:06 by hchereau          #+#    #+#             */
/*   Updated: 2024/05/14 19:42:02 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

void	ft_putstr_error(char *str)
{
	write(STDERR_FILENO, str, ft_strlen(str));
}

void	ft_putstr(char *str)
{
	write(STDOUT_FILENO, str, ft_strlen(str));
}
