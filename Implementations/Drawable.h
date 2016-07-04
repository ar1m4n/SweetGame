/*
 * Drawable.h
 *
 *  Created on: Jul 4, 2016
 *      Author: default
 */

#ifndef DRAWABLE_H_
#define DRAWABLE_H_

#include "../Contracts/IDrawable.h"
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_pixels.h>

namespace Implementations {

class Drawable: public Contracts::IDrawable {
public:
	Drawable(SDL_Rect size = {0, 0, 0, 0}, SDL_Color color = {255, 255, 255, 255});
	virtual ~Drawable();
	virtual void Draw(SDL_Renderer* rend = NULL);

protected:
	SDL_Rect m_rect;
	SDL_Color m_color;
};

} /* namespace Implementations */

#endif /* DRAWABLE_H_ */
