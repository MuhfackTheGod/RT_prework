/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msdl_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:09:47 by alalonzo          #+#    #+#             */
/*   Updated: 2017/12/04 16:17:05 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "msdl.h"

int		msdl_init(void)
{
	if (SDL_Init(SDL_INIT_VIDEO) == 0)
		return (1);
	msdl_error("Echec lors de l'initialisation de la SDL.");
	return (0);
}
