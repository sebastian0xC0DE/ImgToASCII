#include "image.h"

#include "stb_image.h"

Image loadImage(const char *path) {
  Image img;

  img.data = stbi_load(path, &img.width, &img.height, &img.channels, 0);

  return img;
};
