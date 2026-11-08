// FUN_013c83f4 @ 013c83f4 size=116 calls_out=0 calls_in=0
// strings: 

int FUN_013c83f4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(iVar2 + 0x24) + *(int *)(*(int *)(param_1 + 0xc) + 0x10) * 8;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x24);
  }
  iVar1 = iVar1 + *(int *)(param_1 + 0x54) +
          (*(int *)(param_1 + 8) + *(int *)(iVar2 + 0x10) + *(int *)(param_1 + 0x44)) * 0xc +
          (*(int *)(param_1 + 0x38) + *(int *)(iVar2 + 0x1c) + *(int *)(param_1 + 0x50)) * 4;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x60);
  }
  return iVar1;
}

