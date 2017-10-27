void setup() {
   pinMode(7,INPUT);
    
   pinMode(13,OUTPUT);
  Serial.begin(9600);
  
}

int boton=0;
int estadoLed=0;

int botonAnterior = 0;

void loop() 
{
       boton=digitalRead(7);

      //Serial.println(estadoLed);
     
       if(boton==1 && botonAnterior == 0)
       {
          estadoLed=1-estadoLed;
          digitalWrite(13,estadoLed);
          delay(500);
                
       }

        botonAnterior = boton;
       


}

