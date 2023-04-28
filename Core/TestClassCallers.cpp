#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#include <windows.h>

#include "TestClassCallers.h"


extern "C" EXAMPLEUNMANAGEDDLL_API Entity * CreateTestClass()
{
	return new Entity();
}

extern "C" EXAMPLEUNMANAGEDDLL_API void DisposeTestClass(Entity * pObject)
{
	if (pObject != NULL)
	{
		delete pObject;
		pObject = NULL;
	}
}

extern "C" EXAMPLEUNMANAGEDDLL_API float CallAdd(Entity * pObject, float a, float b)
{
	if (pObject != NULL)
	{
		pObject->Add(a, b);
		return a + b;
	}
}
