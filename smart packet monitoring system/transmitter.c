#include <stdio.h>
#include <windows.h> 
#include "packet_utils.h"
void transmitter(int packetArray[],int packets)
{
    static int  packetCount = 0;
     packetCount++;
     if(packetCount==1)
     {
     printf("Transmitter is sending packets to the reciver..\n");
     Sleep(8000);
    receiver(packetArray,packets); 
     }
      else
      {

        for(int i=0;i<packets;i++)
        {
            Sleep(2000);
            printf("The Transmitter is ready to receive Duplicate & Missing Data packet: %d\n", packetArray[i]);
   
        }
           printf("Transmitter  has recived all Data packets succesfully..\n");
      }
}