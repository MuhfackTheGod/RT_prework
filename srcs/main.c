/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsouleym <dsouleym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 16:00:55 by dsouleym          #+#    #+#             */
/*   Updated: 2017/12/06 16:51:24 by dsouleym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

int main(void)
{
	t_win *sdl_s;

	sdl_s = (t_win*)malloc(sizeof(t_win));
	msdl_init();
	sdl_s->win = msdl_new_window("window", WIDTH, HEIGHT);
	sdl_s->rend = msdl_new_render(sdl_s->win);
	SDL_RenderPresent(sdl_s->rend);
	while (1)
	{
		SDL_WaitEvent(&sdl_s->e);
		if (sdl_s->e.window.event == SDL_WINDOWEVENT_CLOSE)
		{
			SDL_DestroyWindow(sdl_s->win);
			SDL_Quit();
			exit(0);
		}
	}
	return (0);
}

/*int		main(void)
{
	SDL_Window		*win;
	SDL_Renderer	*img;
	SDL_Event		e;

	SDL_CreateWindowAndRenderer(1000, 800, 0, &win, &img);
	int		x = 0;
	int		y = 0;
	while (x < 1000 && y < 800)
	{
		if (x % 5 == 0 || y % 5 == 0) {
			SDL_SetRenderDrawColor(img,	0, 255, 0, 255);
			SDL_RenderDrawPoint(img, x, y);
		}
		//else
		//	SDL_SetRenderDrawColor(img, rand(), rand(), rand(), rand());
		//SDL_RenderDrawPoint(img, x, y);
		if (++x >= 1000)
		{
			x = 0;
			++y;
		}
	}
	SDL_RenderPresent(img);
	while (1)
	{
		SDL_WaitEvent(&e);
		if (e.window.event == SDL_WINDOWEVENT_CLOSE)
		{
			SDL_DestroyWindow(win);
			SDL_Quit();
			exit(0);
		}
	}
	return (0);
}*/
