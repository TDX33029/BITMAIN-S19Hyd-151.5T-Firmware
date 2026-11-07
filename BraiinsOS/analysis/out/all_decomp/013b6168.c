// FUN_013b6168 @ 013b6168 size=288 calls_out=2 calls_in=2
// strings: 

void FUN_013b6168(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar7 = param_1[6];
  piVar6 = (int *)(param_1[5] + 4);
  *param_1 = 0;
  param_1[6] = 0;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    iVar2 = piVar6[-1];
    if (((iVar2 == 7 || iVar2 == 6) || (iVar2 == 2)) && (*piVar6 != 0)) {
      thunk_FUN_016d3fb4(piVar6[1]);
    }
    piVar6 = piVar6 + 4;
  }
  iVar2 = param_1[0xb];
  iVar11 = param_1[0xc];
  iVar7 = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  while (iVar7 != iVar11) {
    piVar6 = (int *)(iVar2 + iVar7 * 0xc);
    iVar9 = piVar6[2];
    if (iVar9 != 0) {
      iVar10 = piVar6[1];
      iVar8 = 0;
      do {
        piVar3 = (int *)(iVar10 + iVar8 * 8);
        piVar4 = (int *)*piVar3;
        if (piVar4 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(*piVar3,piVar3[1]);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar9);
    }
    iVar7 = iVar7 + 1;
    if (*piVar6 != 0) {
      thunk_FUN_016d3fb4(piVar6[1]);
    }
  }
  param_1[0xd] = 0;
  return;
}

