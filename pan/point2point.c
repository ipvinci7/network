#include <stdio.h>
//the idea of point to point is the message called packet is sent from src to destination
//so the packet should have an address 
//definite address definite dest
/*START

Initialize communication

Create connection request packet

Send connection request

Wait for response

IF response is ACCEPTED

    Connection established

ELSE

    Terminate communication

END IF*/

//host 1 calls out to host 2
//host 2 chooses to respond or decline
//if it responds it set up a comm channel with this host 
//host 1 send an info first like hello and waits for response
//host 2 recieves the info and does what it wants and sends back an info
//
//that first information should be callled a ping 

// int ping(char src[],char dest[])
// {
//   //sample char ip[] = "192.168.1.1";

//   //so basically this should have a hello host 2
//   //return 1 if success return -1 if it fails
//   //check the reason for failure 
//   ///this should have the address of the host 2
//   //1. Before sending test packet check the destination
//   if(sizeof(dest)!=12)
//   {
    
//   }

// }
// struct packet
// {
//   char src[10];
//   char des[10];
//   char payload[100];
// }


// int sendpacket(struct packet *p)
// {
//   //this function sends packet from the sender to the reciever and carrries the addres of the sender as well as the reciever
//   //before a packet is sent a hand  
//   if(packet)
//     {
       
//     }
// }

// int receievepacket(struct packet *p)
// {
//   /// this function is to recieve a packet and 

// }

int ping(char src[],char des[])
{
  //check size of the des
   
   if(des)
   {
    int size = (int)des;
     printf("Now you can ping");
   }else
   {
     printf("invalid address");
   }
}
int main()
{
  //  char src[]= "198.121.1.1";
  // printf("%ld",sizeof(src));
   ping("192","198.122.1");
}