
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


const int button1 = 6; // button 1 on pin 6
const int button2 = 7; // button 2 on pin 7
const int button3 = 8; // button 3 on pin 8
const int button4 = 9; // button 4 on pin 9
const int button5 = 10;// button 5 on pin 10
const int button6 = 13;// button 6 on pin 13
const int button7 = A0;// button 7 on pin A0

int counter=0;    // Increase after every correct Answer
int remain=3;     // 3 attempts to retry
int keypress = 0;     //keypress counter


void setup()
{

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT); // act as a Enter button to check the Combination
  lcd.begin(16,2);
  lcd.print("Enter A");
}

void loop() {
  if (counter==0 && remain>0)
  {
    codeA(); // will call function codeA
  }
  if (counter==1 && remain>0) // counter increases after every correct answer
  {                           // if counter change corresponding function will be called
    codeB(); // will call function codeB
  }
  if (counter==2 && remain>0)
  {
    codeC(); // and So on......
  }
  if (counter==3 && remain>0)
  {
    codeD();
  }
  if (counter==4 && remain>0)
  {
    codeE();
  }
  if (counter==5 && remain>0)
  {
    codeF();
  }
  if (counter==6 && remain>0)
  {
    codeG();
  }
  if (counter==7 && remain>0)
  {
    codeH();
  }
  if (counter==8 && remain>0)
  {
    codeI();
  }
  if (counter==9 && remain>0)
  {
    codeJ();
  }
  if (counter==10 && remain>0)
  {
    codeK();
  }
  if (counter==11 && remain>0)
  {
    codeL();
  }
  if (counter==12 && remain>0)
  {
    codeM();
  }
  if (counter==13 && remain>0)
  {
    codeN();
  }
  if (counter==14 && remain>0)
  {
    codeO();
  }
  if (counter==15 && remain>0)
  {
    codeP();
  }
  if (counter==16 && remain>0)
  {
    codeQ();
  }
  if (counter==17 && remain>0)
  {
    codeR();
  }
  if (counter==18 && remain>0)
  {
    codeS();
  }
  if (counter==19 && remain>0)
  {
    codeT();
  }
  if (counter==20 && remain>0)
  {
    codeU();
  }
  if (counter==21 && remain>0)
  {
    codeV();
  }
  if (counter==22 && remain>0)
  {
    codeW();
  }
  if (counter==23 && remain>0)
  {
    codeX();
  }
  if (counter==24 && remain>0)
  {
    codeY();
  }
  if (counter==25 && remain>0)
  {
    codeZ();
  }
}
////////////////////AAAAAAAAAAAAAA///////////////////////////////////
void codeA(){
  
  if (digitalRead(button1) == HIGH) // will check the button input
    {
       lcd.print(" 1"); // this is for me to check if buttons are actually working
     keypress = 1; // when ever correct buttons are pressed at the same time this will initialize to 1
     
      delay(350);
     
    }

    if (digitalRead(button7) == HIGH)  // it's a check button
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500);
       lcd.setCursor(0,13);
       counter++; // if answer is correct counter increase by 1 so that void loop can move to codeB
       lcd.print(counter); lcd.print(" C");
       delay(1000);
        keypress = 0; // Zero so it can be used again for B,C and so on..
       lcd.clear();
        lcd.print("Enter B");
        remain=3; // if answer is correct reset the remain value
       loop(); // will call the loop funtion
      }
      else
        
      { 
       lcd.print("  wrong");
       delay(350);
       remain--; // decrement tries after each wrong answer
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
       keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter A");
       if (remain==0){ // no tries left.. program halt
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
         
       //  delay(1000)
        }
      }
    }
}
//--------------------------------------------------------------------



////////////////////BBBBBBBBBBBBBBBB///////////////////////////////////

void codeB(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button3) == HIGH)
    {
      lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter C");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter B");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////CCCCCCCCCCCCC///////////////////////////////////

void codeC(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500);
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter D");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter C");   
    
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
              
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////DDDDDDDDDDDDDDDD///////////////////////////////////

void codeD(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button4) == HIGH)
    {
       lcd.print(" 1");   
     keypress = 1;      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500);       
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter E");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter D");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
      
       
       }
      }
    }
}
//--------------------------------------------------------------------

////////////////////EEEEEEEEEEEEE///////////////////////////////////

void codeE(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button4) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500);  
    
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter F");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter E");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------



////////////////////FFFFFFFFFFFFF///////////////////////////////////

void codeF(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button3) == HIGH)
    {
      lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500); 
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter G");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);        
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter F");
        if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------




////////////////////GGGGGGGGGGGGG///////////////////////////////////

void codeG(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH)
    {
     lcd.print(" 1");
     keypress = 1;      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter H");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter G");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////HHHHHHHHHHHHH///////////////////////////////////

