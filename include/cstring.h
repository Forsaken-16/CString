#ifndef CSTRING_H

#define CSTRING_H

#ifndef ARENA_H

#include <stddef.h>

typedef struct Arena Arena;

void *arena_alloc(Arena *arena, size_t size);
Arena *arena_init(size_t capacity);
void arena_free(Arena **arena);
void *m_align_alloc(size_t capacity);
void m_align_free(void *ptr);
void *m_align_realloc(void *ptr, size_t old_size, size_t new_size);

#endif // ARENA_H

#include <stdio.h>

typedef struct String String;
String *string_from(Arena *arena, char *str);
String *string_concat(Arena *arena, String *str1, String *str2);
int string_len(String *str);
String *string_sub(Arena *arena, String *str, int begin, int end);
char *string(String *st);
String *string_concat_cstr(Arena *arena, char *s1, char *s2);
String *string_trim(Arena *arena, String *str);
String *string_get(Arena *arena);

#endif // CSTRING_H
