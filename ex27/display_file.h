/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:07:49 by hchereau          #+#    #+#             */
/*   Updated: 2024/05/14 19:54:59 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE 2000

void	ft_putstr(char *str);
void	ft_putstr_error(char *str);
void	print_file(char *file_path);

#endif
