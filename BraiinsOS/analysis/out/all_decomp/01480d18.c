// FUN_01480d18 @ 01480d18 size=792 calls_out=10 calls_in=1
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_01480d18(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *local_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  
  iVar8 = *param_2;
  if (iVar8 == 0) {
    *param_1 = 0;
    return;
  }
  while( true ) {
    piVar10 = *(int **)(iVar8 + 0xc);
    piVar6 = (int *)piVar10[5];
    DataMemoryBarrier(0xb);
    if (piVar6 != (int *)0x0) break;
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar8 + 8) == piVar10) {
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar8 + 0x1c) != 0) {
        *param_1 = 2;
        return;
      }
      piVar6 = (int *)*param_2;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a5698(*param_2);
        }
      }
      *param_1 = 0;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(int **)(iVar8 + 0xc) = piVar6;
  if (*piVar10 != 0) {
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
  iVar7 = 0;
  if (*piVar10 != 0) {
    iVar7 = piVar10[1];
  }
  if (*piVar10 != 0 && iVar7 != 0) {
    (**(code **)(iVar7 + 0x10))(piVar10 + 4,piVar10[2],piVar10[3]);
  }
  thunk_FUN_016d3fb4(piVar10);
  iVar5 = iStack_24;
  iVar4 = iStack_28;
  iVar7 = local_2c;
  piVar6 = local_30;
  piVar10 = (int *)FUN_00d3f614(iVar8 + 0x10);
  if (piVar10 != (int *)0x0) {
    piVar11 = piVar10 + 2;
    do {
      if (*piVar11 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar11);
        goto LAB_01480e0c;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = 1;
    DataMemoryBarrier(0xb);
LAB_01480e0c:
    uVar9 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = (char)piVar10[3];
    }
    else {
      uVar9 = FUN_015bf3f8();
      uVar9 = uVar9 ^ 1;
      cVar1 = (char)piVar10[3];
    }
    if (cVar1 != '\0') {
      uVar3 = (uint)local_2c >> 8;
      local_2c = CONCAT31((int3)uVar3,(char)uVar9);
      local_30 = piVar11;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_018a4bd0,&DAT_018a4b10);
    }
    iVar8 = piVar10[4];
    *(undefined1 *)(piVar10 + 6) = 0;
    piVar10[4] = 0;
    if (iVar8 != 0) {
      (**(code **)(iVar8 + 4))(piVar10[5]);
    }
    if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0)
       ) {
      *(undefined1 *)(piVar10 + 3) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = 0;
    if (iVar8 == 2) {
      FUN_016d6968(0xf0,piVar11,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b4e7c(piVar10);
    }
    iVar8 = *param_2;
    if (iVar8 == 0) goto LAB_01480ee8;
  }
  piVar10 = (int *)(iVar8 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = *piVar10 + -1;
  DataMemoryBarrier(0xb);
LAB_01480ee8:
  *param_1 = 1;
  param_1[1] = piVar6;
  param_1[2] = iVar7;
  param_1[3] = iVar4;
  param_1[4] = iVar5;
  return;
}

