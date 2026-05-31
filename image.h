#ifndef IMAGE_H
#define IMAGE_H

typedef struct {

  int width;
  int height;
  int channels;
  unsigned char *data;

} Image;

Image loadImage(const char *path);
void freeImage(Image *img);

#endif // !IMAGE_H
