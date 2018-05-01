/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs  - 1.45
        Device            :  PIC18F26K80
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include "mcc_generated_files/mcc.h"


//no need for these here 
//void delay(void);
//void handleCAN(uCAN_MSG msg);


void send_i2c( uint8_t data, uint8_t data_code);

unsigned int ctr = 0;
unsigned int delayVal = 2048;



/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    //Enables Rx Buffer interrupts
    PIE5bits.RXB0IE = 1;
    PIE5bits.RXB1IE = 1;
    
    
    SYSTEM_Initialize();

    

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable high priority global interrupts
   // INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
   // INTERRUPT_GlobalInterruptLowEnable();

    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    
    
    
    
    
    //Turn on Digital Display
    DISPLAY_SetHigh();
    
    uint8_t test=0;
    while (1)
    {
        
        __delay_ms(100);
        
        send_i2c(test,0);
        __delay_ms(100);
        test++;
        DISPLAY_SetHigh();
    }
    

}
    
    
void send_i2c( uint8_t data, uint8_t data_code){
    uint8_t     writeBuffer[5];
    uint16_t    timeOut;
    uint16_t    counter;
    uint8_t     *pD;
    
    I2C_MESSAGE_STATUS status = I2C_MESSAGE_PENDING;

    writeBuffer[0]=data;

    // Now it is possible that the slave device will be slow.
    // As a work around on these slaves, the application can
    // retry sending the transaction
    timeOut = 0;
    //while(status != I2C_MESSAGE_FAIL)
    //{
        // write one byte to EEPROM (3 is the number of bytes to write)
        I2C_MasterWrite(  writeBuffer,
                                1,
                                8,//slave address
                                &status);

        // wait for the message to be sent or status has changed.
        while(status == I2C_MESSAGE_PENDING);
        DISPLAY_SetLow();
        //if (status == I2C_MESSAGE_COMPLETE)
           // break;

        // if status is  I2C_MESSAGE_ADDRESS_NO_ACK,
        //               or I2C_DATA_NO_ACK,
        // The device may be busy and needs more time for the last
        // write so we can retry writing the data, this is why we
        // use a while loop here

        // check for max retry and skip this byte
       // if (timeOut == 50)
           // break;
        //else
           // timeOut++;
    //}
}    
    
    
    
/**
 End of File
*/

