// FUN_00b7a2a8 @ 00b7a2a8 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_00b7a2a8(undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\x04') {
    FUN_0154a93c(param_1 + 0x1e);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_00b7a2e8;
    }
    FUN_00b7a30c(param_1 + 7);
  }
  param_1 = param_1 + 3;
LAB_00b7a2e8:
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

