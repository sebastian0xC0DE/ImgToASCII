#ifndef IMAGE_H
#define IMAGE_H

typedef struct {

  int width;
  int height;
  int channels;
  unsigned char *data;

} Image;

Image loadImage(const char *path);

#endif // !IMAGE_H
