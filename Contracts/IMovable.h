/*
 * Movable.h
 *
 *  Created on: Jul 4, 2016
 *      Author: default
 */

#ifndef IMOVABLE_H_
#define IMOVABLE_H_

namespace Contracts {

#ifndef NULL
#define NULL 0
#endif

class IMovable {
public:
	virtual void Move() = 0;
};

} /* namespace Contracts */

#endif /* IMOVABLE_H_ */
