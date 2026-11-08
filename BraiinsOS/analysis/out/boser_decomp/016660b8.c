// FUN_016660b8 @ 016660b8 size=76 calls_out=1 calls_in=128
// strings: 

void FUN_016660b8(int param_1)

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

