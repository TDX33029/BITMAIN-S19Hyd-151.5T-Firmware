// FUN_016bc52c @ 016bc52c size=132 calls_out=0 calls_in=0
// strings: 

int FUN_016bc52c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x10) * 8 + *(int *)(param_1 + 8) * 0xc +
          *(int *)(iVar1 + 0x10) * 0xc + *(int *)(iVar1 + 0x1c) * 4 + *(int *)(iVar1 + 0x24);
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x24);
  }
  iVar1 = iVar1 + *(int *)(param_1 + 0x44) * 0xc + *(int *)(param_1 + 0x54) +
          (*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x38)) * 4;
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x60);
  }
  return iVar1;
}

