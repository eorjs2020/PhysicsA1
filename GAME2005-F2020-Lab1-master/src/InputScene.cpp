#include "InputScene.h"
#include "Game.h"
#include "EventManager.h"

InputScene::InputScene()
{
	InputScene::start();
}

InputScene::~InputScene()
= default;


void InputScene::draw()
{
	drawDisplayList();
}

void InputScene::update()
{
	updateDisplayList();
}

void InputScene::clean()
{
	removeAllChildren();
}

void InputScene::handleEvents()
{
	EventManager::Instance().update();

	// Keyboard Events
	if (EventManager::Instance().isKeyDown(SDL_SCANCODE_ESCAPE))
	{
		TheGame::Instance()->quit();
	}

	if (EventManager::Instance().isKeyDown(SDL_SCANCODE_1))
	{
		TheGame::Instance()->changeSceneState(PLAY_SCENE);
	}
}

void InputScene::start()
{
}
