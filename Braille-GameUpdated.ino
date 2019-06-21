
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


const int button1 = 6; // button 1 on pin 6
const int button2 = 7; // button 2 on pin 7
const int button3 = 8; // button 3 on pin 8
const int button4 = 9; // button 4 on pin 9
const int button5 = 10;// button 5 on pin 10
const int button6 = 13;// button 6 on pin 13
const int button7 = A0;// button 7 on pin A0



long counter;    // Increase after every correct Answer
int remain = 3;   // 3 attempts to retry
int keypress = 0;     //keypress counter
int Score = 0;
boolean newChar=false;
void setup()
{

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT); // act as a Enter button to check the Combination
  //pinMode(r, INPUT);
  lcd.begin(16, 2);
  randomSeed(analogRead(A1));
  randomGenerate();  // Call random number generate function
}

void randomGenerate() {
   remain = 3; // if answer is correct reset the remain value
   delay(1000);
  counter = random(0, 26);
 
  // lcd.print(counter);
  if (counter == 0 && remain > 0)
  { lcd.print("Enter A");
  }
  if (counter == 1 && remain > 0)
  { lcd.print("Enter B");
  }
  if (counter == 2 && remain > 0)
  { lcd.print("Enter C");
  }
  if (counter == 3 && remain > 0)
  { lcd.print("Enter D");
  }
  if (counter == 4 && remain > 0)
  { lcd.print("Enter E");
  }
  if (counter == 5 && remain > 0)
  { lcd.print("Enter F");
  }
  if (counter == 6 && remain > 0)
  { lcd.print("Enter G");
  }
  if (counter == 7 && remain > 0)
  { lcd.print("Enter H");
  }
  if (counter == 8 && remain > 0)
  { lcd.print("Enter I");
  }
  if (counter == 9 && remain > 0)
  { lcd.print("Enter J");
  }
  if (counter == 10 && remain > 0)
  { lcd.print("Enter K");
  }
  if (counter == 11 && remain > 0)
  { lcd.print("Enter L");
  }
  if (counter == 12 && remain > 0)
  { lcd.print("Enter M");
  }
  if (counter == 13 && remain > 0)
  { lcd.print("Enter N");
  }
  if (counter == 14 && remain > 0)
  { lcd.print("Enter O");
  }
  if (counter == 15 && remain > 0)
  { lcd.print("Enter P");
  }
  if (counter == 16 && remain > 0)
  { lcd.print("Enter Q");
  }
  if (counter == 17 && remain > 0)
  { lcd.print("Enter R");
  }
  if (counter == 18 && remain > 0)
  { lcd.print("Enter S");
  }
  if (counter == 19 && remain > 0)
  { lcd.print("Enter T");
  }
  if (counter == 20 && remain > 0)
  { lcd.print("Enter U");
  }
  if (counter == 21 && remain > 0)
  { lcd.print("Enter V");
  }
  if (counter == 22 && remain > 0)
  { lcd.print("Enter W");
  }
  if (counter == 23 && remain > 0)
  { lcd.print("Enter X");
  }
  if (counter == 24 && remain > 0)
  { lcd.print("Enter Y");
  }
  if (counter == 25 && remain > 0)
  { lcd.print("Enter Z");
  }
newChar=true;
}

void loop() {


  if (counter == 0 && remain > 0 && newChar==true )
  {
    codeA(); // will call function codeA
  }
  if (counter == 1 && remain > 0 && newChar==true) // counter increases after every correct answer
  { // if counter change corresponding function will be called
    codeB(); // will call function codeB
  }
  if (counter == 2 && remain > 0 && newChar==true)
  {
    codeC(); // and So on......
  }
  if (counter == 3 && remain > 0 && newChar==true)
  {
    codeD();
  }
  if (counter == 4 && remain > 0 && newChar==true)
  {
    codeE();
  }
  if (counter == 5 && remain > 0 && newChar==true)
  {
    codeF();
  }
  if (counter == 6 && remain > 0 && newChar==true)
  {
    codeG();
  }
  if (counter == 7 && remain > 0 && newChar==true)
  {
    codeH();
  }
  if (counter == 8 && remain > 0 && newChar==true)
  {
    codeI();
  }
  if (counter == 9 && remain > 0 && newChar==true)
  {
    codeJ();
  }
  if (counter == 10 && remain > 0 && newChar==true)
  {
    codeK();
  }
  if (counter == 11 && remain > 0 && newChar==true)
  {
    codeL();
  }
  if (counter == 12 && remain > 0 && newChar==true)
  {
    codeM();
  }
  if (counter == 13 && remain > 0 && newChar==true)
  {
    codeN();
  }
  if (counter == 14 && remain > 0 && newChar==true)
  {
    codeO();
  }
  if (counter == 15 && remain > 0 && newChar==true)
  {
    codeP();
  }
  if (counter == 16 && remain > 0 && newChar==true)
  {
    codeQ();
  }
  if (counter == 17 && remain > 0 && newChar==true)
  {
    codeR();
  }
  if (counter == 18 && remain > 0 && newChar==true)
  {
    codeS();
  }
  if (counter == 19 && remain > 0 && newChar==true)
  {
    codeT();
  }
  if (counter == 20 && remain > 0 && newChar==true)
  {
    codeU();
  }
  if (counter == 21 && remain > 0 && newChar==true)
  {
    codeV();
  }
  if (counter == 22 && remain > 0 && newChar==true)
  {
    codeW();
  }
  if (counter == 23 && remain > 0 && newChar==true)
  {
    codeX();
  }
  if (counter == 24 && remain > 0 && newChar==true)
  {
    codeY();
  }
  if (counter == 25 && remain > 0 && newChar==true)
  {
    codeZ();
  }


}
////////////////////AAAAAAAAAAAAAA///////////////////////////////////

