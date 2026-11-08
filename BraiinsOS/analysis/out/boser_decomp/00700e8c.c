// FUN_00700e8c @ 00700e8c size=52 calls_out=1 calls_in=6
// strings: 

void FUN_00700e8c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 8);
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    FUN_015f5ab8();
  }
  *(int *)(param_1 + 0x20) = iVar3 + 1;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3 * 8);
  *puVar1 = uVar2;
  puVar1[1] = uVar2;
  return;
}

