#include "PlayScene.h"
#include "Game.h"
#include "EventManager.h"

PlayScene::PlayScene()
{
	PlayScene::start();
}

PlayScene::~PlayScene()
= default;

void PlayScene::draw()
{
	drawDisplayList();
}

void PlayScene::update()
{
	TextureManager::Instance()->draw("back", 0, 0, 0, 255, true);
	updateDisplayList();
	
	
	m_pDistanceLabel->setText("Distance = " + std::to_string(m_pPlayer->checkDistance(m_pEnemy)));
	m_pAcceleration->setText("Acceleration = " + std::to_string(m_pPlayer->checkDistance(m_pEnemy)));
	m_pForce->setText("Force = " + std::to_string(m_pPlayer->checkDistance(m_pEnemy)));
	m_pVelocity->setText("Velocity = " + std::to_string(m_pPlayer->checkDistance(m_pEnemy)));
	m_pPositon->setText("Positon = " + std::to_string(m_pPlayer->checkDistance(m_pEnemy)));
	m_pMass->setText("Mass = " + std::to_string(m_pPlayer->checkDistance(m_pEnemy)));
	m_pAngle->setText("Angle = " + std::to_string(m_pPlayer->checkDistance(m_pEnemy)));
}

void PlayScene::clean()
{
	removeAllChildren();
}

void PlayScene::handleEvents()
{
	EventManager::Instance().update();

	if (EventManager::Instance().isKeyDown(SDL_SCANCODE_A))
	{
		m_pPlayer->moveLeft();
	}
	else if (EventManager::Instance().isKeyDown(SDL_SCANCODE_D))
	{
		m_pPlayer->moveRight();
	}

	if (EventManager::Instance().isKeyDown(SDL_SCANCODE_ESCAPE))
	{
		TheGame::Instance()->quit();
	}
}

void PlayScene::start()
{
	// BackgroundImage
	TextureManager::Instance()->load("../Assets/textures/megaman-run-3.png", "back");
	

	// Player Sprite
	m_pPlayer = new Player();
	addChild(m_pPlayer);
	
	// Enemy Sprite
	m_pEnemy = new Enemy();
	addChild(m_pEnemy);

	// Label
	const SDL_Color blue = { 0, 0, 255, 255 };
	m_pDistanceLabel = new Label("Distance", "Consolas", 40, blue, glm::vec2(400.0f, 40.0f));
	m_pDistanceLabel->setParent(this);
	addChild(m_pDistanceLabel);

	
	m_pDistanceLabel = new Label("Distance", "Consolas", 40, blue, glm::vec2(400.0f, 40.0f));
	m_pDistanceLabel->setParent(this);
	addChild(m_pDistanceLabel);

	
	m_pDistanceLabel = new Label("Distance", "Consolas", 40, blue, glm::vec2(400.0f, 40.0f));
	m_pDistanceLabel->setParent(this);
	addChild(m_pDistanceLabel);

}
