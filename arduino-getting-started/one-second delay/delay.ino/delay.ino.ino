#define LED_BUILTIN   13

void DelayFunc(int millisecs);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  DelayFunc(500);        // Own defined delay Function.

  digitalWrite(LED_BUILTIN, LOW);
  DelayFunc(500);        // Own defined delay Function.
}

void DelayFunc(int millisecs) {
  unsigned long startTime = millis();
  while (millis() - startTime < millisecs) {}
    /* Do nothing, just wait
     * This loop shall create 1-second delay
     */
}