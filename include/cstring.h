#ifndef CSTRING_H

#define CSTRING_H

#ifndef ARENA_H

#include <stddef.h>

typedef struct Arena Arena;

void *arena_alloc(Arena *arena, size_t size);

#endif // ARENA_H

typedef struct String String;
String *string_from(Arena *arena, char *str);
String *string_concat(Arena *arena, String *str1, String *str2);
int string_len(String *str);
String *string_sub(Arena *arena, String *str, int begin, int end);
char *string(String *st);
String *string_concat_cstr(Arena *arena, char *s1, char *s2);
String *string_trim(Arena *arena, String *str);

#endif // CSTRING_H
