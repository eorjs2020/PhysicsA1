#pragma once
#ifndef __INPUT_SCENE__
#define __INPUT_SCENE__

#include "Scene.h"
#include "Label.h"
#include "Button.h"

class InputScene final : public Scene
{
public:
	InputScene();
	~InputScene();

	// Inherited via Scene
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;
	virtual void handleEvents() override;
	virtual void start() override;

private:
	Label* m_label{};

	Button* m_pRestartButton;
};

#endif /* defined (__INPUT_SCENE__) */