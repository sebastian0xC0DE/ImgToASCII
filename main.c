#include <stdio.h>
#include <string.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include "image.h"
#include "toASCII.h"

int main() {

  Image img = loadImage("./image.jpg");

  if (img.data == NULL) {
    printf("The image doesn't exists\n");
    return -1;
  }

  printf("%s", toASCII(img));

  return 0;

}
