// FUN_0124fb38 @ 0124fb38 size=532 calls_out=5 calls_in=3
// strings: internal error: entered unreachable code: invalid Once state

void FUN_0124fb38(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = param_1[1];
  iVar3 = param_1[3];
  *param_1 = 4;
  param_1[1] = 4;
  param_1[2] = 0;
  param_1[3] = 4;
  iVar6 = 0;
  do {
    if (iVar6 == ((uint)(iVar3 - iVar10) >> 2) * -0x55555555) {
      return;
    }
    iVar11 = iVar6 + 1;
    piVar7 = (int *)(iVar10 + iVar6 * 0xc);
    iVar6 = piVar7[2];
    if (iVar6 != 0) {
      iVar8 = piVar7[1];
      iVar9 = 0;
      do {
        piVar5 = *(int **)(iVar8 + iVar9 * 4);
        iVar9 = iVar9 + 1;
        if ((char)piVar5[0x16] != '\x06') {
          FUN_01157e90();
        }
        FUN_01157f54(piVar5 + 8);
        piVar2 = (int *)piVar5[0x1c];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(piVar5[0x1c],piVar5[0x1d]);
        }
        piVar2 = (int *)piVar5[0x1e];
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(piVar5[0x1e],piVar5[0x1f]);
        }
        if (*piVar5 != 0) {
          if (*piVar5 == 1) {
            piVar2 = (int *)piVar5[1];
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar2;
              bVar1 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar1);
            *piVar2 = iVar4 + -1;
          }
          else {
            piVar2 = (int *)piVar5[4];
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar2;
              bVar1 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar1);
            *piVar2 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0143daec(piVar5[4],piVar5[5]);
            }
            piVar2 = (int *)piVar5[6];
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar2;
              bVar1 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar1);
            *piVar2 = iVar4 + -1;
            if (iVar4 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0143daec(piVar5[6],piVar5[7]);
            }
            if (piVar5[3] - 2U < 2) goto LAB_0124fbac;
            if (piVar5[3] != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                           &DAT_018a9874);
            }
            piVar2 = (int *)piVar5[1];
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar2;
              bVar1 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar1);
            *piVar2 = iVar4 + -1;
          }
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(piVar5[1],piVar5[2]);
          }
        }
LAB_0124fbac:
        thunk_FUN_016d3fb4(piVar5);
      } while (iVar9 != iVar6);
    }
    iVar6 = iVar11;
    if (*piVar7 != 0) {
      thunk_FUN_016d3fb4(piVar7[1]);
    }
  } while( true );
}

