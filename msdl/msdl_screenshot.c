/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msdl_screenshot.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:00:05 by alalonzo          #+#    #+#             */
/*   Updated: 2017/12/04 16:19:41 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "msdl.h"

void	msdl_screenshot(SDL_Window *win)
{
	char		*tmp;
	char		*str;
	SDL_Surface	*screen;

	if ((tmp = ft_itoa(SDL_GetTicks())) != NULL)
	{
		if ((str = ft_strjoin(tmp, ".bmp")) != NULL)
		{
			if ((screen = SDL_GetWindowSurface(win)) != NULL)
			{
				if ((SDL_SaveBMP(screen, str)) == 0)
				{
					ft_putstr("image sauvegardee en tant que: ");
					ft_putendl(str);
				}
				SDL_FreeSurface(screen);
			}
			free(str);
		}
		free(tmp);
	}
	else
		msdl_error("Echec lors de la creation du screenshot.");
}
