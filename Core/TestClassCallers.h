#ifndef __TestClassCallers_h__
#define __TestClassCallers_h__

#include "Entity.h"		// needed for EXAMPLEUNMANAGEDDLL_API

#ifdef __cplusplus
extern "C" {
#endif

	extern EXAMPLEUNMANAGEDDLL_API Entity* CreateTestClass();
	extern EXAMPLEUNMANAGEDDLL_API void DisposeTestClass(Entity* pObject);

	extern EXAMPLEUNMANAGEDDLL_API float CallAdd(Entity* pObject, float a, float b);

#ifdef __cplusplus
}
#endif

#endif // __TestClassCallers_h__
