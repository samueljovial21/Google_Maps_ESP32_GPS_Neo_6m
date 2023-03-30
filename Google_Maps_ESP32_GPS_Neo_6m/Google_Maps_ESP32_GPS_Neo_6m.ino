
/*
 GitHub : samueljovial21
 https://github.com/samueljovial21
*/

#include <TinyGPSPlus.h>

// Defining TinyGPSPlus object
TinyGPSPlus gps;


void setup() {
  Serial.begin(9600);
  Serial2.begin(9600);
  delay(3000);
}

void loop() {
  // Checking if there's gps available to use
  while (Serial2.available() > 0) {
    if (gps.encode(Serial2.read())) {
      // Calling The displayInfo function
      displayInfo();
    }
  }
  // If no gps detected, please check wiring
  if (millis() > 5000 && gps.charsProcessed() < 10) {
    Serial.println(F("No GPS detected: check wiring."));
  }
}

void displayInfo() {
  // Printing the data received
  Serial.print(F("Location: "));
  // Print location if there's satellite available
  if (gps.location.isValid()) {
    Serial.print("Lat: ");
    Serial.print(gps.location.lat(), 6);
    Serial.print(F(","));
    Serial.print("Lng: ");
    Serial.print(gps.location.lng(), 6);
    Serial.println();
  } else {
    // Print location if there's no satellite available
    Serial.println(F("INVALID"));
  }
}
