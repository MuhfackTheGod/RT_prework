/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msdl_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:16:08 by alalonzo          #+#    #+#             */
/*   Updated: 2017/12/04 15:49:46 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "msdl.h"

void	msdl_error(const char *str_error)
{
	const char	*sdl_error;

	sdl_error = SDL_GetError();
	if (str_error != NULL)
		ft_putendl_fd(str_error, 2);
	if (sdl_error != NULL && ft_strlen(sdl_error) > 0)
		ft_putendl_fd(sdl_error, 2);
}
