#ifndef DEFS_H
#define DEFS_H

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define STRCPY(dest, src)             \
	strncpy(dest, src, sizeof(dest)); \
	dest[sizeof(dest) - 1] = '\0'
#define STRNCPY(dest, src, n) \
	strncpy(dest, src, n);    \
	dest[n - 1] = '\0'

#define SCREEN_WIDTH  640
#define SCREEN_HEIGHT 480

#define FPS 30

typedef enum
{
	APP_MODE_GAME,
	APP_MODE_EDITOR
} AppMode;

#endif // DEFS_H
