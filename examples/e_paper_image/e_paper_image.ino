#include <SPI.h>
#include <Epaper1_54.h>
#include "stacey.h"

unsigned char image[1024];
Epd epd(image, 0, 0);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("e-Paper init and clear");
  epd.LDirInit();
  epd.ClearAll();
  
  epd.SetWidth(200);
  epd.SetHeight(24); 
  epd.HDirInit();
  epd.DisplayPartBaseImage(epd_bitmap_bmp_sample);
  epd.DisplayFrame();
}

void loop() {
  // put your main code here, to run repeatedly:

}
