// FUN_0004f3b8 @ 0004f3b8  size=204  callers=1
// program: bmminer


void FUN_0004f3b8(void)

{
  int iVar1;
  uint uVar2;
  int param3;
  char acStack_2018 [8196];
  
  param3 = 0;
  do {
    iVar1 = FUN_0002a6f0(param3);
    if ((iVar1 != 0) && (3 < DAT_000be63c)) {
      uVar2 = FUN_0001c768(param3);
      snprintf(acStack_2018,0x2000,"Chain [%d] PCB Version: 0x%04x\n",param3,uVar2);
      FUN_0004948c(3,acStack_2018,0);
      if (3 < DAT_000be63c) {
        uVar2 = FUN_0001c800(param3);
        snprintf(acStack_2018,0x2000,"Chain [%d] BOM Version: 0x%04x\n",param3,uVar2);
        FUN_0004948c(3,acStack_2018,0);
      }
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  return;
}

