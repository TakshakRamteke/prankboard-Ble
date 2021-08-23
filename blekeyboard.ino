#include <BleKeyboard.h>

BleKeyboard bleKeyboard;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  pinMode(LED_BUILTIN, OUTPUT);
  bleKeyboard.begin();
}

void loop() {
  if(bleKeyboard.isConnected()) {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Sending 'Hello world'...");
    bleKeyboard.print("Hello world");
    Serial.println("Sending Enter key...");
    bleKeyboard.write(KEY_RETURN);
    bleKeyboard.press(KEY_LEFT_CTRL);
    bleKeyboard.press(KEY_LEFT_ALT);
    bleKeyboard.press(KEY_DELETE);
    delay(500);
  }
  bleKeyboard.releaseAll();
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  Serial.println("Waiting 5 seconds...");
  delay(500);
}
