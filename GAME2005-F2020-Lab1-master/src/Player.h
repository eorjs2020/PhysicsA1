#pragma once
#ifndef __PLAYER__
#define __PLAYER__

#include "Sprite.h"
#include "Label.h"

class Player final : public Sprite
{
public:
	Player();
	~Player();

	// Life Cycle Methods
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;

	void moveLeft();
	void moveRight();

	void getMass(float mass) { Mass = mass; }
	void getAngle(float angle) { Angle = angle; }
	void getVelocity(float velocity) { Velocity = velocity; }

	float checkDistance(GameObject* pGameObject);
	float checkAccel() { return Accel; }
	float checkForce() { return Force; }
	float checkVelocity() { return Velocity; }
	float checkMass() { return Mass; }
	float checkAngle() { return Angle; }


private:
	float Accel, Force, Mass, Angle, Velocity;
	const float SPEED = 50.0f;
};

#endif /* defined (__PLAYER__) */