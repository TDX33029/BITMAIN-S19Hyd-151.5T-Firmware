// FUN_0002460c @ 0002460c  size=192  callers=1
// program: bmminer


void FUN_0002460c(void)

{
  int iVar1;
  int iVar2;
  int param3;
  char acStack_2010 [8196];
  
  param3 = 1;
  sleep(1);
  do {
    do {
      param3 = param3 + 1;
      sleep(1);
    } while (param3 < 0x1e);
    iVar1 = FUN_00019ae8(0);
    iVar2 = FUN_00019d24();
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
  } while ((5 < iVar1) && (param3 != 0x78));
  if (3 < DAT_000be63c) {
    iVar1 = FUN_00019ae8(0);
    iVar2 = FUN_00019d24();
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    snprintf(acStack_2010,0x2000,"Slept %d seconds, diff = %d.\n",param3,iVar1);
    FUN_0004948c(3,acStack_2010,0);
  }
  return;
}

