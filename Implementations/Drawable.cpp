/*
 * Drawable.cpp
 *
 *  Created on: Jul 4, 2016
 *      Author: default
 */

#include "Drawable.h"
#include <SDL2/SDL_render.h>

namespace Implementations {

Drawable::Drawable(SDL_Rect rect, SDL_Color color) {
	m_rect = rect;
	m_color = color;
}

Drawable::~Drawable() {
	// TODO Auto-generated destructor stub
}

void Drawable::Draw(SDL_Renderer* rend) {
	SDL_SetRenderDrawColor(rend, m_color.r, m_color.g, m_color.b, m_color.a);
	SDL_RenderFillRect(rend, &m_rect);
}

} /* namespace Implementations */
