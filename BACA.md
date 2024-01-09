[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Smart-Green-House-Berbasis-IoT-Mobile-Apps)
![Project](https://img.shields.io/badge/Project-STM32-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# STM32-based-Bluetooth-Radio-Control-Car-Robot
<strong>Proyek Tunggal Robot Mobil BTRC berbasis STM32</strong><br><br>
Dalam pengoperasiannya, mobil robot ini membutuhkan baterai sebagai catu dayanya. Kemudian pengguna dapat mengontrol pergerakannya dengan menggunakan sinyal bluetooth. Jika penerima dekat dengan pemancar, maka sinyal yang dihasilkan akan semakin kuat, sedangkan sebaliknya, sinyal yang dihasilkan akan semakin lemah.

<br><br>

## Fitur / Kerangka Kerja / Alat
| Media | Deskripsi |
| --- | --- |
| Papan Pengembangan | STM32F103C8T6 |
| Editor Kode | Arduino IDE |
| Driver | USB-Serial CDM |
| Bahasa Pemrograman | C/C++ |
| Pustaka Arduino | PROSES... |
| Aktuator | Motor Gear / Motor DC (x2) |
| Sensor | Modul Bluetooth SPP-C (x1) |
| Komponen Lainnya | FTDI FT232RL: USB Ke Serial TTL (x1), Kabel mini USB tipe-B (x1), Kabel jumper, Baterai Li-ion 4800mAh 3.7V 18650 (x2), Tempat baterai seri 2 slot (x1), Roda robot (x2), Roda kastor (x1), Motor driver L298N (x1), Kerangka robot mobil (x1), DLL |

<br><br>

## Unduh & Instal
1. Arduino IDE

   ```
   https://www.arduino.cc/en/software
   ```
<br>

2. USB-Serial CDM

   ```
   https://bit.ly/CDM_Driver
   ```
<br>

3. STM32CubeProgrammer
   
   ```
   https://bit.ly/STM32_Cube_Programmer
   ```
   
<br><br>

## Persyaratan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/85978010-4eb6-4a6b-ad12-c6c0dd551e97" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/b80333b3-53db-4bf4-9489-24b64bddaf70" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/952f4338-b9ff-4359-959e-582220b58809" alt="Wiring"></td>
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
   • Cara: klik ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Instal ``` STM32 Cores ```. Kemudian pilih Board dengan mengklik: ``` Tools ``` -> ``` Board ``` -> ``` STM32 Boards ``` -> ``` Generic STM32F1 series ```.<br><br>
   
4. ``` Ubah Nomor Bagian Papan ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` Board part number ``` -> ``` Blue Pill F103C8 ```.<br><br>
   
5. ``` Ubah Dukungan U(S)ART ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` U(S)ART Support ``` -> ``` Enabled (generic 'Serial') ```.<br><br>

6. ``` Ubah Metode Pengunggahan ``` di Arduino IDE<br><br>
   • Cara: klik ``` Tools ``` -> ``` Upload method ``` -> ``` STM32CubeProgrammer (Serial) ```.<br><br>
   
7. ``` Instal Pustaka ``` di Arduino IDE<br><br>
   • Cara: unduh semua file zip pustaka. Kemudian tempelkan di: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```.<br><br>

8. ``` Pengaturan Port ``` di Arduino IDE<br><br>
   • Cara: klik ``` Port ``` -> Pilih sesuai dengan port perangkat Anda ``` (Anda dapat melihatnya di Device Manager) ```.<br><br>

9. Silakan klik: ``` Upload ```.

<br><br>

## Pengaturan Mode Boot pada board STM32 :
1. ``` Mode Pemrograman ``` :
   
   • Pastikan belum mengunggah program.
   
   • Pastikan posisi jumper ``` BOOT0 ``` pada posisi ``` 1 ```.
   
   • Pastikan posisi jumper ``` BOOT1 ``` pada posisi ``` 0 ```.

   • Sambungkan board STM32F103C8T6 ini ke FTDI -> lalu dari FTDI sambungkan ke PC/Laptop Anda.
      
      <img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/c98d7919-615d-4ab4-ac90-44a755fc9fb6" alt="programming-mode">
   
   • Tekan tombol ``` RESET ```.

   • Kompilasi dan unggah program anda melalui editor kode, dalam hal ini ``` Arduino IDE ```.<br><br><br>
   
3. ``` Mode Pengoperasian ``` :
   
   • Pastikan telah mengunggah program.

   • Lepaskan FTDI dari perangkat.
   
   • Pastikan posisi jumper ``` BOOT0 ``` dan ``` BOOT1 ``` pada posisi ``` 0 ```.
      
      <img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/98da8ef3-58e3-4392-a357-ae826265a036" alt="operating-mode">
   
   • Tekan tombol ``` RESET ```.

   • Kode program siap dioperasikan, dalam hal ini sudah tidak ada aktivitas pemrograman.

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>
   
2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
    
4. Jika Anda tidak menerapkan poin 2 dan 3 untuk tujuan pengembangan proyek, tidak masalah, tetapi perlu diketahui bahwa beberapa hal perlu diubah sesuai dengan kebutuhan Anda agar sistem dapat bekerja dengan baik.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
Segera hadir....

<br><br>

## Penafian
Aplikasi ini dibuat dengan menyertakan sumber-sumber dari pihak ketiga. Pihak ketiga di sini adalah penyedia layanan, yang layanannya berupa pustaka, kerangka kerja, dan lain-lain. Saya ucapkan terima kasih banyak atas layanannya. Telah terbukti sangat membantu dan dapat diimplementasikan.

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta (c) 2023 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
