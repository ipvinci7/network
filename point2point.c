#include <stdio.h>
//the idea of point to point is the message called packet is sent from src to destination
//so the packet should have an address 
//definite address definite dest
struct packet
{
  char src[10];
  char des[10];
  char payload[100];
}


