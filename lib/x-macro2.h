// Type your code here, or load an example.

#define XSS_XI1(n,t) XSS_XI2(int32, int32_t, n, t)
#define XSS_XF1(n,t) XSS_XI1(n, t)
#include "x-macro1.h"

#define XSS_XI1(n,t) XSS_XI2(uint32, uint32_t, n, t)
#define XSS_XF1(n,t) XSS_XI1(n, t)
#include "x-macro1.h"

#define XSS_XI1(n,t) XSS_XI2(int64, int64_t, n, t)
#define XSS_XF1(n,t) XSS_XI1(n, t)
#include "x-macro1.h"

#define XSS_XI1(n,t) XSS_XI2(uint64, uint64_t, n, t)
#define XSS_XF1(n,t) XSS_XI1(n, t)
#include "x-macro1.h"

#define XSS_XI1(n,t) XSS_XF2(float, float, n, t)
#define XSS_XF1(n,t) XSS_XI1(n, t)
#include "x-macro1.h"

#define XSS_XI1(n,t) XSS_XF2(double, double, n, t)
#define XSS_XF1(n,t) XSS_XI1(n, t)
#include "x-macro1.h"



