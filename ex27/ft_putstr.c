/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchereau <hchereau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:43:06 by hchereau          #+#    #+#             */
/*   Updated: 2024/05/12 20:48:11 by hchereau         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	write(STDOUT_FILENO, str, ft_strlen(str));
}
