#pragma once

// This header is intended to be used for shared libraries (so or dll) compiled to the shared_c_api target

#include "c-api-headers.h"

extern "C" {
#include "c-api-export.h"
}

#define YSS_QSORT_HEADER_INT(n,t)   void qsort(t *ar, uint64_t size, bool ascending)
#define YSS_QSORT_HEADER_FLT(n,t)   void qsort(qsort, n)(t *ar, uint64_t size, bool hasnan, bool ascending)

#define YSS_QSELECT_HEADER_INT(n,t)   void qselect(t *ar, uint64_t k, uint64_t size, bool ascending)
#define YSS_QSELECT_HEADER_FLT(n,t)   void qselect(t *ar, uint64_t k, uint64_t size, bool hasnan, bool ascending)

#define YSS_QPSORT_HEADER_INT(n,t)   void partial_qsort(t *ar, uint64_t k, uint64_t size, bool ascending)
#define YSS_QPSORT_HEADER_FLT(n,t)   void partial_qsort(t *ar, uint64_t k, uint64_t size, bool hasnan, bool ascending)

#define YSS_QKVSORT_HEADER_INT(n1,t1,n2,t2)   void keyvalue_qsort(t1 *keys, t2* vals, uint64_t size, bool ascending)
#define YSS_QKVSORT_HEADER_FLT(n1,t1,n2,t2)   void keyvalue_qsort(t1 *keys, t2* vals, uint64_t size, bool hasnan, bool ascending)

// dispatchers with simpler names relying on C++ overloads
namespace xss
{

#define XSS_XI1(n,t) inline bool qsort(t* ar, uint64_t n, bool desc) { return XSS_C_EXP_NAME1(qsort,n)( ar, n, desc ); }
#define XSS_XF1(n,t) inline bool qsort(t* ar, uint64_t n, bool hasnan, bool desc)  { return XSS_C_EXP_NAME1(qsort,n)( ar, n, hasnan, desc ); }
#include "x-macro1.h"

#define XSS_XI1(n,t) inline bool qselect(t* ar, uint64_t k, uint64_t n, bool desc) { return XSS_C_EXP_NAME1(qselect,n)( ar, k, n, desc ); }
#define XSS_XF1(n,t) inline bool qselect(t* ar, uint64_t k, uint64_t n, bool hasnan, bool desc)  { return XSS_C_EXP_NAME1(qselect,n)( ar, k, n, hasnan, desc ); }
#include "x-macro1.h"

#define XSS_XI1(n,t) inline bool partial_qsort(t* ar, uint64_t k, uint64_t n, bool desc) { return XSS_C_EXP_NAME1(partial_qsort,n)( ar, k, n, desc ); }
#define XSS_XF1(n,t) inline bool partial_qsort(t* ar, uint64_t k, uint64_t n, bool hasnan, bool desc)  { return XSS_C_EXP_NAME1(partial_qsort,n)( ar, k, n, hasnan, desc ); }
#include "x-macro1.h"

#define XSS_XI2(n1,t1, n2,t2) inline bool keyvalue_qsort(t1* keys, t2* vals, uint64_t n, bool desc) { return XSS_C_EXP_NAME2(keyvalue_qsort,n1, n2)( keys, vals, n, desc ); }
#define XSS_XF2(n1,t1, n2,t2) inline bool keyvalue_qsort(t1* keys, t2* vals, uint64_t n, bool hasnan, bool desc)  { return XSS_C_EXP_NAME2(keyvalue_qsort,n1, n2)( keys, vals, n, hasnan, desc ); }
#include "x-macro2.h"
	
}; // namespace xss