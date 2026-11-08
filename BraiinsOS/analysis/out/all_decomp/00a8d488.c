// FUN_00a8d488 @ 00a8d488 size=1480 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a8d488(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  undefined4 in_stack_00000000;
  int local_1c0;
  int local_1bc;
  undefined1 auStack_1b8 [200];
  int *local_f0;
  undefined1 local_ec;
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_00a8d4b8;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_00a8d4b8:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[1];
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    cVar1 = (char)param_1[1];
  }
  if (cVar1 != '\0') {
    local_ec = (undefined1)uVar7;
    local_f0 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_f0,&DAT_0186dc78,&DAT_01886a4c);
  }
  uVar3 = param_1[0xb];
  if (uVar3 != 0x80000000) {
    uVar8 = param_1[10];
    if ((uint)param_1[5] < uVar8) {
      do {
        uVar3 = param_1[0xb];
        if (param_1[0xe] == 0) goto LAB_00a8d76c;
        puVar9 = (undefined4 *)(param_1[0xc] + param_1[0xd] * 8);
        piVar13 = (int *)*puVar9;
        iVar16 = puVar9[1];
        param_1[0xe] = param_1[0xe] + -1;
        uVar5 = param_1[0xd] + 1;
        uVar10 = *(uint *)(iVar16 + 8);
        uVar12 = uVar5 - uVar3;
        if (uVar5 < uVar3) {
          uVar12 = uVar5;
        }
        param_1[0xd] = uVar12;
        uVar3 = 8;
        if (8 < uVar10) {
          uVar3 = uVar10;
        }
        uVar3 = uVar3 - 1 & 0xfffffff8;
        puVar15 = (uint *)((int)piVar13 + uVar3 + 8);
        if ((*puVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ab4);
        }
        piVar14 = (int *)((int)piVar13 + uVar3 + 0x10);
        do {
          if (*piVar14 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar14);
            goto LAB_00a8d5b8;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar2);
        *piVar14 = 1;
        DataMemoryBarrier(0xb);
LAB_00a8d5b8:
        uVar12 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar1 = *(char *)((int)piVar13 + uVar3 + 0x14);
        }
        else {
          uVar12 = FUN_015bf3f8();
          uVar12 = uVar12 ^ 1;
          cVar1 = *(char *)((int)piVar13 + uVar3 + 0x14);
        }
        if (cVar1 != '\0') {
          local_ec = (undefined1)uVar12;
          local_f0 = piVar14;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_f0,&DAT_0186dc28,&DAT_01886a94);
        }
        iVar17 = *(int *)((int)piVar13 + uVar3 + 0x18);
        iVar6 = *(int *)((int)piVar13 + uVar3 + 0x1c);
        *(undefined4 *)((int)piVar13 + uVar3 + 0x18) = 8;
        *(undefined4 *)((int)piVar13 + uVar3 + 0x1c) = 0;
        if (iVar17 == 8 && iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ac4);
        }
        FUN_016dd1aa(&local_f0,(int)piVar13 + uVar3 + 0x20,200);
        if (((uVar12 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
          *(undefined1 *)((int)piVar13 + uVar3 + 0x14) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar14;
          bVar2 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar2);
        *piVar14 = 0;
        if (iVar4 == 2) {
          FUN_016d6968(0xf0,piVar14,0x81,1);
        }
        local_1c0 = iVar17;
        local_1bc = iVar6;
        FUN_016dd1aa(auStack_1b8,&local_f0,200);
        (**(code **)(iVar16 + 0xc))((int)puVar15 + (uVar10 - 1 & 0xffffff20) + 0xe0);
        uVar3 = param_1[2];
        uVar12 = param_1[5];
        if (uVar12 == uVar3) {
          FUN_00aa25c8(param_1 + 2);
          uVar3 = param_1[2];
          uVar12 = param_1[5];
        }
        uVar5 = param_1[4] + uVar12;
        param_1[5] = uVar12 + 1;
        uVar12 = uVar5 - uVar3;
        if (uVar5 < uVar3) {
          uVar12 = uVar5;
        }
        FUN_016dd1aa(uVar12 * 0xd0 + param_1[3],&local_1c0,0xd0);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar13;
          bVar2 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar2);
        *piVar13 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aabde0(piVar13,iVar16);
        }
      } while ((uint)param_1[5] < uVar8);
      uVar3 = param_1[0xb];
LAB_00a8d76c:
      if (uVar3 == 0x80000000) goto LAB_00a8d854;
    }
    uVar8 = param_1[0xe];
    if (uVar8 != 0) {
      iVar16 = param_1[0xc];
      uVar10 = param_1[0xd];
      uVar12 = 0;
      uVar5 = uVar3;
      if (uVar10 < uVar3) {
        uVar5 = 0;
      }
      uVar11 = uVar10 - uVar5;
      iVar6 = uVar8 - (uVar3 - uVar11);
      if (uVar8 < uVar3 - uVar11 || iVar6 == 0) {
        uVar3 = uVar11 + uVar8;
      }
      else {
        uVar12 = iVar6 * 8;
      }
      if (uVar3 != uVar11) {
        iVar6 = uVar3 - uVar11;
        piVar13 = (int *)(iVar16 + uVar10 * 8 + uVar5 * -8 + 4);
        do {
          uVar3 = *(uint *)(*piVar13 + 8);
          uVar8 = uVar3 - 1;
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          (**(code **)(*piVar13 + 0xc))
                    (piVar13[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar8 & 0xffffff20) + 0xe8);
          piVar13 = piVar13 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (uVar12 != 0) {
        piVar13 = (int *)(iVar16 + 4);
        uVar12 = uVar12 >> 3;
        do {
          uVar3 = *(uint *)(*piVar13 + 8);
          uVar8 = uVar3 - 1;
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          (**(code **)(*piVar13 + 0xc))
                    (piVar13[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar8 & 0xffffff20) + 0xe8);
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
  }
LAB_00a8d854:
  uVar3 = param_1[9];
  if (uVar3 != 0) {
    uVar8 = param_1[6];
    uVar5 = param_1[8];
    iVar16 = param_1[7];
    uVar12 = uVar8;
    if (uVar5 < uVar8) {
      uVar12 = 0;
    }
    uVar11 = uVar5 - uVar12;
    iVar6 = uVar3 - (uVar8 - uVar11);
    uVar10 = 0;
    if (uVar3 < uVar8 - uVar11 || iVar6 == 0) {
      uVar8 = uVar11 + uVar3;
    }
    else {
      uVar10 = iVar6 * 8;
    }
    if (uVar8 != uVar11) {
      iVar6 = uVar8 - uVar11;
      piVar13 = (int *)(iVar16 + uVar5 * 8 + uVar12 * -8 + 4);
      do {
        uVar3 = *(uint *)(*piVar13 + 8);
        uVar8 = uVar3 - 1;
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        (**(code **)(*piVar13 + 0xc))
                  (piVar13[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar8 & 0xffffff20) + 0xe8);
        piVar13 = piVar13 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (uVar10 != 0) {
      piVar13 = (int *)(iVar16 + 4);
      uVar10 = uVar10 >> 3;
      do {
        uVar3 = *(uint *)(*piVar13 + 8);
        uVar8 = uVar3 - 1;
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        (**(code **)(*piVar13 + 0xc))
                  (piVar13[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar8 & 0xffffff20) + 0xe8);
        piVar13 = piVar13 + 2;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar16 = FUN_015bf3f8(), iVar16 == 0)
     ) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar16 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar16 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

