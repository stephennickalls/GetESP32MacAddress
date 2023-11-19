#include "WiFi.h"

// Each eps32 needs to have its mac address read so that it can be used in the 
// setup of the esp now protocol.
// this sketch simply outputs the eps32's mac address
 
void setup(){
  Serial.begin(115200);
  WiFi.mode(WIFI_MODE_STA);
  Serial.println("Mac Address: " + WiFi.macAddress());
}

// C8:F0:9E:9C:12:10
 
void loop(){

}