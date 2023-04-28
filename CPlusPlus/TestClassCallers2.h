
#define EXAMPLEUNMANAGEDDLL_API __declspec(dllexport)
#include "Ent.h"

extern "C" {

	extern EXAMPLEUNMANAGEDDLL_API Ent* CreateTestClass();
	extern EXAMPLEUNMANAGEDDLL_API void DisposeTestClass(Ent* pObject);

	extern EXAMPLEUNMANAGEDDLL_API float CallAdd(Ent* pObject, float a, float b);

}