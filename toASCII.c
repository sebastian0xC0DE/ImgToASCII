#include "toASCII.h"

#include <stdlib.h>
#include <string.h>

#include "image.h"

char *toASCII(Image img) {
  char *output = malloc((img.width * img.height) + img.height + 1);
  output[0] = '\0';

  char *asciiTable = " .'`^\",:;Il!i><~+_-?][}{1)(|\\/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao*#MW&8%B@$";

  for (int y = 0; y < img.height; y += 2) {
    for (int x = 0; x < img.width; x++) {
      int index = y * img.width + x;

      int gray = *(img.data + index);

      int asciiIndex = gray * (strlen(asciiTable) - 1) / 255;

      char temp[2];
      temp[0] = *(asciiTable + asciiIndex);
      temp[1] = '\0';

      strcat(output, temp);

    }

    strcat(output, "\n");

  }

  return output;
}

