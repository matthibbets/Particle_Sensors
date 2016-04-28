#include "Unified_Sensors/Adafruit_LSM303_U.h"

Adafruit_LSM303_Accel_Unified accel;
Adafruit_LSM303_Mag_Unified mag;

void setup() {
    Serial.begin(115200);
    
    accel.begin();
    mag.begin();
}

void loop() {
    sensors_event_t event;
    
    mag.getEvent(&event);
    
    Serial.print("Mag X: ");
    Serial.println(event.magnetic.x);
    
    accel.getEvent(&event);
    Serial.print("Accel X: ");
    Serial.println(event.acceleration.x);
}