void codeH(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH)
    {
      lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter I");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter H");
       
   
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
     
       
       }
      }
    }
}
//--------------------------------------------------------------------



////////////////////IIIIIIIIIIIII///////////////////////////////////

void codeI(){
  
  if (digitalRead(button2) == HIGH && digitalRead(button3) == HIGH)
    {
     lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter J");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter I");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////JJJJJJJJJJJJJ///////////////////////////////////

void codeJ(){
  
  if (digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500); 
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter K");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter J");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       }
      }
    }
}
//--------------------------------------------------------------------



////////////////////KKKKKKKKKKKKKK///////////////////////////////////

void codeK(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button5) == HIGH )
    {
      lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter L");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter K");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------



////////////////////LLLLLLLLLLLLL///////////////////////////////////

void codeL(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button3) == HIGH && digitalRead(button5) == HIGH )
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter M");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter L");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////MMMMMMMMMMMMM///////////////////////////////////

void codeM(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button5) == HIGH )
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500); 
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter N");
        remain=3;
       loop();
      }
      else
        
      { //lcd.setCursor(0,0);
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter M");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////NNNNNNNNNNNNN///////////////////////////////////

void codeN(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button4) == HIGH && digitalRead(button5) == HIGH )
    {
     lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter O");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter N");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------

////////////////////OOOOOOOOOOOOO///////////////////////////////////

void codeO(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button4) == HIGH && digitalRead(button5) == HIGH)
    {
      lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter P");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter O");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////PPPPPPPPPPPPP///////////////////////////////////

void codeP(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button5) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { //locked = 1;
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter Q");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        //code = 0;
       // locked = 0;
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter P");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////QQQQQQQQQQQQQ///////////////////////////////////

void codeQ(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH && digitalRead(button5) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500); 
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter R");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);      
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter Q");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////RRRRRRRRRRRRR///////////////////////////////////

void codeR(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH && digitalRead(button5) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter S");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter R");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////SSSSSSSSSSSSS///////////////////////////////////

void codeS(){
  
  if (digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button5) == HIGH)
    {
  lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter T");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter S");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////TTTTTTTTTTTTT///////////////////////////////////

void codeT(){
  
  if (digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH && digitalRead(button5) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter U");
        remain=3;
       loop();
      }
      else
        
      {
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter T");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------



////////////////////UUUUUUUUUUUUU///////////////////////////////////

void codeU(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button5) == HIGH && digitalRead(button6) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      {
      lcd.print("Correct");
       delay(500); 
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter V");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter U");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////VVVVVVVVVVVVV///////////////////////////////////

void codeV(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button3) == HIGH && digitalRead(button5) == HIGH && digitalRead(button6) == HIGH)
    {
      lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter W");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter V");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////WWWWWWWWWWWWW///////////////////////////////////

void codeW(){
  
  if (digitalRead(button2) == HIGH && digitalRead(button3) == HIGH && digitalRead(button4) == HIGH && digitalRead(button6) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter X");
        remain=3;
       loop();
      }
      else
        
      { //lcd.setCursor(0,0);
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter W");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------

////////////////////XXXXXXXXXXXXXXX///////////////////////////////////

void codeX(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button5) == HIGH && digitalRead(button6) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter Y");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter X");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------


////////////////////YYYYYYYYYYYYY///////////////////////////////////

void codeY(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH && digitalRead(button4) == HIGH && digitalRead(button5) == HIGH && digitalRead(button6) == HIGH)
    {
      lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("Enter Z");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter Y");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------

////////////////////ZZZZZZZZZZZZZ///////////////////////////////////

void codeZ(){
  
  if (digitalRead(button1) == HIGH && digitalRead(button4) == HIGH && digitalRead(button5) == HIGH && digitalRead(button6) == HIGH)
    {
       lcd.print(" 1");
     keypress = 1;
      
      delay(350);
    }

    if (digitalRead(button7) == HIGH)// its check button;
    {
      if ( keypress == 1)
      { 
      lcd.print("Correct");
       delay(500);  
       lcd.setCursor(0,13);
       counter++;
       lcd.print(counter); lcd.print("C");
       delay(1000);
        keypress = 0;
       lcd.clear();
        lcd.print("You Win!!");
        remain=3;
       loop();
      }
      else
        
      { 
        lcd.print("  wrong");
       delay(350);
       remain--;
       lcd.setCursor(0,1);
       lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");
       
       delay(1000);
        keypress = 0;
       lcd.clear();
       delay(350);
       lcd.print("Enter Z");
       if (remain==0){
         lcd.clear();
         lcd.print("Game Over");
         lcd.setCursor(0,1);
         lcd.print(" Reset to Cont.");
       
       }
      }
    }
}
//--------------------------------------------------------------------
