#pragma once
#define EXAMPLEUNMANAGEDDLL_API __declspec(dllexport)
#include "../Core/Entity.h"		// needed for EXAMPLEUNMANAGEDDLL_API



class Ent : public Entity
{};

