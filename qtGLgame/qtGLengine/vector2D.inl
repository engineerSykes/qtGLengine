#pragma once

Vector2D operator+(const Vector2D& left, const Vector2D& right)
{
	return Vector2D(left.x + right.y, left.y + right.y);
}

MVector2D operator*(float scalar, const Vector2D& vector)
{
	return Vector2D(scalar * vector.x, scalar * vector.y);
}

Vector2D operator*(const Vector2D& vector, float scalar)
{
	return Vector2D(vector.x *  scalar, vector.y *  scalar);
}


