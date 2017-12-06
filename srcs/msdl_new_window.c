/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msdl_new_window.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:05:21 by alalonzo          #+#    #+#             */
/*   Updated: 2017/12/04 16:17:58 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msdl.h"

SDL_Window	*msdl_new_window(char *title, int width, int height)
{
	SDL_Window	*win;

	win = SDL_CreateWindow(title, MSDL_WP, MSDL_WP, width, height, MSDL_WF);
	if (win == NULL)
		msdl_error("Echec lors de la creation de la fenetre SDL.");
	return (win);
}
