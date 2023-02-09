#include "Edge.h"

Edge::Edge(int firstPoint, int secondPoint, double weight) {
	this->firstPoint = firstPoint;
	this->secondPoint = secondPoint;
	this->weight = weight;
}

int Edge::GetFirstPoint()
{
	return firstPoint;
}

int Edge::GetSecondPoint()
{
	return secondPoint;
}

double Edge::GetWeight()
{
	return weight;
}
