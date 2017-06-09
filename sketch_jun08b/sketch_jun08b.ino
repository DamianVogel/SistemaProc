#include <LiquidCrystal.h>
 LiquidCrystal lcd(8,9,4,5,6,7);

 //segundos
 int i=0;
 
 //bandera segundos
 int u=0;
 
 //minutos
 int y=0;
 
 //bandera minutos
 int t=0;




void setup() {
  //LiquidCrystal lcd(8,9,4,5,6,7);

  lcd.begin(16,2);

  lcd.setCursor(2,0); // 1º posicion de columna - 2º posicion de fila 

  lcd.print("Cronometro");

  lcd.setCursor(2,1);
  lcd.print("00:00:00");

 
}

void loop() {

  if(u==1 )
    {
      lcd.setCursor(8,1);
      lcd.print("0");
      i=0;
      u=0;
    } 

if(t==1)
{
      lcd.setCursor(5,1);
      lcd.print("0");
      y=0;
      t=0;
  
 }
     
      
      
      if(i<10)
      {
      lcd.setCursor(9,1);      
      lcd.print(i);
      i++;
      delay(10);
      }
           
      if(i>=10 && i<=59)
      {
        lcd.setCursor(8,1);      
        lcd.print(i);
        i++;
        delay(10);  

        if(i==60)
        {
          u=1;
          
        }

//minutos unidad
              if(y<10)
                {
                  lcd.setCursor(6,1);      
                  
                  lcd.print(y);
                  y++;
                
                  delay(10);
                        
                } 
          
//minutos decena          
          if(y>=10 && y<=59)
            {
              lcd.setCursor(5,1);      
              lcd.print(y);
              y++;
              delay(10);
            }
                   if(y==60)
                  {
                  lcd.setCursor(4,1);
                  lcd.print("0");
                  t=1;
                  }
      
      }
    
    
    }




