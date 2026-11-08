// FUN_013e1d2c @ 013e1d2c size=72 calls_out=1 calls_in=2
// strings: 

longlong FUN_013e1d2c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar1 = FUN_013d7a70(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),uVar2,2);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x14) = uVar2 + 2;
    return (ulonglong)uVar2 << 0x20;
  }
  return CONCAT44(iVar1,1);
}

