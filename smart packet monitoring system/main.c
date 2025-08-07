#include <stdio.h>
#include "packet_utils.h"
#include <windows.h>
int main()
{
   int packets;
   printf("Enter the number of packets:");
   scanf("%d",&packets);
   int packetArray[packets];
   printf("Enter the Data packets:\n");
   for(int i=0; i<packets;i++)
   {
    scanf("%d",&packetArray[i]);
   }

   printf("Waiting for transmitter to send packets...\n");
   Sleep(5000);
    transmitter(packetArray,packets);
    Sleep(2000);
    printf("Data packets sent successfully...\n");
    return 0;
}

