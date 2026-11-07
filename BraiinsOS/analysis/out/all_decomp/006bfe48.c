// FUN_006bfe48 @ 006bfe48 size=960 calls_out=11 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_006bfe48(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *local_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  
  iVar9 = *param_2;
  if (iVar9 == 0) {
    *param_1 = 0;
    return;
  }
  while( true ) {
    piVar8 = *(int **)(iVar9 + 0xc);
    piVar6 = (int *)piVar8[5];
    DataMemoryBarrier(0xb);
    if (piVar6 != (int *)0x0) break;
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar9 + 8) == piVar8) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x1c) != 0) {
        *param_1 = 2;
        return;
      }
      piVar6 = (int *)*param_2;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0113b314(*param_2);
        }
      }
      *param_1 = 0;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(int **)(iVar9 + 0xc) = piVar6;
  if (*piVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  local_30 = (int *)piVar6[1];
  local_2c = piVar6[2];
  iStack_28 = piVar6[3];
  iStack_24 = piVar6[4];
  *piVar6 = 0;
  if (*piVar8 != 0) {
    if (piVar8[1] == 0) {
      piVar6 = (int *)piVar8[2];
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(piVar8[2],piVar8[3]);
      }
    }
    else {
      piVar6 = (int *)piVar8[4];
      if (((uint)piVar6 & 1) == 0) {
        piVar7 = piVar6 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          if (*piVar6 != 0) {
            thunk_FUN_016d3fb4(piVar6[1]);
          }
          goto LAB_006bffb4;
        }
      }
      else if (piVar8[3] + ((uint)piVar6 >> 5) != 0) {
        piVar6 = (int *)(piVar8[1] - ((uint)piVar6 >> 5));
LAB_006bffb4:
        thunk_FUN_016d3fb4(piVar6);
      }
    }
  }
  thunk_FUN_016d3fb4(piVar8);
  iVar5 = iStack_24;
  iVar4 = iStack_28;
  iVar9 = local_2c;
  piVar6 = local_30;
  iVar10 = *param_2;
  if (iVar10 != 0) {
    piVar8 = (int *)FUN_00d3f614(iVar10 + 0x10);
    if (piVar8 != (int *)0x0) {
      piVar7 = piVar8 + 2;
      do {
        if (*piVar7 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar7);
          goto LAB_006c0014;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = 1;
      DataMemoryBarrier(0xb);
LAB_006c0014:
      uVar11 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)piVar8[3];
      }
      else {
        uVar11 = FUN_015bf3f8();
        uVar11 = uVar11 ^ 1;
        cVar1 = (char)piVar8[3];
      }
      if (cVar1 != '\0') {
        uVar3 = (uint)local_2c >> 8;
        local_2c = CONCAT31((int3)uVar3,(char)uVar11);
        local_30 = piVar7;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01858988,&DAT_018a4b10);
      }
      iVar10 = piVar8[4];
      *(undefined1 *)(piVar8 + 6) = 0;
      piVar8[4] = 0;
      if (iVar10 != 0) {
        (**(code **)(iVar10 + 4))(piVar8[5]);
      }
      if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar10 = FUN_015bf3f8(), iVar10 == 0)) {
        *(undefined1 *)(piVar8 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = 0;
      if (iVar10 == 2) {
        FUN_016d6968(0xf0,piVar7,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar8);
      }
      iVar10 = *param_2;
      if (iVar10 == 0) goto LAB_006c00f0;
    }
    piVar8 = (int *)(iVar10 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = *piVar8 + -1;
    DataMemoryBarrier(0xb);
  }
LAB_006c00f0:
  *param_1 = 1;
  param_1[1] = piVar6;
  param_1[2] = iVar9;
  param_1[3] = iVar4;
  param_1[4] = iVar5;
  return;
}

