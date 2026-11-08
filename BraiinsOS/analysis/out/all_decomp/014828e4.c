// FUN_014828e4 @ 014828e4 size=792 calls_out=10 calls_in=1
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_014828e4(undefined4 *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *local_2c;
  undefined1 local_28;
  
  iVar7 = *param_2;
  if (iVar7 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  while( true ) {
    piVar6 = *(int **)(iVar7 + 0xc);
    piVar3 = (int *)piVar6[4];
    DataMemoryBarrier(0xb);
    if (piVar3 != (int *)0x0) break;
    DataMemoryBarrier(0xb);
    if (*(int **)(iVar7 + 8) == piVar6) {
      DataMemoryBarrier(0xb);
      if (*(int *)(iVar7 + 0x1c) != 0) {
        *param_1 = 1;
        param_1[1] = 0;
        return;
      }
      piVar3 = (int *)*param_2;
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar3;
          bVar2 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar2);
        *piVar3 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014a582c(*param_2);
        }
      }
      param_1[2] = 0;
      *param_2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(int **)(iVar7 + 0xc) = piVar3;
  if (*piVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  iVar9 = *piVar3;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  iVar10 = piVar3[1];
  iVar11 = piVar3[2];
  *piVar3 = 0;
  iVar4 = piVar3[3];
  iVar5 = iVar4;
  if (*piVar6 != 0) {
    iVar5 = piVar6[1];
  }
  if (*piVar6 != 0 && iVar5 != 0) {
    thunk_FUN_016d3fb4();
  }
  thunk_FUN_016d3fb4(piVar6);
  piVar3 = (int *)FUN_00d3f614(iVar7 + 0x10);
  if (piVar3 != (int *)0x0) {
    piVar6 = piVar3 + 2;
    do {
      if (*piVar6 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar6);
        goto LAB_014829b8;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = 1;
    DataMemoryBarrier(0xb);
LAB_014829b8:
    uVar8 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = (char)piVar3[3];
    }
    else {
      uVar8 = FUN_015bf3f8();
      uVar8 = uVar8 ^ 1;
      cVar1 = (char)piVar3[3];
    }
    if (cVar1 != '\0') {
      local_28 = (undefined1)uVar8;
      local_2c = piVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_018a4bd0,&DAT_018a4b10);
    }
    iVar7 = piVar3[4];
    *(undefined1 *)(piVar3 + 6) = 0;
    piVar3[4] = 0;
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 4))(piVar3[5]);
    }
    if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)
       ) {
      *(undefined1 *)(piVar3 + 3) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = 0;
    if (iVar7 == 2) {
      FUN_016d6968(0xf0,piVar6,0x81,1);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b4e7c(piVar3);
    }
    iVar7 = *param_2;
    if (iVar7 == 0) goto LAB_01482a98;
  }
  piVar3 = (int *)(iVar7 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = *piVar3 + -1;
  DataMemoryBarrier(0xb);
LAB_01482a98:
  param_1[2] = iVar9;
  param_1[3] = iVar10;
  param_1[4] = iVar11;
  param_1[5] = iVar4;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

