// FUN_016c78f0 @ 016c78f0 size=164 calls_out=2 calls_in=1
// strings: 

void FUN_016c78f0(int *param_1)

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
    for (uVar2 = uVar2 / 0xc; uVar2 != 0; uVar2 = uVar2 - 1) {
      FUN_0134aee0(puVar5[-1],*puVar5,4,8);
      puVar5 = puVar5 + 3;
    }
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar4 + 8);
    if (param_1[3] != iVar3) {
      FUN_01bed864(*(int *)(iVar4 + 4) + iVar3 * 0xc,*(int *)(iVar4 + 4) + param_1[3] * 0xc,
                   iVar1 * 0xc);
    }
    *(int *)(iVar4 + 8) = iVar1 + iVar3;
  }
  return;
}

