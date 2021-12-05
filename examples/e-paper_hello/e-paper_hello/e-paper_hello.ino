#include <Epaper1_54.h>

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

  Serial.println("e-Paper paint");
  epd.Clear(1);
  epd.DrawStringAt(30, 4, "Hello Stacey!", &Font16, 0);
  epd.SetFrameMemory(epd.GetImage(), 0, 10, epd.GetWidth(), epd.GetHeight());

  epd.DisplayFrame();
}

void loop() {
  // put your main code here, to run repeatedly:

}
