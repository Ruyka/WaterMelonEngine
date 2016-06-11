#include "AttackAction.h"
#include "TextureManager.h"
#include "Sprite.h"
#include "Actor.h"
#include <assert.h>


AttackAction::AttackAction(std::shared_ptr<Actor> actor)
	: IActorCommand(actor)
{
	assert(actor != nullptr);
}

void AttackAction::execute()
{
	actor->attack();
}

bool AttackAction::isDone()
{
	return done;
}

void AttackAction::finished()
{
	done = true;
}