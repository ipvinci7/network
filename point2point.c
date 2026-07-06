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
struct packet
{
  char src[10];
  char des[10];
  char payload[100];
}


int sendpacket(struct packet *p)
{
  //this function sends packet from the sender to the reciever and carrries the addres of the sender as well as the reciever
  //before a packet is sent a hand  
  if(packet)
    {
       
    }
}

int receievepacket(struct packet *p)
{
  /// this function is to recieve a packet and 

}