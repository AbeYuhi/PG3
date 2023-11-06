#pragma once
class IShape
{
public:
	IShape() = default;
	virtual ~IShape() = default;

	virtual void Size() = 0;

	virtual void Draw() = 0;

protected:
	float size_;
};

