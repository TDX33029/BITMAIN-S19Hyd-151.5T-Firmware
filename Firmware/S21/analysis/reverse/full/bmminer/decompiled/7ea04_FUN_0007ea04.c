// FUN_0007ea04 @ 0007ea04  size=148  callers=6
// program: bmminer


int FUN_0007ea04(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0007d8a0(0x24);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    if (DAT_00945394 == 0) {
      FUN_0007b1a0(0);
    }
    FUN_0007e9c8(iVar1,0);
    iVar2 = FUN_0007a8e4(iVar1 + 8);
    if (iVar2 != 0) {
      FUN_0007d8e8(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

