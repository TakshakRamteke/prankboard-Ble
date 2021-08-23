## Prankboard-BLE (ESP32) 😜

#### This is a implementation of the BleKeyboard Library for esp32 by [T-vk](https://github.com/T-vK) to trool and have fun with your friends. 

#### The entire library and features can be found [here](https://github.com/T-vK/ESP32-BLE-Keyboard).

## What it does ?

As Most of the mordern android smartphone now a days support a keyboard (both wireless and wired) which is a HID (Human Interface device), With the help of the BleKeyboard library we can turn a esp32 into a HID device *keyboard in our case* which can be then used to send keystrokes to the device conneted to the bluetooth of the board. In our case we use this functionality of the library to send certain keystroke to the connected phone which forces it to reboot (switchoff in some cases) as long as the device stays connected to the board.

Note : A library for Bluetooth Mouse Implementation can be found [here](https://github.com/T-vK/ESP32-BLE-Mouse) if you want to use that.

## How it Does this ?

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
