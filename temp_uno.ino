#include <math.h>
const int thermistor_output = A0;

const float Rref = 10000.0;   // fixed resistor 10kΩ
const float Beta = 3450.0;    // Beta value of your thermistor
const float T0 = 298.15;      // reference temperature 25°C in Kelvin
const float R0 = 10000.0;     // NTC resistance at 25°C

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(thermistor_output);
  float Vout = adcValue * (5.0 / 1023.0);

  // resistance of NTC
  float Rntc = (Rref * Vout) / (5.0 - Vout);

  // Beta formula
  float temperatureK = 1.0 / ((1.0 / T0) + (1.0 / Beta) * log(Rntc / R0));
  float temperatureC = temperatureK - 273.15;

  // calibration offset
 // float temperature = temperatureC - 20;  

  // print JSON for Java
  Serial.print("{\"temperature\":");
  Serial.print(temperatureC, 1);   // 0.1 °C precision
  Serial.println("}");

  delay(1000);
}
