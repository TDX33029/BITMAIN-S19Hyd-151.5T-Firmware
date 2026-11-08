// FUN_016dddc0 @ 016dddc0 size=84 calls_out=0 calls_in=11
// strings: 

undefined8 FUN_016dddc0(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = param_1;
  if (*param_1 < 0) {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_1);
      param_2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = param_2 + 0x7fffffff;
    DataMemoryBarrier(0x1b);
    piVar2 = (int *)0x0;
    if (param_2 != -0x7fffffff) {
      param_2 = 0x81;
      software_interrupt(0);
      piVar2 = (int *)((int)param_1 + 0x26);
      if ((int *)((int)param_1 + 0x26) == (int *)0x0) {
        param_2 = 1;
        software_interrupt(0);
        piVar2 = param_1;
      }
    }
  }
  return CONCAT44(param_2,piVar2);
}

