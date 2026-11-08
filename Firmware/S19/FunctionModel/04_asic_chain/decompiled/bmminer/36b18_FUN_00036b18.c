// FUN_00036b18 @ 00036b18  size=204  callers=1
// program: bmminer


void FUN_00036b18(void)

{
  int iVar1;
  uint uVar2;
  int param3;
  char acStack_818 [2052];
  
  param3 = 0;
  do {
    iVar1 = FUN_000201d8(param3);
    if ((iVar1 != 0) && (3 < DAT_00087bbc)) {
      uVar2 = FUN_0001b854(param3);
      snprintf(acStack_818,0x800,"Chain [%d] PCB Version: 0x%04x\n",param3,uVar2);
      FUN_00032218(3,acStack_818,0);
      if (3 < DAT_00087bbc) {
        uVar2 = FUN_0001b8e8(param3);
        snprintf(acStack_818,0x800,"Chain [%d] BOM Version: 0x%04x\n",param3,uVar2);
        FUN_00032218(3,acStack_818,0);
      }
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  return;
}

