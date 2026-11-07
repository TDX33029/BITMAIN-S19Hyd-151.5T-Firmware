// FUN_00a8cda4 @ 00a8cda4 size=1492 calls_out=8 calls_in=7
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a8cda4(int *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 in_stack_00000000;
  int local_250 [70];
  int *local_138;
  undefined1 local_134;
  
  *(undefined1 *)(param_1 + 0x11) = 1;
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_00a8cdd4;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_00a8cdd4:
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
    local_134 = (undefined1)uVar16;
    local_138 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_138,&DAT_0186dc88,&DAT_01886a4c);
  }
  uVar3 = param_1[0xb];
  if (uVar3 != 0x80000000) {
    uVar6 = param_1[10];
    if ((uint)param_1[5] < uVar6) {
      do {
        uVar3 = param_1[0xb];
        if (param_1[0xe] == 0) goto LAB_00a8d078;
        puVar7 = (undefined4 *)(param_1[0xc] + param_1[0xd] * 8);
        piVar12 = (int *)*puVar7;
        iVar8 = puVar7[1];
        param_1[0xe] = param_1[0xe] + -1;
        uVar5 = param_1[0xd] + 1;
        uVar9 = *(uint *)(iVar8 + 8);
        uVar11 = uVar5 - uVar3;
        if (uVar5 < uVar3) {
          uVar11 = uVar5;
        }
        param_1[0xd] = uVar11;
        uVar3 = uVar9;
        if (uVar9 < 9) {
          uVar3 = 8;
        }
        uVar3 = uVar3 - 1 & 0xfffffff8;
        puVar15 = (uint *)((int)piVar12 + uVar3 + 8);
        if ((*puVar15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ab4);
        }
        piVar14 = (int *)((int)piVar12 + uVar3 + 0x10);
        do {
          if (*piVar14 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar14);
            goto LAB_00a8ced4;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar2);
        *piVar14 = 1;
        DataMemoryBarrier(0xb);
LAB_00a8ced4:
        uVar11 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar1 = *(char *)((int)piVar12 + uVar3 + 0x14);
        }
        else {
          uVar11 = FUN_015bf3f8();
          uVar11 = uVar11 ^ 1;
          cVar1 = *(char *)((int)piVar12 + uVar3 + 0x14);
        }
        if (cVar1 != '\0') {
          local_134 = (undefined1)uVar11;
          local_138 = piVar14;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_138,&DAT_0186dc18,&DAT_01886a94);
        }
        iVar10 = *(int *)((int)piVar12 + uVar3 + 0x18);
        *(undefined4 *)((int)piVar12 + uVar3 + 0x18) = 3;
        if (iVar10 == 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ac4);
        }
        FUN_016dd1aa(&local_138,(int)piVar12 + uVar3 + 0x1c,0x114);
        if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
          *(undefined1 *)((int)piVar12 + uVar3 + 0x14) = 1;
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
        local_250[0] = iVar10;
        FUN_016dd1aa((uint)local_250 | 4,&local_138,0x114);
        (**(code **)(iVar8 + 0xc))((int)puVar15 + (uVar9 - 1 & 0xfffffed8) + 0x128);
        uVar3 = param_1[2];
        uVar11 = param_1[5];
        if (uVar11 == uVar3) {
          FUN_00aa2c5c(param_1 + 2);
          uVar3 = param_1[2];
          uVar11 = param_1[5];
        }
        uVar5 = param_1[4] + uVar11;
        param_1[5] = uVar11 + 1;
        uVar11 = uVar5 - uVar3;
        if (uVar5 < uVar3) {
          uVar11 = uVar5;
        }
        FUN_016dd1aa(uVar11 * 0x118 + param_1[3],local_250,0x118);
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aac364(piVar12,iVar8);
        }
      } while ((uint)param_1[5] < uVar6);
      uVar3 = param_1[0xb];
LAB_00a8d078:
      if (uVar3 == 0x80000000) goto LAB_00a8d170;
    }
    uVar6 = param_1[0xe];
    if (uVar6 != 0) {
      uVar9 = param_1[0xd];
      iVar8 = param_1[0xc];
      uVar11 = 0;
      uVar5 = uVar3;
      if (uVar9 < uVar3) {
        uVar5 = 0;
      }
      uVar13 = uVar9 - uVar5;
      iVar10 = uVar6 - (uVar3 - uVar13);
      if (uVar6 < uVar3 - uVar13 || iVar10 == 0) {
        uVar3 = uVar13 + uVar6;
      }
      else {
        uVar11 = iVar10 * 8;
      }
      if (uVar3 != uVar13) {
        iVar10 = uVar3 - uVar13;
        piVar12 = (int *)(iVar8 + uVar9 * 8 + uVar5 * -8 + 4);
        do {
          uVar3 = *(uint *)(*piVar12 + 8);
          uVar6 = uVar3 - 1;
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          (**(code **)(*piVar12 + 0xc))
                    (piVar12[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar6 & 0xfffffed8) + 0x130);
          piVar12 = piVar12 + 2;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (uVar11 != 0) {
        piVar12 = (int *)(iVar8 + 4);
        uVar11 = uVar11 >> 3;
        do {
          uVar3 = *(uint *)(*piVar12 + 8);
          uVar6 = uVar3 - 1;
          if (uVar3 < 9) {
            uVar3 = 8;
          }
          (**(code **)(*piVar12 + 0xc))
                    (piVar12[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar6 & 0xfffffed8) + 0x130);
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
  }
LAB_00a8d170:
  uVar3 = param_1[9];
  if (uVar3 != 0) {
    uVar11 = param_1[6];
    uVar6 = 0;
    uVar9 = param_1[8];
    iVar8 = param_1[7];
    uVar5 = uVar11;
    if (uVar9 < uVar11) {
      uVar5 = 0;
    }
    uVar13 = uVar9 - uVar5;
    iVar10 = uVar3 - (uVar11 - uVar13);
    if (uVar3 < uVar11 - uVar13 || iVar10 == 0) {
      uVar11 = uVar13 + uVar3;
    }
    else {
      uVar6 = iVar10 * 8;
    }
    if (uVar11 != uVar13) {
      iVar10 = uVar11 - uVar13;
      piVar12 = (int *)(iVar8 + uVar9 * 8 + uVar5 * -8 + 4);
      do {
        uVar3 = *(uint *)(*piVar12 + 8);
        uVar11 = uVar3 - 1;
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        (**(code **)(*piVar12 + 0xc))
                  (piVar12[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar11 & 0xfffffed8) + 0x130);
        piVar12 = piVar12 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (uVar6 != 0) {
      piVar12 = (int *)(iVar8 + 4);
      uVar6 = uVar6 >> 3;
      do {
        uVar3 = *(uint *)(*piVar12 + 8);
        uVar11 = uVar3 - 1;
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        (**(code **)(*piVar12 + 0xc))
                  (piVar12[-1] + (uVar3 - 1 & 0xfffffff8) + (uVar11 & 0xfffffed8) + 0x130);
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  if (((uVar16 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar8 == 2) {
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

