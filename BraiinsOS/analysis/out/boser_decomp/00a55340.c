// FUN_00a55340 @ 00a55340 size=136 calls_out=4 calls_in=1
// strings: 

void FUN_00a55340(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xd0) == '\x03') {
      FUN_00b99500(param_1 + 0x14);
      return;
    }
    return;
  }
  if (cVar1 == '\x04') {
    FUN_00a55b38(param_1 + 0x10);
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x5b4) == '\x03') {
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar2 = param_1 + 0x2e0;
      }
      else {
        if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_00a553bc;
        iVar2 = param_1 + 0x18;
      }
      FUN_00df9ef8(iVar2);
    }
  }
LAB_00a553bc:
  FUN_0084ec48(param_1);
  return;
}

