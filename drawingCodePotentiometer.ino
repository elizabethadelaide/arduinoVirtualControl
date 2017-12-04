int pinIn = A0; //change to pin being used
void setup(){
	Serial.begin(9600);
}
void loop(){
	int value = analogRead(pinIn);
	Serial.print(map(value,0,1023,0,500)); //x position, map to different range
	Serial.print(","); //comma separator
	Serial.print("200"); //y value, temporary
	Serial.print("\n"); //new line
	delay(50); //short delay
}
}