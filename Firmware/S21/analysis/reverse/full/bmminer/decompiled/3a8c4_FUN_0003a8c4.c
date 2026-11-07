// FUN_0003a8c4 @ 0003a8c4  size=64  callers=3
// program: bmminer


void FUN_0003a8c4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(void **)(param_1 + 0x18) == (void *)0x0) {
    return;
  }
  free(*(void **)(param_1 + 0x18));
  iVar1 = *(int *)(param_1 + 0x6c);
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar2 = *(uint *)(iVar1 + 8);
  *(uint *)(iVar1 + 8) = uVar2 - uVar3;
  *(uint *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) - (((int)uVar3 >> 0x1f) + (uint)(uVar2 < uVar3));
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

