[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Smart-Green-House-Berbasis-IoT-Mobile-Apps)
![Project](https://img.shields.io/badge/Project-STM32-%2Dbased%20BTRC%20Car%20Robot-light.svg?style=flat&logo=github&logoColor=white&color=%23F7DF1E)

# STM32-based-Bluetooth-Radio-Control-Car-Robot
<strong>Proyek Tunggal Robot Mobil BTRC berbasis STM32</strong><br><br>
Dalam pengoperasiannya, mobil robot ini membutuhkan baterai sebagai catu dayanya. Kemudian pengguna dapat mengontrol pergerakannya dengan menggunakan sinyal bluetooth. Jika penerima dekat dengan pemancar, maka sinyal yang dihasilkan akan semakin kuat, sedangkan sebaliknya, sinyal yang dihasilkan akan semakin lemah.

<br><br>

## Fitur / Kerangka Kerja / Alat
| Media | Deskripsi |
| --- | --- |
| Papan Pengembangan | STM32F103C8T6 |
| Editor Kode | Arduino IDE |
| Driver | USB-Serial CP210X |
| Pustaka Arduino | PROSES... |
| Aktuator | Motor Gear / Motor DC |
| Sensor | Modul Bluetooth SPP-C |
| Komponen Lainnya | FTDI USB Ke Serial TLL, Kabel Jumper, Baterai Li-ion 4800mAh 3.7V 18650 (x2), Tempat baterai pararel, Roda robot (x2), Motor driver L298N, Kerangka robot mobil, DLL |

<br><br>

## Unduh & Instal
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

## Persyaratan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="" alt="Block-Diagram"></td>
<td><img src="" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img src="" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek Wemos D1 R2 Radar dengan cara klik: ``` File ``` -> ``` Open ``` -> ``` stm32_btrc_car_robot.ino ```.<br><br>
   
2. Isi ``` Url Pengelola Papan Tambahan ``` di Arduino IDE<br><br>
   • Cara: klik ``` File ``` -> ``` Preferences ``` -> masukkan ``` Boards Manager Url ``` dengan menyalin tautan berikut:
   
   ```
   https://github.com/stm32duino/BoardManagerFiles/raw/master/STM32/package_stm_index.json
   ```
   
3. ``` Pengaturan Board ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Instal ``` STM32 Cores ```. Kemudian pilih Board dengan mengklik: ``` Tools ``` -> ``` Board ``` -> ``` STM32 Boards ``` -> ``` Generic STM32F1 series ```.
   <br><br>
   
4. ``` Ubah Nomor Bagian Papan ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` Board part number ``` -> ``` Blue Pill F103C8 ```.
   <br><br>
   
5. ``` Ubah Dukungan U(S)ART ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` U(S)ART Support ``` -> ``` Enabled (generic 'Serial') ```.
   <br><br>

6. ``` Ubah Metode Pengunggahan ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` Upload method ``` -> ``` STM32CubeProgrammer (Serial) ```.
   <br><br>
   
7. ``` Instal Pustaka ``` di Arduino IDE<br><br>
   • Cara: unduh semua file zip pustaka. Kemudian tempelkan di: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```.
   <br><br>

8. ``` Pengaturan Port ``` di Arduino IDE<br><br>
   • Cara: klik ``` Port ``` -> Pilih sesuai dengan port perangkat Anda ``` (Anda dapat melihatnya di Device Manager) ```.
   <br><br>

9. Sebelum mengunggah program, pastikan posisi jumper ``` BOOT0 ``` pada posisi ``` 0 ``` dan ``` BOOT1 ``` pada posisi ``` 1 ``` kemudian tekan tombol ``` RESET ```.<br><br>

10. Silakan klik: ``` Upload ```.

<br><br>
