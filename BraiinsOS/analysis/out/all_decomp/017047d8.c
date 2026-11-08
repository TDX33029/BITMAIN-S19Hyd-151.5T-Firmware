// FUN_017047d8 @ 017047d8 size=80 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_017047d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_017046e0(*(undefined4 *)(iVar2 + 4));
  FUN_0177aafc(*(undefined4 *)(iVar2 + 0x1c));
  FUN_0177aafc(*(undefined4 *)(iVar2 + 0x20));
  uVar1 = FUN_0177aafc(iVar2);
  return uVar1;
}

