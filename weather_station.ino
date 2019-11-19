#include "DHT.h"

//Sensor digital pin
#define DHTPIN 8
//Setting the sensor type
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    //Starting the serial communication
    Serial.begin(9600);
    dht.begin();
}

void loop() {
    //delay for 2 second before reading again
    delay(2000);
    //setting humidity
    float humidity = dht.readHumidity();
    //setting temperature
    float temperature = dht.readTemperature();

    Serial.print(temperature);
    //Output for splitting the string into two array during serial read.
    Serial.print(",");
    Serial.println(humidity);
}
