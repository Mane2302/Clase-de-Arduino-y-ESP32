# 🛠️ Guía de instalación  
> En este documento encontrarás las instrucciones necesarias para comenzar a usar placas **Arduino** y **ESP32**.

---

## Instalación de Arduino IDE

 Descarga oficial:  
🔗 https://www.arduino.cc/en/software

### Pasos:
1. Ingresa al enlace.
2. Selecciona tu sistema operativo (**Windows, macOS o Linux**).
3. Descarga e instala el programa.

![Página de Arduino IDE](/Instalar/img/pagina_ide.png)

---

# Configuración para ESP32

## Paso 1: Agregar soporte para ESP32

1. Abre **Arduino IDE**.
2. Ve a:  
   **Archivo → Preferencias**
3. En el campo **"URLs adicionales de gestores de tarjetas"**, pega lo siguiente:

```bash
https://dl.espressif.com/dl/package_esp32_index.json
```
![Página de Arduino IDE](/Instalar/img/prefere.png)

---
## Paso 2: Instalar las placas ESP32

1. Ve a:  
   **Herramientas → Placa → Gestor de placas**
2. Busca: `ESP32`
3. Instala el paquete de **Espressif Systems**.

![Página de Arduino IDE](/Instalar/img/placa.png)
---

## Paso 3: Instalar drivers (si es necesario)

Instala ambos drivers si tu placa no se reconoce en tu pc (Windows):

- [CP210](https://www.silabs.com/developer-tools/usb-to-uart-bridge-vcp-drivers)
- [CH340](https://sparks.gogo.co.nz/ch340.html)

---

**Si todo se instaló bien, podrás utilizar las placas Arduino y ESP32 sin problemas.**

> Recuerda que la ESP32 aveces necesita de librerias para que algunos componentes funcionen.
