// FUN_00080784 @ 00080784  size=92  callers=23
// program: bmminer


int FUN_00080784(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0007d8a0(0x10);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0007e9c8(iVar1,3);
    *(undefined4 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_2;
  }
  return iVar1;
}

