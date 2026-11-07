// FUN_016f1e44 @ 016f1e44 size=132 calls_out=2 calls_in=6
// strings: 

void FUN_016f1e44(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = *param_1;
  iVar4 = param_1[2];
  uVar2 = param_1[1] - iVar1;
  *param_1 = 4;
  param_1[1] = 4;
  if (uVar2 != 0) {
    puVar5 = (undefined4 *)(iVar1 + 4);
    for (uVar2 = uVar2 >> 4; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_0134bd64(puVar5[-1],*puVar5);
      puVar5 = puVar5 + 4;
    }
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar4 + 8);
    if (param_1[3] != iVar3) {
      FUN_01bed864(*(int *)(iVar4 + 4) + iVar3 * 0x10,*(int *)(iVar4 + 4) + param_1[3] * 0x10,
                   iVar1 << 4);
    }
    *(int *)(iVar4 + 8) = iVar1 + iVar3;
  }
  return;
}

