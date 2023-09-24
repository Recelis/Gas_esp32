#include <Arduino.h>

// put function declarations here:
int getGasValue();
const int GAS_PIN = 4;


void setup() {
  Serial.begin(115200);
  pinMode(GAS_PIN, INPUT);
  Serial.println("MQ2 warming up!");
	delay(20000); // allow the MQ2 to warm up
}

void loop() {
  // get chemical values

  // read time

  // send to SQS message
  getGasValue();
  delay(2000); // wait 2s for next reading
}

int getGasValue() {
  int gasValue = analogRead(GAS_PIN) * 100 / 4095;
  Serial.println(gasValue);
  return gasValue;
}