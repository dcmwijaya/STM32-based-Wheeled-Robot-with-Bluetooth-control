[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/STM32-based-Wheeled-Robot-with-Bluetooth-control)
![Project](https://img.shields.io/badge/Project-Internet%20of%20Things-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# STM32-based-Wheeled-Robot-with-Bluetooth-control
<strong>Proyek Tunggal: Robot Beroda dengan kendali Bluetooth berbasis STM32</strong><br><br>
Robot adalah alat yang mampu meringankan beban manusia. Robot dapat dikendalikan oleh manusia secara langsung, namun sebenarnya robot juga dapat mengambil keputusannya sendiri jika diberi algoritma cerdas. Jenis robot yang sering dipakai dalam kegiatan sekolah yaitu robot beroda. Robot beroda adalah robot yang bergerak dengan menggunakan roda. Proyek ini dibuat pada dasarnya untuk memberikan edukasi kepada masyarakat luas tentang bagaimana cara membuat robot beroda yang sederhana. Proyek ini telah dilaksanakan dan memakan waktu kurang lebih 3 hari. Protokol komunikasi UART digunakan sebagai media untuk pertukaran data antara Bluetooth dengan board STM32. Sedangkan jenis UART yang dipakai berupa Hardware Serial. Manfaat dari pembuatan proyek ini tidak lain adalah untuk menambah wawasan. Hasil dari penelitian ini menunjukkan bahwa robot dapat bergerak sesuai dengan perintah pengguna.

<br><br>

## Kebutuhan Proyek
| Bagian | Deskripsi |
| --- | --- |
| Papan Pengembangan | STM32F103C8T6 |
| Editor Kode | Arduino IDE |
| Alat Pemrogram | FTDI FT232RL |
| Driver | USB-Serial CDM |
| Protokol Komunikasi | Universal Asynchronous Receiver-Transmitter (UART) |
| Arsitektur IoT | 3 Lapisan |
| Dukungan Aplikasi | • STM32CubeProgrammer<br>• Bluetooth RC Controller |
| Bahasa Pemrograman | C/C++ |
| Aktuator | Motor Gear / Motor DC (x2) |
| Sensor | JDY-31 SPP-C: Modul Bluetooth (x1) |
| Komponen Lainnya | • Kabel Mini USB - USB tipe A (x1)<br>• Kabel Mikro USB - JST 2 pin (x1)<br>• Kabel jumper (1 set)<br>• KCD11: Saklar Pengayun SPST (x1)<br>• Baterai Li-ion 18650 (x2)<br>• Tempat baterai seri 2 slot (x1)<br>• Roda robot (x2)<br>• Roda kastor (x1)<br>• Motor driver L298N (x1)<br>• Kerangka robot mobil (x1)<br>• Baut spicer (1 set)<br>• Baut plus (1 set)<br>• Mur (1 set) |

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

## Rancangan Proyek
<table>
<tr>
<th width="420">Diagram Blok</th>
<th width="420">Diagram Ilustrasi</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/85978010-4eb6-4a6b-ad12-c6c0dd551e97" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/60a8106e-751d-4c63-96d3-61c612d889b4" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Pengkabelan</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/3636a8db-2c91-4955-bb08-6b7eb2b5b114" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Pengetahuan Dasar
Pada dasarnya, suatu perangkat itu dapat dikomunikasikan dengan perangkat lain baik secara nirkabel maupun dengan kabel. Komunikasi antar perangkat keras yang umum digunakan salah satunya adalah ``` Komunikasi Serial ```. Dapat diketahui bersama bahwa ``` Komunikasi Serial ``` ini ada tiga jenis, yaitu meliputi: ``` UART (Universal Asynchronous Receiver-Transmitter) ```, ``` SPI (Serial Peripheral Interface) ```, dan ``` I2C (Inter Integrated Circuit) ```. Ada dua macam ``` Komunikasi Serial UART ```, yaitu ``` Hardware Serial ``` dan ``` Software Serial ```.  ``` Komunikasi Hardware Serial ``` dapat dilakukan dengan cara menghubungkan pin ``` TX ``` dan pin ``` RX ``` secara ``` menyilang ``` pada masing-masing papan pengembangan, misalnya: ``` RX-TX ```, kemudian ``` TX-RX ```. Pin ``` TX ``` yaitu untuk ``` mengirim data ```, sedangkan pin ``` RX ``` yaitu untuk ``` menerima data ```. ``` Komunikasi Software Serial ``` ini kurang lebih sama dengan ``` Komunikasi Hardware Serial ``` dalam segi pengkabelan, namun ada perbedaan dalam segi pengkodean. Dengan menggunakan ``` Software Serial ``` inilah anda dapat mengatasi masalah keterbatasan pin ``` RX ``` dan ``` TX ``` yang ada di papan pengembangan. Untuk berkomunikasi dengan ``` Software Serial ``` ini cukup mudah, yaitu dengan menggunakan ``` Pin Digital ``` tertentu sebagai ``` pengganti pin TX dan pin RX ```.

<br><br>

## Pengaturan Arduino IDE
1. Buka ``` Arduino IDE ``` terlebih dahulu, kemudian buka proyek ini dengan cara klik ``` File ``` -> ``` Open ``` :

   <table><tr><td width="810">
      
      ``` stm32_btrobot.ino ```

   </td></tr></table><br>
   
2. Isi ``` Url Pengelola Papan Tambahan ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` File ``` -> ``` Preferences ``` -> masukkan ``` Boards Manager Url ``` dengan menyalin tautan berikut :
      
      ```
      https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json
      ```

   </td></tr></table><br>
   
3. ``` Pengaturan Board ``` di Arduino IDE

   <table>
      <tr><th width="810">

      Cara mengatur board ``` STM32F103C8T6 ```
            
      </th></tr>
      <tr><td>
      
      • Klik ``` Tools ``` -> ``` Board ``` -> ``` Boards Manager ``` -> Instal ``` STM32 MCU based boards ```.

      • Kemudian klik ``` Tools ``` -> ``` Board ``` -> ``` STM32 boards groups ``` -> ``` Generic STM32F1 series ```.

      </td></tr>
   </table><br>
   
4. ``` Ubah Nomor Bagian Papan ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` Tools ``` -> ``` Board part number ``` -> ``` BluePill F103C8 ```

   </td></tr></table><br>
   
5. ``` Ubah Dukungan U(S)ART ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` Tools ``` -> ``` U(S)ART Support ``` -> ``` Enabled (generic 'Serial') ```

   </td></tr></table><br>

6. ``` Ubah Metode Pengunggahan ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` Tools ``` -> ``` Upload method ``` -> ``` STM32CubeProgrammer (Serial) ```

   </td></tr></table><br>
   
7. ``` Pengaturan Port ``` di Arduino IDE

   <table><tr><td width="810">
      
      Klik ``` Port ``` -> Pilih sesuai dengan port perangkat anda ``` (anda dapat melihatnya di Device Manager) ```

   </td></tr></table><br>

8. Sebelum mengunggah program, silakan klik: ``` Verify ```.<br><br>

9. Jika tidak ada kesalahan dalam kode program, langkah selanjutnya yaitu menggunakan alat pemrograman ``` STM32 ``` sesuai dengan prosedur. Kemudian klik: ``` Upload ```.<br><br>

10. Jika masih ada masalah saat unggah program, maka coba periksa pada bagian ``` driver ``` / ``` port ``` / ``` alat pemrogram ``` / ``` yang lainnya ```.

<br><br>

## Pengaturan Alat Pemrogram: FTDI FT232RL
1. ``` Mode Pemrograman ``` :
   
   • Pastikan belum mengunggah program.
   
   • Pastikan posisi ``` jumper BOOT0 ``` yang ada pada ``` STM32F1 ``` berada pada posisi ``` 1 ```.
   
   • Pastikan posisi ``` jumper BOOT1 ``` yang ada pada ``` STM32F1 ``` berada pada posisi ``` 0 ```.

   • Pastikan posisi ``` jumper Vout ``` yang ada pada ``` FTDI ``` berada pada posisi ``` 3.3V ```.

   • Sambungkan ``` board STM32F103C8T6 ``` ini ke ``` FTDI ```.
      
      <img width="810" src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/3673fac7-49e1-43e7-8c7a-1bfaf060d7cb" alt="programming-mode">
   
   • Kemudian sambungkan ``` FTDI ``` ke ``` PC/Laptop ``` anda dengan kabel ``` Mini USB - USB tipe A ```.
   
   • Tekan tombol ``` Reset ``` agar seluruh program yang tersemat dalam ``` board STM32 ``` ini menjadi bersih (siap untuk diprogram ulang).

   • Kompilasi dan unggah program anda melalui editor kode, dalam hal ini ``` Arduino IDE ```.<br><br><br>
   
2. ``` Mode Pengoperasian ``` :
   
   • Pastikan telah mengunggah program.

   • Lepaskan ``` FTDI ``` dari perangkat.
   
   • Pastikan posisi ``` jumper BOOT0 & BOOT1 ``` yang ada pada ``` STM32F1 ``` berada pada posisi ``` 0 ```.
      
      <img width="810" src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/25e28727-b9bf-4218-9919-a5c807b8cb44" alt="operating-mode">
   
   • Kode program yang telah tertanam dalam ``` board STM32 ``` ini siap untuk dioperasikan (sudah tidak ada aktivitas pemrograman lagi).

   • Untuk menghidupkan ``` board STM32F1 ``` ini, anda dapat menggunakan catu daya eksternal seperti baterai atau yang lainnya.<br><br><br>

<strong>Catatan :</strong>

<table><tr><td width="840">

   • Untuk mengunggah program, selain menggunakan ``` FTDI FT232RL ```, anda juga dapat menggunakan alat pemrogram lainnya seperti: ``` ST-Link/V2 ``` ataupun ``` PL2303 ```.

   • Berdasarkan pengalaman, saya akui bahwa penggunaan ``` ST-Link/V2 ``` jauh lebih baik daripada ``` USB PL2303 ``` maupun ``` FTDI FT232RL ``` karena unggah program dapat dilakukan secara otomatis tanpa perlu memindahkan soket pin untuk keperluan booting.

</td></tr></table>

<br><br>

## Pengaturan Bluetooth RC Controller
1. Buka direktori ``` Assets/APK ``` untuk mendapatkan aplikasi yang bernama ``` Bluetooth RC Controller ``` -> kemudian instal aplikasi tersebut pada gawai anda.
   
2. Buka aplikasi ``` Bluetooth RC Controller ```.
   
3. Hidupkan ``` bluetooth ```.
   
4. Klik tombol ``` gerigi ``` -> pilih ``` Connect to car ```.
   
5. Klik tombol ``` Scan for devices ``` -> pilih ``` JDY-31-SPP ```.

6. Kemudian ``` menyandingkan perangkat ``` dengan memasukkan kata sandi: ``` 0000 ``` atau ``` 1234 ```.
  
7. Antarmuka pengguna siap digunakan. Hal ini seperti yang terlihat pada gambar berikut.

   <img width="810" src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/6ccfbbaa-a972-4437-a08d-2b40755badef" alt="user-interface">

<br><br>

## Memulai
1. Unduh dan ekstrak repositori ini.<br><br>
   
2. Pastikan anda memiliki komponen elektronik yang diperlukan.<br><br>
   
3. Pastikan komponen anda telah dirancang sesuai dengan diagram.<br><br>
    
4. Konfigurasikan perangkat anda menurut pengaturan di atas.<br><br>

5. Selamat menikmati [Selesai].

<br><br>

## Sorotan
<img width="840" src="https://github.com/devancakra/STM32-based-Bluetooth-Radio-Control-Car-Robot/assets/54527592/8cc918a3-6a37-4f63-ab0c-0a426ced48ab" alt="rc-car-robot">

<br><br>

## LISENSI
LISENSI MIT - Hak Cipta © 2023 - Devan C. M. Wijaya, S.Kom

Dengan ini diberikan izin tanpa biaya kepada siapa pun yang mendapatkan salinan perangkat lunak ini dan file dokumentasi terkait perangkat lunak untuk menggunakannya tanpa batasan, termasuk namun tidak terbatas pada hak untuk menggunakan, menyalin, memodifikasi, menggabungkan, mempublikasikan, mendistribusikan, mensublisensikan, dan/atau menjual salinan Perangkat Lunak ini, dan mengizinkan orang yang menerima Perangkat Lunak ini untuk dilengkapi dengan persyaratan berikut:

Pemberitahuan hak cipta di atas dan pemberitahuan izin ini harus menyertai semua salinan atau bagian penting dari Perangkat Lunak.

DALAM HAL APAPUN, PENULIS ATAU PEMEGANG HAK CIPTA DI SINI TETAP MEMILIKI HAK KEPEMILIKAN PENUH. PERANGKAT LUNAK INI DISEDIAKAN SEBAGAIMANA ADANYA, TANPA JAMINAN APAPUN, BAIK TERSURAT MAUPUN TERSIRAT, OLEH KARENA ITU JIKA TERJADI KERUSAKAN, KEHILANGAN, ATAU LAINNYA YANG TIMBUL DARI PENGGUNAAN ATAU URUSAN LAIN DALAM PERANGKAT LUNAK INI, PENULIS ATAU PEMEGANG HAK CIPTA TIDAK BERTANGGUNG JAWAB, KARENA PENGGUNAAN PERANGKAT LUNAK INI TIDAK DIPAKSAKAN SAMA SEKALI, SEHINGGA RISIKO ADALAH MILIK ANDA SENDIRI.
