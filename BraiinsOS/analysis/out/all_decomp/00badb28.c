// FUN_00badb28 @ 00badb28 size=176 calls_out=2 calls_in=8
// strings: 

void FUN_00badb28(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  puVar1 = (undefined4 *)*param_1;
  iVar5 = param_1[2];
  uVar2 = param_1[1] - (int)puVar1;
  *param_1 = 4;
  param_1[1] = 4;
  if (uVar2 != 0) {
    iVar6 = 1 - (uVar2 >> 3);
    do {
      uVar7 = *puVar1;
      puVar8 = (undefined4 *)puVar1[1];
      pcVar3 = (code *)*puVar8;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
      iVar6 = iVar6 + 1;
      puVar1 = puVar1 + 2;
    } while (iVar6 != 1);
  }
  iVar6 = param_1[4];
  if (iVar6 != 0) {
    iVar4 = *(int *)(iVar5 + 8);
    if (param_1[3] != iVar4) {
      FUN_016dd52c(*(int *)(iVar5 + 4) + iVar4 * 8,*(int *)(iVar5 + 4) + param_1[3] * 8,iVar6 << 3);
    }
    *(int *)(iVar5 + 8) = iVar4 + iVar6;
  }
  return;
}

