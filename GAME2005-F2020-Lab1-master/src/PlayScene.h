#pragma once
#ifndef __PLAY_SCENE__
#define __PLAY_SCENE__

#include "Scene.h"
#include "Plane.h"
#include "Player.h"
#include "Button.h"
#include "Enemy.h"

class PlayScene : public Scene
{
public:
	PlayScene();
	~PlayScene();

	// Scene LifeCycle Functions
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;
private:
	glm::vec2 m_mousePosition;
	
	Plane* m_pPlaneSprite;
	Player* m_pPlayer;
	Enemy* m_pEnemy;
	Label* m_pDistanceLabel;
	Label* m_pAcceleration;
	Label* m_pForce;
	Label* m_pVelocity;
	Label* m_pPositon;
	Label* m_pMass;
	Label* m_pAngle;

	Button* m_pBackButton;
	Button* m_pNextButton;
};

#endif /* defined (__PLAY_SCENE__) */