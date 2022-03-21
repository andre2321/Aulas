int button = 2;
int led1 = 13;
int lastButtonState = 0;
int estadoButton = 0;


void setup()
{
  pinMode(led1 , OUTPUT);
  pinMode (button , INPUT);
  
}

void loop()
{
  estadoButton = digitalRead (button);
  if ( estadoButton == HIGH ) { 
    digitalWrite(led1 , LOW);
    delay(1000);
  }
  else { 
    digitalWrite (led1 , HIGH );  
  }int button = 2;
int led1 = 13;
int lastButtonState = 0;
int estadoButton = 0;


void setup()
{
  pinMode(led1 , OUTPUT);
  pinMode (button , INPUT);
  
}

void loop()
{
  estadoButton = digitalRead (button);
  if ( estadoButton == HIGH ) { 
    digitalWrite(led1 , LOW);
    delay(1000);
  }
  else { 
    digitalWrite (led1 , HIGH );  
  }
}
