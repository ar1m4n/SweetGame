/*
 * Drawable.h
 *
 *  Created on: Jul 4, 2016
 *      Author: default
 */

#ifndef IDRAWABLE_H_
#define IDRAWABLE_H_

struct SDL_Renderer;

#ifndef NULL
#define NULL 0
#endif

namespace Contracts {

class IDrawable {
public:
	virtual void Draw(SDL_Renderer* renderer = NULL) = 0;
};

} /* namespace Contracts */

#endif /* DRAWABLE_H_ */
