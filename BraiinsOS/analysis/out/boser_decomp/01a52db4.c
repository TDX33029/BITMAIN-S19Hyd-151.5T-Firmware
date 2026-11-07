// FUN_01a52db4 @ 01a52db4 size=76 calls_out=1 calls_in=15
// strings: 

void FUN_01a52db4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = (*(int *)(param_1 + 4) * (iVar1 + 1) + *(int *)(param_1 + 8)) - 1U &
          -*(int *)(param_1 + 8);
  if (iVar1 + uVar2 == -5) {
    return;
  }
  thunk_FUN_01be4678(*(int *)(param_1 + 0xc) - uVar2);
  return;
}

