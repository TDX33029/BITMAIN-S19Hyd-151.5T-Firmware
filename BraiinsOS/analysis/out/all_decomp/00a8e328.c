// FUN_00a8e328 @ 00a8e328 size=1420 calls_out=7 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a8e328(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 in_stack_00000000;
  int *local_2c;
  undefined1 local_28;
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_00a8e358;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_00a8e358:
  uVar16 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    uVar16 = FUN_015bf3f8();
    uVar16 = uVar16 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar16;
    local_2c = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0186dc68,&DAT_01886a4c);
  }
  uVar3 = param_1[0xb];
  if (uVar3 != 0x80000000) {
    uVar7 = param_1[10];
    if ((uint)param_1[5] < uVar7) {
      do {
        uVar3 = param_1[0xb];
        if (param_1[0xe] == 0) goto LAB_00a8e5cc;
        puVar8 = (undefined4 *)(param_1[0xc] + param_1[0xd] * 8);
        piVar14 = (int *)*puVar8;
        iVar9 = puVar8[1];
        param_1[0xe] = param_1[0xe] + -1;
        uVar5 = param_1[0xd] + 1;
        uVar17 = *(uint *)(iVar9 + 8);
        uVar18 = uVar5 - uVar3;
        if (uVar5 < uVar3) {
          uVar18 = uVar5;
        }
        param_1[0xd] = uVar18;
        uVar3 = uVar17;
        if (uVar17 < 5) {
          uVar3 = 4;
        }
        uVar3 = uVar3 - 1 & 0xfffffff8;
        piVar15 = (int *)((int)piVar14 + uVar3 + 8);
        if (*piVar15 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ab4);
        }
        piVar13 = (int *)((int)piVar14 + uVar3 + 0xc);
        do {
          if (*piVar13 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar13);
            goto LAB_00a8e44c;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar2);
        *piVar13 = 1;
        DataMemoryBarrier(0xb);
LAB_00a8e44c:
        uVar18 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar1 = *(char *)((int)piVar14 + uVar3 + 0x10);
        }
        else {
          uVar18 = FUN_015bf3f8();
          uVar18 = uVar18 ^ 1;
          cVar1 = *(char *)((int)piVar14 + uVar3 + 0x10);
        }
        if (cVar1 != '\0') {
          local_28 = (undefined1)uVar18;
          local_2c = piVar13;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0186dc48,&DAT_01886a94);
        }
        iVar10 = *(int *)((int)piVar14 + uVar3 + 0x14);
        iVar6 = *(int *)((int)piVar14 + uVar3 + 0x18);
        iVar11 = *(int *)((int)piVar14 + uVar3 + 0x1c);
        *(undefined4 *)((int)piVar14 + uVar3 + 0x14) = 0x80000000;
        if (iVar10 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ac4);
        }
        if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
          *(undefined1 *)((int)piVar14 + uVar3 + 0x10) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar13;
          bVar2 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar2);
        *piVar13 = 0;
        if (iVar4 == 2) {
          FUN_016d6968(0xf0,piVar13,0x81,1);
        }
        (**(code **)(iVar9 + 0xc))((int)piVar15 + (uVar17 - 1 & 0xffffffe8) + 0x18);
        uVar3 = param_1[2];
        uVar18 = param_1[5];
        if (uVar18 == uVar3) {
          FUN_01561020(param_1 + 2);
          uVar3 = param_1[2];
          uVar18 = param_1[5];
        }
        uVar5 = param_1[4] + uVar18;
        param_1[5] = uVar18 + 1;
        uVar18 = uVar5 - uVar3;
        if (uVar5 < uVar3) {
          uVar18 = uVar5;
        }
        piVar15 = (int *)(param_1[3] + uVar18 * 0xc);
        *piVar15 = iVar10;
        piVar15[1] = iVar6;
        piVar15[2] = iVar11;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar14;
          bVar2 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar2);
        *piVar14 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aac624(piVar14,iVar9);
        }
      } while ((uint)param_1[5] < uVar7);
      uVar3 = param_1[0xb];
LAB_00a8e5cc:
      if (uVar3 == 0x80000000) goto LAB_00a8e6b8;
    }
    uVar7 = param_1[0xe];
    if (uVar7 != 0) {
      iVar9 = param_1[0xc];
      uVar17 = param_1[0xd];
      uVar18 = 0;
      uVar5 = uVar3;
      if (uVar17 < uVar3) {
        uVar5 = 0;
      }
      uVar12 = uVar17 - uVar5;
      iVar6 = uVar7 - (uVar3 - uVar12);
      if (uVar7 < uVar3 - uVar12 || iVar6 == 0) {
        uVar3 = uVar12 + uVar7;
      }
      else {
        uVar18 = iVar6 * 8;
      }
      if (uVar3 != uVar12) {
        iVar6 = uVar3 - uVar12;
        piVar14 = (int *)(iVar9 + uVar17 * 8 + uVar5 * -8 + 4);
        do {
          uVar3 = *(uint *)(*piVar14 + 8);
          uVar7 = uVar3 - 1;
          if (uVar3 < 5) {
            uVar3 = 4;
          }
          (**(code **)(*piVar14 + 0xc))
                    (piVar14[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar7 & 0xffffffe8) + 0x20);
          piVar14 = piVar14 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (uVar18 != 0) {
        piVar14 = (int *)(iVar9 + 4);
        uVar18 = uVar18 >> 3;
        do {
          uVar3 = *(uint *)(*piVar14 + 8);
          uVar7 = uVar3 - 1;
          if (uVar3 < 5) {
            uVar3 = 4;
          }
          (**(code **)(*piVar14 + 0xc))
                    (piVar14[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar7 & 0xffffffe8) + 0x20);
          piVar14 = piVar14 + 2;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
  }
LAB_00a8e6b8:
  uVar3 = param_1[9];
  if (uVar3 != 0) {
    uVar7 = param_1[6];
    uVar5 = param_1[8];
    iVar9 = param_1[7];
    uVar18 = uVar7;
    if (uVar5 < uVar7) {
      uVar18 = 0;
    }
    uVar12 = uVar5 - uVar18;
    iVar6 = uVar3 - (uVar7 - uVar12);
    uVar17 = 0;
    if (uVar3 < uVar7 - uVar12 || iVar6 == 0) {
      uVar7 = uVar12 + uVar3;
    }
    else {
      uVar17 = iVar6 * 8;
    }
    if (uVar7 != uVar12) {
      iVar6 = uVar7 - uVar12;
      piVar14 = (int *)(iVar9 + uVar5 * 8 + uVar18 * -8 + 4);
      do {
        uVar3 = *(uint *)(*piVar14 + 8);
        uVar7 = uVar3 - 1;
        if (uVar3 < 5) {
          uVar3 = 4;
        }
        (**(code **)(*piVar14 + 0xc))
                  (piVar14[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar7 & 0xffffffe8) + 0x20);
        piVar14 = piVar14 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (uVar17 != 0) {
      piVar14 = (int *)(iVar9 + 4);
      uVar17 = uVar17 >> 3;
      do {
        uVar3 = *(uint *)(*piVar14 + 8);
        uVar7 = uVar3 - 1;
        if (uVar3 < 5) {
          uVar3 = 4;
        }
        (**(code **)(*piVar14 + 0xc))
                  (piVar14[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar7 & 0xffffffe8) + 0x20);
        piVar14 = piVar14 + 2;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (((uVar16 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar9 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

