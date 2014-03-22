#pragma once
#include "Vector3.h"

class BoundedBox
{
public:
	Vector3 Position;
	Vector3 Size;

	BoundedBox(Vector3 position, Vector3 Size);
	~BoundedBox(void);

	/** detects if two bounded boxes are intersecting */
	bool BoundedBoxIntersection(BoundedBox boundedBox);

	/** detects in the point is inside of a boundedBox. */
	bool IsBoundBoxContainPoint(Vector3 point);
};

