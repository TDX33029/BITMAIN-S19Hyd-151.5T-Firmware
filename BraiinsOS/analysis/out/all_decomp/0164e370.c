// FUN_0164e370 @ 0164e370 size=128 calls_out=2 calls_in=2
// strings: 

void FUN_0164e370(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*param_1;
  iVar4 = param_1[2];
  uVar1 = param_1[1] - (int)puVar5;
  *param_1 = 4;
  param_1[1] = 4;
  if (uVar1 != 0) {
    for (uVar1 = uVar1 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      FUN_016458f0(*puVar5);
      puVar5 = puVar5 + 1;
    }
  }
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar4 + 8);
    if (param_1[3] != iVar2) {
      FUN_016dd52c(*(int *)(iVar4 + 4) + iVar2 * 4,*(int *)(iVar4 + 4) + param_1[3] * 4,iVar3 << 2);
    }
    *(int *)(iVar4 + 8) = iVar2 + iVar3;
  }
  return;
}

