// FUN_0007f548 @ 0007f548  size=164  callers=11
// program: bmminer


int FUN_0007f548(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0007d8a0(0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0007e9c8(iVar1,1);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 8) = 8;
    uVar2 = FUN_0007d8a0(*(int *)(iVar1 + 8) << 2);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    if (*(int *)(iVar1 + 0x10) == 0) {
      FUN_0007d8e8(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

