// FUN_013c9f18 @ 013c9f18 size=56 calls_out=0 calls_in=0
// strings: 

int FUN_013c9f18(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x14) * 0xc +
          (*(int *)(param_1 + 0x20) + *(int *)(param_1 + 8)) * 4;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x30);
  }
  return iVar1;
}

