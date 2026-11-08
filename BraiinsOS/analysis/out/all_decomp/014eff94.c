// FUN_014eff94 @ 014eff94 size=388 calls_out=4 calls_in=0
// strings: 

void FUN_014eff94(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if ((9 < *(byte *)(param_1 + 0x9c)) && (*(int *)(param_1 + 0xa4) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa0));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  FUN_01015c1c(param_1);
  if (*(int *)(param_1 + 0x88) != 0) {
    if (*(int *)(param_1 + 0x8c) == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x90);
      puVar9 = *(undefined4 **)(param_1 + 0x94);
      pcVar3 = (code *)*puVar9;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar7);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar7);
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x8c) + 0x10))
                (param_1 + 0x98,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    }
  }
  iVar8 = *(int *)(param_1 + 0xb0);
  if (iVar8 != 0) {
    FUN_0148eea4(iVar8);
    thunk_FUN_016d3fb4(iVar8);
  }
  iVar8 = *(int *)(param_1 + 0xb8);
  if (iVar8 != 0) {
    puVar4 = (uint *)(iVar8 + 0x70);
    uVar6 = *(uint *)(iVar8 + 0x70);
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_014f00bc;
        uVar6 = *puVar4;
        if (uVar6 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_014f00bc:
    if ((uVar5 & 5) == 1) {
      (**(code **)(*(int *)(iVar8 + 0x68) + 8))(*(undefined4 *)(iVar8 + 0x6c));
    }
    piVar2 = *(int **)(param_1 + 0xb8);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014a545c(*(undefined4 *)(param_1 + 0xb8));
        return;
      }
    }
  }
  return;
}

