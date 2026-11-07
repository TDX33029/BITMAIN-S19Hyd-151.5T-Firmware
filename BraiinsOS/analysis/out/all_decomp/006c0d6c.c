// FUN_006c0d6c @ 006c0d6c size=816 calls_out=10 calls_in=2
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_006c0d6c(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *local_2c;
  undefined1 local_28;
  
  iVar7 = *param_2;
  if (iVar7 == 0) {
    *param_1 = -0x80000000;
    return;
  }
  while( true ) {
    puVar3 = *(uint **)(iVar7 + 0xc);
    piVar4 = (int *)puVar3[5];
    DataMemoryBarrier(0xb);
    if (piVar4 != (int *)0x0) break;
    DataMemoryBarrier(0xb);
    if (*(uint **)(iVar7 + 8) == puVar3) {
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x1c) != 0) {
        *param_1 = -0x7fffffff;
        return;
      }
      piVar4 = (int *)*param_2;
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0113b19c(*param_2);
        }
      }
      *param_1 = -0x80000000;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  }
  *(int **)(iVar7 + 0xc) = piVar4;
  if (*puVar3 != 0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
  }
  iVar7 = *piVar4;
  if (iVar7 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
  }
  iVar11 = piVar4[1];
  iVar5 = piVar4[2];
  iVar6 = piVar4[3];
  iVar10 = piVar4[4];
  *piVar4 = -0x80000000;
  if ((*puVar3 & 0x7fffffff) == 0) {
    thunk_FUN_016d3fb4();
    iVar8 = *param_2;
  }
  else {
    thunk_FUN_016d3fb4(puVar3[1]);
    thunk_FUN_016d3fb4(puVar3);
    iVar8 = *param_2;
  }
  if (iVar8 != 0) {
    piVar4 = (int *)FUN_00d3f614(iVar8 + 0x10);
    if (piVar4 != (int *)0x0) {
      piVar9 = piVar4 + 2;
      do {
        if (*piVar9 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar9);
          goto LAB_006c0e7c;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = 1;
      DataMemoryBarrier(0xb);
LAB_006c0e7c:
      uVar12 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar1 = (char)piVar4[3];
      }
      else {
        uVar12 = FUN_015bf3f8();
        uVar12 = uVar12 ^ 1;
        cVar1 = (char)piVar4[3];
      }
      if (cVar1 != '\0') {
        local_28 = (undefined1)uVar12;
        local_2c = piVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01858988,&DAT_018a4b10);
      }
      iVar8 = piVar4[4];
      *(undefined1 *)(piVar4 + 6) = 0;
      piVar4[4] = 0;
      if (iVar8 != 0) {
        (**(code **)(iVar8 + 4))(piVar4[5]);
      }
      if (((uVar12 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
        *(undefined1 *)(piVar4 + 3) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar9;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = 0;
      if (iVar8 == 2) {
        FUN_016d6968(0xf0,piVar9,0x81,1);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b4e7c(piVar4);
      }
      iVar8 = *param_2;
      if (iVar8 == 0) goto LAB_006c0f58;
    }
    piVar4 = (int *)(iVar8 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = *piVar4 + -1;
    DataMemoryBarrier(0xb);
  }
LAB_006c0f58:
  *param_1 = iVar7;
  param_1[1] = iVar11;
  param_1[2] = iVar5;
  param_1[3] = iVar6;
  param_1[4] = iVar10;
  return;
}

