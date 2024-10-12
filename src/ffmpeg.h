#ifndef FFMPEG_H_
#define FFMPEG_H_

#include <stddef.h>  // Include stddef.h for size_t

typedef void FFMPEG;

FFMPEG *ffmpeg_start_rendering(size_t width, size_t height, size_t fps, const char *sound_file_path);
void ffmpeg_send_frame_flipped(FFMPEG *pipe, void *data, size_t width, size_t height);
void ffmpeg_end_rendering(FFMPEG *pipe);

#endif // FFMPEG_H_
