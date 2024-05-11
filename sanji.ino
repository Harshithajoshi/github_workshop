#include"sanji.h"
rosxx a;
void setup()
{
  a.pinm(9);

}
void loop()
{
  a.on(9);
  delay(1000);
  a.off(9);
  delay(1000);
  
}
