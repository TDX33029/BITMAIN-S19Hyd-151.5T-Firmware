// FUN_013de470 @ 013de470 size=72 calls_out=1 calls_in=2
// strings: 

void FUN_013de470(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < param_2) {
    return;
  }
  *(uint *)(param_1 + 8) = param_2;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + 4);
  for (iVar2 = uVar1 - param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_019bb7e0(*puVar3,puVar3[1]);
    puVar3 = puVar3 + 4;
  }
  return;
}

