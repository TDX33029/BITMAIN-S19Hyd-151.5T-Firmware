// FUN_017a23c4 @ 017a23c4 size=148 calls_out=1 calls_in=1
// strings: 

uint FUN_017a23c4(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_017a2180();
  if (0xffffff88 < uVar1) {
    return uVar1;
  }
  if (*(int *)(param_1 + 300) == 1) {
    return *(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x988);
  }
  uVar1 = *(int *)(param_1 + 0x960) - *(int *)(param_1 + 0x95c);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0x250);
  }
  return uVar1;
}

