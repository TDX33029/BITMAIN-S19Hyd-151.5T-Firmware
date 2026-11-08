// FUN_01b05f44 @ 01b05f44 size=96 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01b05f44(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01b6b0a8(0xc);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 4) = 0x800;
  *(undefined4 *)(iVar1 + 8) = 2;
  *(int *)(param_1 + 0x14) = iVar1;
  return 1;
}

