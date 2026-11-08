// FUN_013602fc @ 013602fc size=332 calls_out=3 calls_in=2
// strings: 

void FUN_013602fc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  piVar7 = (int *)*param_2;
  piVar9 = (int *)param_2[1];
  uVar3 = ((uint)((int)piVar9 - (int)piVar7) >> 2) * -0x55555555;
  iVar1 = param_1[2];
  if ((uint)(*param_1 - iVar1) < uVar3) {
    FUN_013c4434(param_1,iVar1,uVar3,4,0xc);
    iVar1 = param_1[2];
  }
  iVar6 = param_2[2];
  iVar11 = param_2[3];
  iVar10 = param_2[4];
  if (piVar7 != piVar9) {
    piVar2 = (int *)(param_1[1] + iVar1 * 0xc + 4);
    piVar8 = piVar7;
    do {
      piVar7 = piVar8 + 3;
      if (*piVar8 == -0x80000000) goto LAB_01360398;
      iVar4 = piVar8[1];
      iVar5 = piVar8[2];
      piVar2[-1] = *piVar8;
      iVar1 = iVar1 + 1;
      *piVar2 = iVar4;
      piVar2[1] = iVar5;
      piVar2 = piVar2 + 3;
      piVar7 = piVar8 + 3;
      piVar8 = piVar8 + 3;
    } while (piVar7 != piVar9);
    piVar7 = piVar9;
LAB_01360398:
    uVar3 = ((uint)((int)piVar9 - (int)piVar7) >> 2) * -0x55555555;
  }
  param_1[2] = iVar1;
  if (piVar9 != piVar7) {
    piVar7 = piVar7 + 1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if (piVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*piVar7);
      }
      piVar7 = piVar7 + 3;
    }
  }
  if (iVar10 != 0) {
    iVar1 = *(int *)(iVar6 + 8);
    if (iVar11 != iVar1) {
      FUN_016dd52c(*(int *)(iVar6 + 4) + iVar1 * 0xc,*(int *)(iVar6 + 4) + iVar11 * 0xc,iVar10 * 0xc
                  );
    }
    *(int *)(iVar6 + 8) = iVar1 + iVar10;
  }
  return;
}

