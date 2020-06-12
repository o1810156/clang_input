#ifndef _INCLUDE_input_h_
#define _INCLUDE_input_h_

// GPPはg++でコンパイルするときに手動設定するものです。
#if defined(__cplusplus) && !defined(GPP)
extern "C" {
#endif

extern char* input(char *desc, ...);

#if defined(__cplusplus) && !defined(GPP)
}
#endif

#endif
