/* An Implementation of the Bluetooth keyboard librerary avaliable for ESP32 just 
to mess with my friend and anoy them and have a little fun */

#include <BleKeyboard.h>

BleKeyboard bleKeyboard;

void setup() {
  Serial.begin(115200); // Initializing the Serial Monitor
  bleKeyboard.begin();
  Serial.println("Started the Bluetooth Please connect ...");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if(bleKeyboard.isConnected()) {
    Serial.println("Bluettoth connected !!!");
    Serial.println("Starting the procedure");
    digitalWrite(LED_BUILTIN, HIGH); // blinking the LED in case the Serial monitor isnt accessible
    bleKeyboard.press(KEY_LEFT_CTRL); // Pressing the left control key
    bleKeyboard.press(KEY_LEFT_ALT); // Pressing the left alter key
    bleKeyboard.press(KEY_DELETE); // Pressing the Delete key
    delay(500); // adding a delay of 5 sec to ensure the prank works :devil_smiley:
    bleKeyboard.releaseAll(); // releasing the key
  }
  digitalWrite(LED_BUILTIN, LOW); // Turning the built in LED off to let us know that the prank was successfull
  Serial.println("Waiting 5 seconds...");
  delay(500); // adding a delay of 5 sec before the prank restarts :intense_laughs:
}
