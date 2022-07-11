#include <xcb/xcb.h>
#include <stdio.h>

int
main ()
{
  xcb_connection_t * xserver_connection;
  int has_error;

  /* Open the connection to the X server. Use the DISPLAY environment variable as the default display name */
  puts("attempting to connect to xserver");
  xserver_connection = xcb_connect(NULL, NULL);
  if (has_error = xcb_connection_has_error(xserver_connection))
  {
    puts("error connecting to xserver");
   }
  else
  {
    puts("successfully connected to xserver");
   }
  
  xcb_disconnect(xserver_connection);
  puts("disconnected");

  return 0;
 }
