// FUN_00a6183c @ 00a6183c size=76 calls_out=3 calls_in=4
// strings: 

void FUN_00a6183c(undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 == '\x04') {
    FUN_00a61904(param_1 + 0x10);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_00a6187c;
    }
    FUN_00a618a0(param_1 + 0x10);
  }
  param_1 = param_1 + 6;
LAB_00a6187c:
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