void codeA() {

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
     newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;

      delay(1000);
      keypress = 0; // Zero so it can be used again for B,C and so on..
      lcd.clear();
      //lcd.print(newChar);
      delay(350);
      randomGenerate(); // will call the loop funtion
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      newChar=true;
      remain--; // decrement tries after each wrong answer
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter A");
      if (remain == 0) { // no tries left.. program halt
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

        //  delay(1000)
      }
    }
  }
}
//--------------------------------------------------------------------



////////////////////BBBBBBBBBBBBBBBB///////////////////////////////////

void codeB() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
       newChar=true;
      remain--;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter B");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////CCCCCCCCCCCCC///////////////////////////////////

void codeC() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
     // lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      newChar=true;
      remain--;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter C");

      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////DDDDDDDDDDDDDDDD///////////////////////////////////

void codeD() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
       newChar=true;
      remain--;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter D");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");


      }
    }
  }
}
//--------------------------------------------------------------------

////////////////////EEEEEEEEEEEEE///////////////////////////////////

void codeE() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);

     // lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      newChar=true;
      remain--;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter E");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");
      }
    }
  }
}
//--------------------------------------------------------------------



////////////////////FFFFFFFFFFFFF///////////////////////////////////

void codeF() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      
     //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      newChar=true;
      remain--;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter F");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------




////////////////////GGGGGGGGGGGGG///////////////////////////////////

void codeG() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      newChar=true;
      remain--;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter G");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////HHHHHHHHHHHHH///////////////////////////////////

void codeH() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);

      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter H");


      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");


      }
    }
  }
}
//--------------------------------------------------------------------



////////////////////IIIIIIIIIIIII///////////////////////////////////

void codeI() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
     // lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter I");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////JJJJJJJJJJJJJ///////////////////////////////////

void codeJ() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter J");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");
      }
    }
  }
}
//--------------------------------------------------------------------



////////////////////KKKKKKKKKKKKKK///////////////////////////////////

void codeK() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter K");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------



////////////////////LLLLLLLLLLLLL///////////////////////////////////

void codeL() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
     // lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter L");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");
      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////MMMMMMMMMMMMM///////////////////////////////////

void codeM() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
     // lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    { //lcd.setCursor(0,0);
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter M");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////NNNNNNNNNNNNN///////////////////////////////////

void codeN() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter N");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------

////////////////////OOOOOOOOOOOOO///////////////////////////////////

void codeO() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter O");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////PPPPPPPPPPPPP///////////////////////////////////

void codeP() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      //code = 0;
      // locked = 0;
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter P");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////QQQQQQQQQQQQQ///////////////////////////////////

void codeQ() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

     //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter Q");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////RRRRRRRRRRRRR///////////////////////////////////

void codeR() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter R");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////SSSSSSSSSSSSS///////////////////////////////////

void codeS() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter S");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////TTTTTTTTTTTTT///////////////////////////////////

void codeT() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter T");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------



////////////////////UUUUUUUUUUUUU///////////////////////////////////

void codeU() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter U");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////VVVVVVVVVVVVV///////////////////////////////////

void codeV() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
     // lcd.setCursor(0, 13); 
     Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter V");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////WWWWWWWWWWWWW///////////////////////////////////

void codeW() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

     // remain = 3;
      randomGenerate();
    }
    else

    { //lcd.setCursor(0,0);
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter W");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------

////////////////////XXXXXXXXXXXXXXX///////////////////////////////////

void codeX() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13);
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter X");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------


////////////////////YYYYYYYYYYYYY///////////////////////////////////

void codeY() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();

      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter Y");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------

////////////////////ZZZZZZZZZZZZZ///////////////////////////////////

void codeZ() {

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
      newChar=false;
      lcd.print("Correct");
      delay(500);
      //lcd.setCursor(0, 13); 
      Score++;


      delay(1000);
      keypress = 0;
      lcd.clear();
      //lcd.print("You Win!!");
      //remain = 3;
      randomGenerate();
    }
    else

    {
      lcd.print("  wrong");
      delay(350);
      remain--;
      newChar=true;
      lcd.setCursor(0, 1);
      lcd.print("   ") ; lcd.print(remain); lcd.print(" try left");

      delay(1000);
      keypress = 0;
      lcd.clear();
      delay(350);
      lcd.print("Enter Z");
      if (remain == 0) {
        lcd.clear();
        lcd.print("Game Over");
        delay(1000);
        lcd.clear();
        lcd.print("Score = "); lcd.print(Score);
        lcd.setCursor(0, 1);
        lcd.print(" Reset to Cont.");

      }
    }
  }
}
//--------------------------------------------------------------------
