/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msdl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 13:35:47 by alalonzo          #+#    #+#             */
/*   Updated: 2017/12/04 16:29:01 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MSDL_H
# define MSDL_H

# include "SDL.h"
# define MSDL_WP SDL_WINDOWPOS_CENTERED
# define MSDL_WF SDL_WINDOW_SHOWN
# define MSDL_RS SDL_RENDERER_SOFTWARE
# define MSDL_PF SDL_PIXELFORMAT_UNKNOWN
# define MSDL_TA SDL_TEXTUREACCESS_TARGET

int				msdl_init(void);
SDL_Window		*msdl_new_window(char *title, int width, int height);
SDL_Renderer	*msdl_new_render(SDL_Window *win);
SDL_Texture		*msdl_new_texture(SDL_Renderer *render, int width, int height);
void			msdl_screenshot(SDL_Window *win);
void			msdl_error(const char *str_error);

#endif
