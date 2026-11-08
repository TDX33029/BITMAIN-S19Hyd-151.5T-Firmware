// FUN_01b20040 @ 01b20040 size=112 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01b20040(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01b6b0a8(0x30);
  if (iVar1 != 0) {
    iVar2 = FUN_01afc914(iVar1 + 0x18,0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      return 1;
    }
    FUN_01b6b1c4(iVar1);
  }
  return 0;
}

