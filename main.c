#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include "image.h"

int main() {

  Image img = loadImage("./image.ppm");

  if (img.data == NULL) {
    printf("The image doesn't exists");
    return -1;
  }

  printf("The Image exists\n");

  return 0;

}
