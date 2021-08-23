## Prankboard-BLE (ESP32)

### This is a implementation of the BleKeyboard Library for esp32 by [T-vk](https://github.com/T-vK). The entire library and features can be found [here](https://github.com/T-vK/ESP32-BLE-Keyboard).

## What it does ?

As Most of the mordern android smartphone now a days support a keyboard (both wireless and wired) which is a HID (Human Interface device), With the help of the BleKeyboard library we can turn a esp32/esp8266 into a HID device *keyboard in our case* which can be then used to send keystrokes to the device conneted to the bluetooth of the board. In our case we use this functionality of the library to send certain keystroke to the connected phone which forces it to reboot (switchoff in some cases) as long as the device stays connected to the board.

``` Note : A library for Blemouse can be found [here](https://github.com/T-vK/ESP32-BLE-Mouse) if you want to use that. ```

