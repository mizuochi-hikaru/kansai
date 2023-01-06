#ifndef SPLIT_H_INCLUDED
#define SPLIT_H_INCLUDED

#include "../include/kansai.h"

#include <stdlib.h>
#include <string.h>

/* stdlib.h */
#define メモリ解放 free
#define メモリ確保 malloc
#define メモリ値セット memset

/* string.h */
#define 文字探し strchr
#define 文字列n文字コピー strncpy
#define 文字列長さ strlen 

#endif /* SPLIT_H_INCLUDED */