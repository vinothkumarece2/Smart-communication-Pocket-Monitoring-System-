#include <stdio.h>
#include <windows.h>
#include "packet_utils.h"

void receiver(int packetArray[], int packets)
{
  int resendPackets[packets];
  int resendCount = 0;
    printf("Receiver Receiving the Data packets...\n");
    Sleep(2000);
    printf("Receiver Processing the Data packets...\n");
    Sleep(2000);

    for (int i = 1; i <= packets; i++)  
    {
        int count = 0;
        for (int j = 0; j < packets; j++)
        {
            if (packetArray[j] == i)
            {
                count++;
            }
        }

        if (count == 0)
        {
            printf("Missing packet: %d\n", i);
            resendPackets[resendCount++]=i;

        }

        if (count>=2)
        {
            printf("Duplicate packet: %d\n", i);
              resendPackets[resendCount++]=i;
        }
    }
    
    if(resendCount > 0)
    {
       printf("Resending the missing & duplicate packets...\n");
       Sleep(5000);
      transmitter(resendPackets, resendCount);
    }     
   
}
