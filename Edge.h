#pragma once

class Edge {
public:
	Edge(int firstPoint, int secondPoint, double weight);
	int GetFirstPoint();
	int GetSecondPoint();
	double GetWeight();
private:
	int firstPoint, secondPoint;
	double weight;
};
