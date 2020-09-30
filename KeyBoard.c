if (!(PORTB & (1<<0)))   //RB0 row scans its columns if alarmed.
   {
      TRISB = 0b11111000;
      WPUB= 1;
      PORTB &= ~(1<<0);
      if (PORTB & (1<<3)==0)
      {
      // KEY A1 is pressed. write 7-seg code here. to display 01.
      }
      if (PORTB & (1<<4)==0)
      {
       // KEY A2 is pressed. write 7-seg code here. to display 02.
      }
      if (PORTB & (1<<5)==0)
      {
       // KEY A3 is pressed. write 7-seg code here. to display 03.
      }
      if (PORTB & (1<<6)==0)
      {
       // KEY A4 is pressed. write 7-seg code here. to display 04.
      }
      if (PORTB & (1<<7)==0)
      {
        // KEY A5 is pressed. write 7-seg code here. to display 05.
      }
      else // KEY A6 is pressed. write 7-seg code here. to display 06.
   }
if (!(PORTB & (1<<1)))   //RB1 row scans its columns if alarmed.
   {
      TRISB = 0b11111000;
      WPUB= 1;
      PORTB &= ~(1<<1);
      if (PORTB & (1<<3)==0)
      {
      // KEY B1 is pressed. write 7-seg code here. to display 07.
      }
      if (PORTB & (1<<4)==0)
      {
       // KEY B2 is pressed. write 7-seg code here. to display 08.
      }
      if (PORTB & (1<<5)==0)
      {
       // KEY B3 is pressed. write 7-seg code here. to display 09.
      }
      if (PORTB & (1<<6)==0)
      {
       // KEY B4 is pressed. write 7-seg code here. to display 10.
      }
      if (PORTB & (1<<7)==0)
      {
        // KEY B5 is pressed. write 7-seg code here. to display 11.
      }
      else // KEY B6 is pressed. write 7-seg code here. to display 12.
   }
if (!(PORTB & (1<<2)))   //RB2 row scans its columns if alarmed.
   {
      TRISB = 0b11111000;
      WPUB= 1;
      PORTB &= ~(1<<2);
      if (PORTB & (1<<3)==0)
      {
      // KEY C1 is pressed. write 7-seg code here. to display 13.
      }
      if (PORTB & (1<<4)==0)
      {
       // KEY C2 is pressed. write 7-seg code here. to display 14.
      }
      if (PORTB & (1<<5)==0)
      {
       // KEY C3 is pressed. write 7-seg code here. to display 15.
      }
      if (PORTB & (1<<6)==0)
      {
       // KEY C4 is pressed. write 7-seg code here. to display 16.
      }
      if (PORTB & (1<<7)==0)
      {
        // KEY C5 is pressed. write 7-seg code here. to display 17.
      }
      else // KEY C6 is pressed. write 7-seg code here. to display 18.
   }
else                     //scanning the last row which is D and not connected to a row pin.
{
  TRISB = 0b11111000;
  WPUB= 1;
  if (PORTB & (1<<3)==0)
      {
      // KEY D1 is pressed. write 7-seg code here. to display 19.
      }
      if (PORTB & (1<<4)==0)
      {
       // KEY D2 is pressed. write 7-seg code here. to display 20.
      }
      if (PORTB & (1<<5)==0)
      {
       // KEY D3 is pressed. write 7-seg code here. to display 21.
      }
      if (PORTB & (1<<6)==0)
      {
       // KEY D4 is pressed. write 7-seg code here. to display 22.
      }
      if (PORTB & (1<<7)==0)
      {
        // KEY D5 is pressed. write 7-seg code here. to display 23.
      }
      else  // KEY D6 is pressed. write 7-seg code here. to display 24. // the last totally un connected pin.

  }
