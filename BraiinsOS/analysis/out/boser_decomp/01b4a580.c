// FUN_01b4a580 @ 01b4a580 size=84 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01b4a580(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01b6b0a8(0x4d0);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_01b4a564(iVar1 + 8);
  *(int *)(param_1 + 0x14) = iVar1;
  return 1;
}

