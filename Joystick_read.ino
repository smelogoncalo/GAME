
int Xpin=A0;
int Ypin=A1;
int Xval;
int Yval;
int currentMillis;
unsigned long previousMillis =0;
const long interval =50;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin, INPUT);
pinMode(Ypin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis =millis();
  if(currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;
  
  Xval=analogRead(Xpin);
  Yval=analogRead(Ypin);
  SerialUSB.print("\n X value = ");
  SerialUSB.print(Xval);
  SerialUSB.print("\n Y value = ");
  SerialUSB.print(Yval);

if (Xval > 500 && Xval < 540 && Yval > 490 && Yval < 530) {

}
//2:Up
else if (Xval > 500 && Xval < 540 && Yval < 520) {
  SerialUSB.print (" \n UP");
}
//3:Down 
else if (Xval > 500 && Xval < 540 && Yval > 520) {
  SerialUSB.print (" \n DOWN");
}
//4:Left
else if (Yval > 490 && Yval < 530 && Xval < 523) {
  SerialUSB.print (" \n LEFT");
}
//5:Right
else if (Yval > 490 && Yval < 530 && Xval > 523) {
  SerialUSB.print (" \n RIGHT");
}
//6:Up-Left
else if (Xval < 523 && Yval < 510) {
  SerialUSB.print (" \n UP-LEFT");
}
//7:Up-Right
else if (Xval > 523 && Yval < 510) {
  SerialUSB.print (" \n UP-RIGHT");
}
//8:Down-Left
else if (Xval < 510 && Yval > 510) {
  SerialUSB.print (" \n DOWN-LEFT");
}
//9:Down-Right
else {
  SerialUSB.print (" \n DOWN-RIGHT");
}
}
}
