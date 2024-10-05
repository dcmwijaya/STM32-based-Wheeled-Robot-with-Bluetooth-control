[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/dcmwijaya/STM32-based-Wheeled-Robot-with-Bluetooth-control?logo=Codeforces&logoColor=white&color=%23F7DF1E)
![Project](https://img.shields.io/badge/Project-STM32-light.svg?style=flat&logo=STMicroelectronics&logoColor=white&color=%23F7DF1E)
![Type](https://img.shields.io/badge/Type-Personal%20Experiment-light.svg?style=flat&logo=gitbook&logoColor=white&color=%23F7DF1E)

# STM32-based-Wheeled-Robot-with-Bluetooth-control
Robots are tools that can ease the burden on humans. Robots can be controlled by humans directly, but actually robots can also make their own decisions if given an intelligent algorithm. The type of robot that is often used in school activities is a wheeled robot. A wheeled robot is a robot that moves by using wheels. This project was made basically to provide education to the wider community on how to make a simple wheeled robot. This project has been implemented and took approximately 3 days. UART communication protocol is used as a medium for data exchange between Bluetooth and STM32 board. While the type of UART used is Hardware Serial. The benefit of making this project is none other than to add insight. The results of this study show that the robot can move according to user commands.

<br><br>

## Project Requirements
| Part | Description |
| --- | --- |
| Development Board | STM32F103C8T6 |
| Code Editor | Arduino IDE |
| Programmer Tools | FTDI USB |
| Driver | CDM FTDI USB Driver |
| Communications Protocol | Universal Asynchronous Receiver-Transmitter (UART) |
| IoT Architecture | 3 Layer |
| Application Support | • STM32CubeProgrammer<br>• Bluetooth RC Controller |
| Programming Language | C/C++ |
| Actuators | Gear Motor / Motor DC (x2) |
| Sensor | JDY-31 SPP-C: Bluetooth Module (x1) |
| Other Components | • Mini USB cable - USB type A (x1)<br>• Micro USB cable - 2 pin JST (x1)<br>• Jumper cable (1 set)<br>• KCD11: Rocker Switch SPST (x1)<br>• Li-ion battery 18650 (x2)<br>• 2-Slot series battery holder (x1)<br>• Robot wheels (x2)<br>• Caster wheel (x1)<br>• Motor driver L298N (x1)<br>• Car robot frame (x1)<br>• Spicer bolts (1 set)<br>• Bolts plus (1 set)<br>• Nuts (1 set) |

<br><br>

## Download & Install
1. Arduino IDE

   <table><tr><td width="810">
         
   ```
   https://bit.ly/ArduinoIDE_Installer
   ```

   </td></tr></table><br>

2. CDM FTDI USB Driver

   <table><tr><td width="810">

   ```
   https://bit.ly/CDM_FTDI_USB_Driver
   ```

   </td></tr></table><br>

3. STM32CubeProgrammer

   <table><tr><td width="810">
   
   ```
   https://bit.ly/STM32_Cube_Programmer_Installer
   ```

   </td></tr></table>
   
<br><br>

## Project Designs
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Diagram/Block Diagram.jpg" alt="block-diagram"></td>
<td><img src="Assets/Documentation/Diagram/Pictorial Diagram.jpg" alt="pictorial-diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img src="Assets/Documentation/Table/Device Wiring.jpg" alt="wiring"></td>
</tr>
</table>

<br><br>

## Basic Knowledge
Basically, a device can be communicated with other devices either wirelessly or by cable. Communication between commonly used hardware is ``` Serial Communication ```. It can be known that there are three types of ``` Serial Communication ```, which include: ``` UART (Universal Asynchronous Receiver-Transmitter) ```, ``` SPI (Serial Peripheral Interface) ```, and ``` I2C (Inter Integrated Circuit) ```. There are two kinds of ``` UART Serial Communication ```, namely ``` Hardware Serial ``` and ``` Software Serial ```. ``` Hardware serial communication ``` can be done by connecting the ``` TX ``` and ``` RX ``` pins ``` crosswise ``` on each development board, for example: ``` RX-TX ```, then ``` TX-RX ```. The ``` TX ``` pin is for ``` sending data ```, while the ``` RX ``` pin is for ``` receiving data ```. ``` Serial Software Communication ``` is more or less the same as ``` Serial Hardware Communication ``` in terms of cabling, but there are differences in terms of coding. By using this ``` Serial Software ``` you can overcome the constraints of the limitations of ``` RX ``` and ``` TX ``` pins on the development board. To communicate with this ``` Serial Software ``` is quite easy, namely by using certain ``` Digital Pins ``` as a ``` substitute for TX pins and RX pins ```.

<br><br>

## Arduino IDE Setup
1. Open the ``` Arduino IDE ``` first, then open this project by clicking ``` File ``` -> ``` Open ``` :

   <table><tr><td width="810">
      
      ``` stm32_btrobot.ino ```

   </td></tr></table><br>
   
2. Fill in the ``` Additional Board Manager URLs ``` in Arduino IDE

   <table><tr><td width="810">
         
      Click ``` File ``` -> ``` Preferences ``` -> enter the ``` Boards Manager Url ``` by copying the following link :
      
      ```
      https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json
      ```

   </td></tr></table><br>
   
3. ``` Board Setup ``` in Arduino IDE

   <table>
      <tr><th width="810">

      How to setup the ``` STM32F103C8T6 ``` board
            
      </th></tr>
      <tr><td>
         
      • Click ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Install ``` STM32 MCU based boards ```.

      • Then click ``` Tools ``` -> ``` Board ``` -> ``` STM32 boards groups ``` -> ``` Generic STM32F1 series ```.

      </td></tr>
   </table><br>
   
4. ``` Change Board Part Number ``` in Arduino IDE

   <table><tr><td width="810">
         
      Click ``` Tools ``` -> ``` Board part number ``` -> ``` BluePill F103C8 ```

   </td></tr></table><br>
   
5. ``` Change U(S)ART Support ``` in Arduino IDE

   <table><tr><td width="810">
         
      Click ``` Tools ``` -> ``` U(S)ART Support ``` -> ``` Enabled (generic 'Serial') ```

   </td></tr></table><br>

6. ``` Change Upload Method ``` in Arduino IDE

   <table><tr><td width="810">
         
      Click ``` Tools ``` -> ``` Upload method ``` -> ``` STM32CubeProgrammer (Serial) ```

   </td></tr></table><br>
   
7. ``` Port Setup ``` in Arduino IDE

   <table><tr><td width="810">
         
      Click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```

   </td></tr></table><br>

8. Before uploading the program please click: ``` Verify ```.<br><br>

9. If there is no error in the program code, the next step is to use the ``` STM32 ``` programming tool according to the procedure. Then click: ``` Upload ```.<br><br>

10. If there is still a problem when uploading the program, then try checking the ``` driver ``` / ``` port ``` / ``` programmer tool ``` / ``` others ``` section.

<br><br>

## FTDI USB Setup
1. ``` Programming Mode ``` :
      
   • Make sure you haven't uploaded the program.
   
   • Make sure the ``` BOOT0 jumper ``` position on the ``` STM32F1 ``` is at position ``` 1 ```.
   
   • Make sure the ``` BOOT1 jumper ``` position on the ``` STM32F1 ``` is at position ``` 0 ```.
   
   • Make sure the ``` Vout jumper ``` position on the ``` FTDI ``` is at position ``` 3.3V ```.

   • Connect this ``` STM32F103C8T6 board ``` to ``` FTDI ```.
      
      <img width="810" src="Assets/Documentation/STM32-Mode/Programming Mode.jpg" alt="programming-mode">

   • Then connect the ``` FTDI ``` to your ``` PC/Laptop ``` with a ``` Mini USB - USB type A ``` cable.

   • Press the ``` Reset ``` button so that all programs embedded in this ``` STM32 board ``` become clean (ready to be reprogrammed).
   
   • Compile and upload your program through a code editor, in this case the ``` Arduino IDE ```.<br><br><br>
   
2. ``` Operating Mode ``` :
   
   • Make sure to upload the program.

   • Remove the ``` FTDI ``` from the device.
   
   • Make sure the ``` BOOT0 & BOOT1 jumper ``` position on the ``` STM32F1 ``` is at position ``` 0 ```.
      
      <img width="810" src="Assets/Documentation/STM32-Mode/Operating Mode.jpg" alt="operating-mode">
   
   • The program code that has been embedded in this ``` STM32 board ``` is ready for operation (no more programming activities).

   • To power up this ``` STM32F1 board ```, you can use an external power supply such as a battery or something else.<br><br><br>

<strong>Notes :</strong>

<table><tr><td width="840">
   
   • To upload programs, in addition to using the ``` FTDI USB ```, you can also use other programmers such as: ``` ST-Link/V2 ```, ``` CP2102 USB ```, ``` CH340 USB ```, or with ``` PL2303 USB ```.

   • Based on experience, I admit that using the ``` ST-Link/V2 ``` is much better than other programmers because it is known to be more stable in performance. ``` ST-Link/V2 ``` also has the disadvantage that it can only be used on ``` STM32 ``` and ``` STM8 ``` boards.

</td></tr></table>

<br><br>

## Bluetooth RC Controller Setup
1. Go to ``` Assets/APK ``` directory to get the app called ``` Bluetooth RC Controller ``` -> then install the app on your gadget.
   
2. Open ``` Bluetooth RC Controller ``` app.
   
3. Turn on ``` bluetooth ```. 
   
4. Click ``` gear ``` button -> select ``` Connect to car ```.
   
5. Click ``` Scan for devices ``` button -> select ``` JDY-31-SPP ```.

6. Then ``` pairing device ``` by entering the password: ``` 0000 ``` or ``` 1234 ```.
  
7. The user interface is ready to use. This is as seen in the following image.

   <img width="810" src="Assets/Documentation/Experiment/Bluetooth RC Controller.jpg" alt="user-interface">

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
   
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
   
4. Configure your device according to the settings above.<br><br>

5. Please enjoy [Done].

<br><br>

## Highlights
<img width="840" src="Assets/Documentation/Experiment/Device.jpg" alt="rc-car-robot">

<br><br>

## Appreciation
If this work is useful to you, then support this work as a form of appreciation to the author by clicking the ``` ⭐Star ``` button at the top of the repository.

<br><br>

## LICENSE
MIT License - Copyright © 2023 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.
