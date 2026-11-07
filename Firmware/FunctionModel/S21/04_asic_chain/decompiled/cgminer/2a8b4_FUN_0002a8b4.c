// FUN_0002a8b4 @ 0002a8b4  size=200  callers=2
// program: cgminer


void FUN_0002a8b4(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint param3;
  char acStack_c08 [1024];
  char acStack_808 [2048];
  
  iVar1 = 4;
  param3 = 0;
  do {
    uVar2 = param_2 & 0xff;
    iVar1 = iVar1 + -1;
    param_2 = param_2 >> 8;
    param3 = uVar2 + param3 * 0x100;
  } while (iVar1 != 0);
  FUN_0001fa58(acStack_c08,param_1,0x80);
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
    return;
  }
  snprintf(acStack_808,0x800,"BENCHFILE nonce %u=0x%08x for work=%s",param3,param3,acStack_c08);
  FUN_0001dd98(3,acStack_808,0);
  return;
}

