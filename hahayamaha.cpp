// array of notes C D E F in hertz values
int notes[] = {262,294,330,349};

void setup() 
{
  Serial.begin(9600);

}

void loop() 
{
  int keyVal = analogRead(A0);
  Serial.println(keyVal);
  if(keyVal == 1023)
  {
    // hit a "C"
    tone(8, notes[0]);
  }
  else if(keyVal >= 990 && keyVal <= 1010)
  {
    // hit a "D"
    tone(8, notes[1]);
  }
  else if(keyVal >= 550 && keyVal <= 515)
  {
    // hit a "E"
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <= 10)
  {
    // hit a "F"
    tone(8, notes[3]);
  }
  else
  {
    noTone(8);
  }
}
