#include <MagicHome.h>
#include <Arduino.h>

MagicHome LightsController;

void setup()
{
  LightsController.Init();
}

void loop()
{
  LightsController.DiscoverLights();

  for (auto &light : LightsController.DiscoveredLights())
  {
    light.SetColor(100, 0, 0);
  }
  delay(1000);
}