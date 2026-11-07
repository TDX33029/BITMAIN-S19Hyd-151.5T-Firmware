// FUN_013cb800 @ 013cb800 size=468 calls_out=3 calls_in=2
// strings: 

void FUN_013cb800(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  
  if (*param_2 == -0x80000000) {
    iVar2 = *param_1;
    if (iVar2 != -0x80000000) {
      iVar3 = param_1[1];
      iVar6 = param_1[2];
      for (iVar1 = 0; iVar6 != iVar1; iVar1 = iVar1 + 1) {
        if (*(int *)(iVar3 + iVar1 * 0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + iVar1 * 0x10 + 4));
        }
      }
      if (iVar2 != 0) {
        thunk_FUN_016d3fb4(iVar3);
      }
    }
    *param_1 = -0x80000000;
    return;
  }
  iVar2 = *param_1;
  piVar4 = (int *)param_2[1];
  uVar7 = param_2[2];
  param_2[2] = 0;
  if (iVar2 == -0x80000000) {
    if (uVar7 == 0) {
      return;
    }
    piVar4 = piVar4 + 1;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (piVar4[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar4);
      }
      piVar4 = piVar4 + 4;
    }
    return;
  }
  piVar10 = piVar4 + uVar7 * 4;
  iVar1 = param_1[2];
  piVar5 = piVar4;
  if ((uint)(iVar2 - iVar1) < uVar7) {
    FUN_013c4434(param_1,iVar1,uVar7,4,0x10,piVar4,piVar10,param_2,uVar7,0);
    iVar2 = param_1[1];
    iVar1 = param_1[2];
  }
  else {
    uVar9 = 0;
    if (uVar7 == 0) goto LAB_013cb950;
    iVar2 = param_1[1];
  }
  do {
    piVar4 = piVar5 + 4;
    if (*piVar5 == -0x80000000) goto LAB_013cb948;
    iVar8 = piVar5[1];
    iVar3 = piVar5[2];
    iVar6 = piVar5[3];
    piVar4 = (int *)(iVar2 + iVar1 * 0x10);
    *piVar4 = *piVar5;
    iVar1 = iVar1 + 1;
    piVar4[1] = iVar8;
    piVar4[2] = iVar3;
    piVar4[3] = iVar6;
    piVar4 = piVar5 + 4;
    piVar5 = piVar5 + 4;
  } while (piVar4 != piVar10);
  piVar4 = piVar10;
LAB_013cb948:
  uVar9 = (uint)((int)piVar10 - (int)piVar4) >> 4;
LAB_013cb950:
  param_1[2] = iVar1;
  if (piVar10 != piVar4) {
    piVar4 = piVar4 + 1;
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (piVar4[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar4);
      }
      piVar4 = piVar4 + 4;
    }
  }
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_013604dc(param_1);
  return;
}

