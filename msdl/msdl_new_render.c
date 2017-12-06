/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msdl_new_render.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:08:06 by alalonzo          #+#    #+#             */
/*   Updated: 2017/12/04 16:17:20 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msdl.h"

SDL_Renderer	*msdl_new_render(SDL_Window *win)
{
	SDL_Renderer	*render;

	render = SDL_CreateRenderer(win, -1, MSDL_RS);
	if (render == NULL)
		msdl_error("Echec lors de la creation du renderer SDL.");
	return (render);
}
