/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:50:21 by hchereau          #+#    #+#             */
/*   Updated: 2024/05/14 19:54:57 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

static void	empty_buffer(char *buffer, int size_buffer)
{
	int	i;

	i = 0;
	while (i < size_buffer)
	{
		buffer[i] = '\0';
		++i;
	}
}

void	print_file(char *file_path)
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_error("Cannot read file.\n");
		return ;
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		ft_putstr(buffer);
		empty_buffer(buffer, BUFFER_SIZE);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			ft_putstr_error("Cannot read file.\n");
		}
	}
	close(fd);
}
