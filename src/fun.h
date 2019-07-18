#pragma once

#define EXPORT __declspec(dllexport)

#ifdef __cplusplus
extern "C" {
#endif

	EXPORT int foo(void *data);
	EXPORT double bar(void *data, double coef);

#ifdef __cplusplus
}
#endif 


