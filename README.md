# Prankboard-BLE (ESP32) ⌨

```This is a implementation of the BleKeyboard Library for esp32 by [T-vk](https://github.com/T-vK) to trool and have fun with your friends. The entire library and features can be found [here](https://github.com/T-vK/ESP32-BLE-Keyboard).```

### What it does ? 😕

As Most of the mordern android smartphone now a days support a keyboard (both wireless and wired) which is a HID (Human Interface device), With the help of the BleKeyboard library we can turn a esp32 into a HID device *keyboard in our case* which can be then used to send keystrokes to the device conneted to the bluetooth of the board. In our case we use this functionality of the library to send certain keystroke to the connected phone which forces it to reboot (switchoff in some cases) as long as the device stays connected to the board.

Note : A library for Bluetooth Mouse Implementation can be found [here](https://github.com/T-vK/ESP32-BLE-Mouse) if you want to use that.

### How Does it work ? ⚙

The most simple way of rebooting a mordern android smartphone is holding down CTRl+ALT+DEL keys for at least a sec and then letting them go. So in order to reboot a android smartphone we just need to accomplish the same but just using our esp32 board which is fairly simple while using the BleKeyboard library.

To do this in code at **line no. 9** in our code we start the bluetooth keyboard with the following line of code ```bleKeyboard.begin();```.

Then in loop section of our code between line 20 to 22 we specify the sequence of keys to be pressed using the followin syntax :
```c++
  bleKeyboard.press(KEY_LEFT_CTRL); 
  bleKeyboard.press(KEY_LEFT_ALT); 
  bleKeyboard.press(KEY_DELETE); 
  delay(500);
  bleKeyboard.releaseAll();
```
and then at **line 23** we call the ```delay()``` function to add a delay of 500 miliseconds i.e. equal to 5 sec before we call the ```releaseAll()``` function at **line 24** to release the keys.

### Setup 🚀

- step 1 : Download the BleKeyboard library for ESP32 from [here](https://github.com/T-vK/ESP32-BLE-Keyboard)
- step 2 : Open the Arduino IDE and navigate to sketch -> Include Library -> Add .zip -> Then select the zip file you just downloaded and your library will be installed.
- step 3 : Download this code and unzip it after unziping it open the .ino file in arduino IDE.
- step 4 : connect your esp32 board then from tools select the correct board type (e.g. Nodemcu-32S in my case) select the port to which your board is attached and then hit the falsh button and whoopee your board is ready for prank.

Now just ask the friend you want to annoy to connect to the bluetooth by the board and the board will do the rest itself.

Note : The above steps are true assuming you already have the esp boards installed on your IDE. If you dont have them installed you can follow [this](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/) simple guide to do so

**If you encounter any issues please feel free to open an issue [here](https://github.com/TakshakRamteke/prankboard-Ble/issues) so we can discuss it out.**
