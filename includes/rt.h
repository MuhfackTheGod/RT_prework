/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsouleym <dsouleym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 15:54:06 by dsouleym          #+#    #+#             */
/*   Updated: 2017/12/06 16:51:13 by dsouleym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_H
# define RT_H
#include "libft.h"
#include "msdl.h"
#include "math.h"
#include "SDL.h"
#define WIDTH 1000
#define HEIGHT 800
typedef struct s_sdl
{
	SDL_Window *win;
	SDL_Renderer *rend;
	SDL_Event e;
} t_win;
#endif
