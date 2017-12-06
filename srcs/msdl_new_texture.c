/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msdl_new_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:23:30 by alalonzo          #+#    #+#             */
/*   Updated: 2017/12/04 16:26:58 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msdl.h"

SDL_Texture	*msdl_new_texture(SDL_Renderer *render, int width, int height)
{
	SDL_Texture	*texture;

	texture = SDL_CreateTexture(render, MSDL_PF, MSDL_TA, width, height);
	if (texture == NULL)
		msdl_error("Echec lors de la creation de la texture");
	return (texture);
}
