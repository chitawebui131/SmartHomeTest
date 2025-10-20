/*
  blink_led.ino
  -----------------
  Simple Blink Example for CI/CD demonstration
  Works with GitHub Actions and Arduino CLI.
*/

const int LED_PIN = 13;  // Built-in LED on most Arduino boards

void setup() {
  // Initialize the LED pin as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // Turn the LED on
  delay(1000);                   // Wait 1 second
  digitalWrite(LED_PIN, LOW);    // Turn the LED off
  delay(1000);                   // Wait 1 second
}
