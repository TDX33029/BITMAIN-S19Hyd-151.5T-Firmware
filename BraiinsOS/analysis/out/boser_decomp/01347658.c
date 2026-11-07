// FUN_01347658 @ 01347658 size=136 calls_out=0 calls_in=0
// strings: 

char FUN_01347658(char *param_1)

{
  bool bVar1;
  
  DataMemoryBarrier(0xb);
  param_1[0xc] = '\x01';
  DataMemoryBarrier(0xb);
  if (*param_1 != '\0') goto LAB_013476cc;
  while (bVar1 = (bool)hasExclusiveAccess(param_1), !bVar1) {
    while( true ) {
      while (*param_1 != '\0') {
        HintYield();
      }
      if (*param_1 == '\0') break;
LAB_013476cc:
      ClearExclusiveLocal();
    }
  }
  *param_1 = '\x01';
  DataMemoryBarrier(0xb);
  (**(code **)(*(int *)(param_1 + 4) + 8))(*(undefined4 *)(param_1 + 8));
  DataMemoryBarrier(0xb);
  *param_1 = '\0';
  return param_1[0xd];
}

