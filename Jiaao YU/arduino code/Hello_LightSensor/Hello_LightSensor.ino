#include <Adafruit_CircuitPlayground.h>

int value;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  CircuitPlayground.playTone(250, 1000);
}

void loop() {
  value = CircuitPlayground.lightSensor();
  
  
  if (value > 200){
  Serial.print("Light Sensor: ");
  Serial.println(value);
  CircuitPlayground.playTone(250, 100);
  delay(1000);
  }
  if (value <= 100 and value >= 50){
  Serial.print("Light Sensor: ");
  Serial.println(value);
  CircuitPlayground.playTone(500, 100);
  delay(500);
  }
  if (value <= 50 and value >=25){
  Serial.print("Light Sensor: ");
  Serial.println(value);
  CircuitPlayground.playTone(1000, 100);
  delay(100);
  }
  if (value <= 25){
  Serial.print("Light Sensor: ");
  Serial.println(value);
  CircuitPlayground.playTone(2000, 100);
  }
  
  
}
