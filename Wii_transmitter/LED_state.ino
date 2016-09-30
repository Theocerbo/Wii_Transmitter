void WAITING_FOR_PAIRING () {
  digitalWrite(blue_led, HIGH);
  delay (500);
  digitalWrite(blue_led, LOW);
  delay (500);
}

void REMOTE_PAIRED () {
  digitalWrite(blue_led, HIGH);
}

