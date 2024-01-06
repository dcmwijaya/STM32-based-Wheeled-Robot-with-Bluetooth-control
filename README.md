[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Smart-Green-House-Berbasis-IoT-Mobile-Apps)
![Project](https://img.shields.io/badge/Project-STM32-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

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
| Programming Language | C/C++ |
| Arduino Library | PROCESS... |
| Actuators | Gear Motor / Motor DC (x2) |
| Sensor | SPP-C Bluetooth Module (x1) |
| Other Components | FTDI USB To TTL Serial (x1), Micro usb cable (x1), Jumper cable, Li-ion battery 4800mAh 3.7V 18650 (x2), 2-Slot series battery holder (x1), Robot wheels (x2), Caster wheel (x1), Motor driver L298N (x1), Car robot frame (x1), ETC |

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
<br>

3. STM32CubeProgrammer
   
   ```
   https://bit.ly/STM32_Cube_Programmer
   ```
   
<br><br>

## Project Requirements
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/85978010-4eb6-4a6b-ad12-c6c0dd551e97" alt="Block-Diagram"></td>
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

9. Please click: ``` Upload ```.

<br><br>

## Boot Mode Setup on the STM32 board :
1. ``` Programming Mode ``` :
   
   • Make sure you haven't uploaded the program.
   
   • Make sure the jumper position ``` BOOT0 ``` is at position ``` 1 ```.
   
   • Make sure the jumper position ``` BOOT1 ``` is at position ``` 0 ```.

   • Connect this STM32F103C8T6 board to FTDI -> then from FTDI connect to your PC/Laptop.
      
      <img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/c56bc347-0178-4576-b537-13208a8e7346" alt="FTDI-Wiring">
   
   • Press the ``` RESET ``` button.
   
   • Compile and upload your program through a code editor, in this case the ``` Arduino IDE ```.<br><br><br>
   
3. ``` Operational Mode ``` :
   
   • Make sure to upload the program.

   • Remove the FTDI from the device.
   
   • Make sure the jumper position ``` BOOT0 ``` is at position ``` 0 ```.
   
   • Make sure the jumper position ``` BOOT1 ``` is at position ``` 0 ```.
   
   • Press the ``` RESET ``` button.

   • The program code is ready to operate, in which case there is no programming activity.

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
   
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
   
4. If you don't apply points 2 and 3 for project development purposes, that's fine, but be aware that some things need to be changed according to your needs for the system to work properly.<br><br>

5. Please enjoy [Done].

<br><br>

## Highlights
Coming Soon....

<br><br>

## Disclaimer
This application has been created by including third-party sources. Third parties here are service providers, whose services are in the form of libraries, frameworks, and others. I thank you very much for the service. It has proven to be very helpful and implementable.

<br><br>

## LICENSE
MIT License - Copyright (c) 2023 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.
