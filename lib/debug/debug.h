#ifndef _DEBUG_H_
#define _DEBUG_H_

#define VA_PRINTF(fmt, ...) fprintf(stdout, "[%s:%d] "fmt, __FUNCTION__, __LINE__, __VA_ARGS__)

#endif /* _DEBUG_H_ */
