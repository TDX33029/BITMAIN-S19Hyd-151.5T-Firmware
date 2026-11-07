// FUN_00bb2774 @ 00bb2774 size=340 calls_out=1 calls_in=3
// strings: 

void FUN_00bb2774(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  uVar3 = param_1[3];
  iVar5 = 0;
  iVar6 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar2 = *param_1;
    uVar7 = param_1[2];
    uVar1 = uVar7 - uVar2;
    if (uVar7 < uVar2) {
      uVar1 = uVar7;
    }
    if (uVar2 - uVar1 < uVar3) {
      iVar6 = uVar3 - (uVar2 - uVar1);
    }
    else {
      iVar6 = 0;
      uVar2 = uVar1 + uVar3;
    }
  }
  uVar3 = param_1[1];
  while (iVar5 != uVar2 - uVar1) {
    iVar4 = uVar3 + uVar1 * 0x30 + iVar5 * 0x30;
    if (*(int *)(iVar4 + 0x18) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x1c));
    }
    iVar9 = *(int *)(iVar4 + 0x28);
    iVar5 = iVar5 + 1;
    puVar8 = (undefined4 *)(iVar9 + 4);
    for (iVar10 = *(int *)(iVar4 + 0x2c); iVar10 != 0; iVar10 = iVar10 + -1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 6;
    }
    if (*(int *)(iVar4 + 0x24) != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  }
  iVar5 = 0;
  while (iVar5 != iVar6) {
    iVar4 = uVar3 + iVar5 * 0x30;
    if (*(int *)(iVar4 + 0x18) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0x1c));
    }
    iVar9 = *(int *)(iVar4 + 0x28);
    iVar5 = iVar5 + 1;
    puVar8 = (undefined4 *)(iVar9 + 4);
    for (iVar10 = *(int *)(iVar4 + 0x2c); iVar10 != 0; iVar10 = iVar10 + -1) {
      if (puVar8[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 6;
    }
    if (*(int *)(iVar4 + 0x24) != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  }
  return;
}

