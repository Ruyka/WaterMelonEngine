#pragma once
#include "ICommand.h"
#include <string>

class AttackAction : public IActorCommand
{
public:
	AttackAction(std::shared_ptr<Actor> actor);
	virtual void execute() override;

	// Inherited via IActorCommand
	virtual bool isDone() override;

	// Inherited via IActorCommand
	virtual void finished() override;
};
