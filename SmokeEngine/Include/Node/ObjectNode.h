#pragma once
#include "Node.h"
#include <string>
#include "Utility\Vector\Vector3.h"

class RenderObject;
class Matrix4x4;
class ObjectNode : public Node
{
public:
	RenderObject * mRenderObject;
	Vector3 Origin;

	ObjectNode(std::string ID, RenderObject * renderObject);
	virtual ~ObjectNode(void);

	virtual Matrix4x4 GetMatrix();
	
	virtual void Update();
	void Draw(Matrix4x4 transform, Matrix4x4 view);

	virtual std::string GetType();
};

