[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Smart-Green-House-Berbasis-IoT-Mobile-Apps)
![Project](https://img.shields.io/badge/Project-STM32-%2Dbased%20BTRC%20Car%20Robot-light.svg?style=flat&logo=github&logoColor=white&color=%23F7DF1E)

# STM32-based-Bluetooth-Radio-Control-Car-Robot
<strong>Solo Project STM32-based BTRC Car Robot</strong><br><br>
In operation, this robot car requires a battery as its power supply. Then the user can control its movement by using a bluetooth signal. If the receiver is close to the transmitter, the signal generated will be stronger, while on the contrary, the signal generated will be weaker.

<br><br>

## Features / Framework / Tools
| Media | Description |
| --- | --- |
| Board Development | STM32F103C8T6 |
| Code Editor | Arduino IDE |
| Driver | USB-Serial CP210X |
| Arduino Library | PROCESS... |
| Actuators | Gear Motor / Motor DC |
| Sensor | SPP-C Bluetooth Module |
| Other Components | FTDI USB To TTL Serial, Jumper cable, Li-ion battery 4800mAh 3.7V 18650 (x2), Parallel battery holder, Robot wheels (x2), Motor driver L298N, Car robot skeleton, ETC |

<br><br>

## Download & Install
1. Arduino IDE

   ```
   https://www.arduino.cc/en/software
   ```
<br>

2. USB-Serial CP210X

   ```
   https://bit.ly/CP210X_Driver
   ```
   
<br><br>

## Project Requirements
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="" alt="Block-Diagram"></td>
<td><img src="" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img src="" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Arduino IDE Setup
1. Open the ``` Arduino IDE ``` first, then open the project by clicking: ``` File ``` -> ``` Open ``` -> ``` stm32_btrc_car_robot.ino ```.<br><br>
   
2. Fill in the ``` Additional Board Manager URLs ``` in Arduino IDE<br><br>
   • Method: click ``` File ``` -> ``` Preferences ``` -> enter the ``` Boards Manager Url ``` by copying the following link:
   
   ```
   https://github.com/stm32duino/BoardManagerFiles/raw/master/STM32/package_stm_index.json
   ```
   
3. ``` Board Setup ``` in Arduino IDE<br><br>
   • Method: click ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Install ``` STM32 Cores ```. Then selecting a Board by clicking: ``` Tools ``` -> ``` Board ``` -> ``` STM32 Boards ``` -> ``` Generic STM32F1 series ```.<br><br>
   
4. ``` Change Board Part Number ``` in Arduino IDE<br><br>
   • Method: click ``` Tools ``` -> ``` Board part number ``` -> ``` Blue Pill F103C8 ```.<br><br>
   
5. ``` Change U(S)ART Support ``` in Arduino IDE<br><br>
   • Method: click ``` Tools ``` -> ``` U(S)ART Support ``` -> ``` Enabled (generic 'Serial') ```.<br><br>

6. ``` Change Upload Method ``` in Arduino IDE<br><br>
   • Method: click ``` Tools ``` -> ``` Upload method ``` -> ``` STM32CubeProgrammer (Serial) ```.<br><br>
   
7. ``` Install Library ``` in Arduino IDE<br><br>
   • Method: download all the library zip files. Then paste it in the: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```.<br><br>

8. ``` Port Setup ``` in Arduino IDE<br><br>
   • Method: click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```.<br><br>

9. Before uploading the program, make sure the jumper positions ``` BOOT0 ``` is in the ``` 0 ``` position and ``` BOOT1 ``` is in the ``` 1 ``` position then press the ``` Reset ``` button.<br><br>

10. Please click: ``` Upload ```.

<br><br>
