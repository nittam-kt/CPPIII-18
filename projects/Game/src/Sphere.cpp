#include "Sphere.h"

using namespace UniDx;


bool Sphere::checkIntersect(
	SphereCollider* other,
	PhysicsActor* myActor,
	PhysicsActor* otherActor)
{
	Vector3 centerA = transform->TransformPoint(center);
	float radiusA = radius;
	Vector3 centerB = other->transform->TransformPoint(other->center);
	float radiusB = other->radius;

	return false;
}


#if false
bool Sphere::checkIntersect(
	AABBCollider* other,
	PhysicsActor* myActor,
	PhysicsActor* otherActor)
{
	return false;
}
#endif