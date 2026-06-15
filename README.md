
# bootExample Example

##  🎯 Overview.

This repository contains a complete, self-contained coding example demonstrating a very basic configuration and usage of the [QEMU] environment on the [ZCU208 Board - ZynqUltraScale+RFSoC] using Vivado2023.2 and petalinux v2023.2.

### 💡 Objective

The primary goal of this exercise is to implement a very simple application to boot a Linux OS on the ZCU208 evalboard using the BSP that Xilinx offers. I've created an image to build into the system. The whole system is testing in qemu through GDN.

### ⚙️ Hardware & Software Details.
| Component  | Value | Notes |
| ------------- | ------------- | ------------- |
| Microprocessor  | ZynqUltraScale+RFSoC]  | FPGA + Different ARM Microprocessors |
| Development Board  | ZCU208 | Specific hardware used for testing  |
| Peripheral Used | UART Peripheral, USART, HSI | shell terminal |

### Toolchain Used

This project was developed and tested using the following specific toolchain:

IDE: Vivado v2023.2

OS tool: Petalinux v2023.2

### Project Structure
Project-Folder
 |
 |
 |- README.md
 |- .gitignore
 |- .git
 |- petalinux/
    |- project-spec/
    |- ./petalinux
    |- ...
 |- vivado/
    |- original_project.xpr
    |- original_project.srcs
    |- All referenced IP repositories
    |- ...
 |- important apps or scripts to the project

### 🛠️ Implementation Details (The Code)

TBU

TBU

### ➡️ Build and Run Instructions

1. Clone this specific repository:

> git clone git@github.com:Cart1993/bootExample.git

2. Open the project file .XPR file into the vivado or you may just import te .xsa into your petalinux environment.

3. Build the project.

### 📄 License

This exercise is part of the main Baremetal : ARM Cortex-M Embedded Coding Exercises project and is released under the MIT License.
=======
# bootExample
Very basic example project to inspect, work and understand how to use QEMU in Zynq UltraScale+ MPSoC, Petalinux and Vivado v 2023.2

