int reflowend;
const int buzzerPin = 0;
const int coolingfanPin = 1;
int beepcount = 0;



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(coolingfanPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);


  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  digitalWrite(coolingfanPin, LOW);
  digitalWrite(buzzerPin, LOW);

  
}


// the loop function runs over and over again forever
void loop() {
  
     
  reflowend = digitalRead(3);
  if (reflowend == HIGH){
     digitalWrite(coolingfanPin, HIGH);
      
    if(beepcount < 5){
       digitalWrite(buzzerPin, HIGH);
       delay(300);
       beepcount++;
       digitalWrite(buzzerPin, LOW);
       delay(300);
      }    
    
    }
    
  else
  
    {
    beepcount = 0;
    digitalWrite(coolingfanPin, LOW);
    digitalWrite(buzzerPin, LOW);
    }
}
