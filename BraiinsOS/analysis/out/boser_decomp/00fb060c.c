// FUN_00fb060c @ 00fb060c size=132 calls_out=4 calls_in=1
// strings: 

void FUN_00fb060c(undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)((int)param_1 + 0x71) == '\x03') {
      FUN_00740564(param_1 + 7);
      *(undefined1 *)(param_1 + 0x1c) = 0;
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xb) == '\x03') {
      FUN_00741144(param_1 + 8);
    }
    FUN_005f649c(param_1 + 0xc);
  }
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  FUN_019bb7e0(param_1[3],param_1[4]);
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  return;
}

