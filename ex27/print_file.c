/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:50:21 by hchereau          #+#    #+#             */
/*   Updated: 2024/05/14 16:21:17 by hucherea         ###   ########.fr       */
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

static void	print_last_read(char *buffer, int bytes_reads)
{
	if (bytes_reads != 0)
	{
		ft_putstr(buffer);
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
		ft_putstr("Cannot read file.");
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read == BUFFER_SIZE)
	{
		ft_putstr(buffer);
		empty_buffer(buffer, BUFFER_SIZE);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	print_last_read(buffer, bytes_read);
}
