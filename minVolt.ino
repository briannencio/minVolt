byte pot = A0;
byte pin1 = 3;
byte pin2 = 5;
int velocidad;
int lectura;
float volt;

void setup() {
	Serial.begin(9600);
	pinMode(pot, INPUT);
	pinMode(pin1, OUTPUT);
	pinMode(pin2, OUTPUT);
}

void loop() {
	lectura = analogRead(pot);

	velocidad = map(lectura, 0, 1023, 0, 255);

	analogWrite(pin1, velocidad);

	volt = (float) velocidad * 5 / 255;

	Serial.print(velocidad);
	Serial.print(" bits");
	Serial.print(" ");
	Serial.print(volt);
	Serial.println(" V");
}
