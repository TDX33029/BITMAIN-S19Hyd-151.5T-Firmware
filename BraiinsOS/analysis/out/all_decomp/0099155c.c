// FUN_0099155c @ 0099155c size=1568 calls_out=8 calls_in=5
// strings: 

void FUN_0099155c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 in_stack_00000000;
  int local_250 [70];
  int *local_138;
  undefined1 local_134;
  
  piVar3 = (int *)(param_1 + 0x44);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 != 1) {
    return;
  }
  piVar3 = (int *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  do {
    if (*piVar3 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar3);
      goto LAB_009915b0;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
LAB_009915b0:
  uVar16 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  else {
    uVar16 = FUN_015bf3f8();
    uVar16 = uVar16 ^ 1;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (cVar1 != '\0') {
    local_134 = (undefined1)uVar16;
    local_138 = piVar3;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_138,&DAT_01868c98,&DAT_01886a4c);
  }
  uVar4 = *(uint *)(param_1 + 0x34);
  if (uVar4 != 0x80000000) {
    uVar8 = *(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x1c) < uVar8) {
      do {
        uVar4 = *(uint *)(param_1 + 0x34);
        if (*(int *)(param_1 + 0x40) == 0) goto LAB_00991860;
        puVar9 = (undefined4 *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) * 8);
        piVar13 = (int *)*puVar9;
        iVar6 = puVar9[1];
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        uVar7 = *(int *)(param_1 + 0x3c) + 1;
        uVar10 = *(uint *)(iVar6 + 8);
        uVar11 = uVar7 - uVar4;
        if (uVar7 < uVar4) {
          uVar11 = uVar7;
        }
        *(uint *)(param_1 + 0x3c) = uVar11;
        uVar4 = uVar10;
        if (uVar10 < 9) {
          uVar4 = 8;
        }
        uVar4 = uVar4 - 1 & 0xfffffff8;
        puVar17 = (uint *)((int)piVar13 + uVar4 + 8);
        if ((*puVar17 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ab4);
        }
        piVar15 = (int *)((int)piVar13 + uVar4 + 0x10);
        do {
          if (*piVar15 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar15);
            goto LAB_009916c4;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar2);
        *piVar15 = 1;
        DataMemoryBarrier(0xb);
LAB_009916c4:
        uVar11 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar1 = *(char *)((int)piVar13 + uVar4 + 0x14);
        }
        else {
          uVar11 = FUN_015bf3f8();
          uVar11 = uVar11 ^ 1;
          cVar1 = *(char *)((int)piVar13 + uVar4 + 0x14);
        }
        if (cVar1 != '\0') {
          local_134 = (undefined1)uVar11;
          local_138 = piVar15;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_138,&DAT_01868c88,&DAT_01886a94);
        }
        iVar12 = *(int *)((int)piVar13 + uVar4 + 0x18);
        *(undefined4 *)((int)piVar13 + uVar4 + 0x18) = 3;
        if (iVar12 == 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ac4);
        }
        FUN_016dd1aa(&local_138,(int)piVar13 + uVar4 + 0x1c,0x114);
        if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)((int)piVar13 + uVar4 + 0x14) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar15;
          bVar2 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar2);
        *piVar15 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar15,0x81,1);
        }
        local_250[0] = iVar12;
        FUN_016dd1aa((uint)local_250 | 4,&local_138,0x114);
        (**(code **)(iVar6 + 0xc))((int)puVar17 + (uVar10 - 1 & 0xfffffed8) + 0x128);
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar11 = *(uint *)(param_1 + 0x1c);
        if (uVar11 == uVar4) {
          FUN_00aa2c5c(param_1 + 0x10);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = *(uint *)(param_1 + 0x1c);
        }
        uVar7 = *(int *)(param_1 + 0x18) + uVar11;
        *(uint *)(param_1 + 0x1c) = uVar11 + 1;
        uVar11 = uVar7 - uVar4;
        if (uVar7 < uVar4) {
          uVar11 = uVar7;
        }
        FUN_016dd1aa(uVar11 * 0x118 + *(int *)(param_1 + 0x14),local_250,0x118);
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *piVar13;
          bVar2 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar2);
        *piVar13 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aac364(piVar13,iVar6);
        }
      } while (*(uint *)(param_1 + 0x1c) < uVar8);
      uVar4 = *(uint *)(param_1 + 0x34);
LAB_00991860:
      if (uVar4 == 0x80000000) goto LAB_00991964;
    }
    uVar8 = *(uint *)(param_1 + 0x40);
    if (uVar8 != 0) {
      uVar11 = 0;
      iVar6 = *(int *)(param_1 + 0x38);
      uVar10 = *(uint *)(param_1 + 0x3c);
      uVar7 = uVar4;
      if (uVar10 < uVar4) {
        uVar7 = 0;
      }
      uVar14 = uVar10 - uVar7;
      iVar12 = uVar8 - (uVar4 - uVar14);
      if (uVar8 < uVar4 - uVar14 || iVar12 == 0) {
        uVar4 = uVar14 + uVar8;
      }
      else {
        uVar11 = iVar12 * 8;
      }
      if (uVar4 != uVar14) {
        iVar12 = uVar4 - uVar14;
        piVar13 = (int *)(iVar6 + uVar10 * 8 + uVar7 * -8 + 4);
        do {
          uVar4 = *(uint *)(*piVar13 + 8);
          uVar8 = uVar4 - 1;
          if (uVar4 < 9) {
            uVar4 = 8;
          }
          (**(code **)(*piVar13 + 0xc))
                    (piVar13[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar8 & 0xfffffed8) + 0x130);
          piVar13 = piVar13 + 2;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      if (uVar11 != 0) {
        piVar13 = (int *)(iVar6 + 4);
        uVar11 = uVar11 >> 3;
        do {
          uVar4 = *(uint *)(*piVar13 + 8);
          uVar8 = uVar4 - 1;
          if (uVar4 < 9) {
            uVar4 = 8;
          }
          (**(code **)(*piVar13 + 0xc))
                    (piVar13[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar8 & 0xfffffed8) + 0x130);
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
  }
LAB_00991964:
  uVar4 = *(uint *)(param_1 + 0x2c);
  if (uVar4 != 0) {
    uVar8 = 0;
    uVar11 = *(uint *)(param_1 + 0x20);
    iVar6 = *(int *)(param_1 + 0x24);
    uVar10 = *(uint *)(param_1 + 0x28);
    uVar7 = uVar11;
    if (uVar10 < uVar11) {
      uVar7 = 0;
    }
    uVar14 = uVar10 - uVar7;
    iVar12 = uVar4 - (uVar11 - uVar14);
    if (uVar4 < uVar11 - uVar14 || iVar12 == 0) {
      uVar11 = uVar14 + uVar4;
    }
    else {
      uVar8 = iVar12 * 8;
    }
    if (uVar11 != uVar14) {
      iVar12 = uVar11 - uVar14;
      piVar13 = (int *)(iVar6 + uVar10 * 8 + uVar7 * -8 + 4);
      do {
        uVar4 = *(uint *)(*piVar13 + 8);
        uVar11 = uVar4 - 1;
        if (uVar4 < 9) {
          uVar4 = 8;
        }
        (**(code **)(*piVar13 + 0xc))
                  (piVar13[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar11 & 0xfffffed8) + 0x130);
        piVar13 = piVar13 + 2;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if (uVar8 != 0) {
      piVar13 = (int *)(iVar6 + 4);
      uVar8 = uVar8 >> 3;
      do {
        uVar4 = *(uint *)(*piVar13 + 8);
        uVar11 = uVar4 - 1;
        if (uVar4 < 9) {
          uVar4 = 8;
        }
        (**(code **)(*piVar13 + 0xc))
                  (piVar13[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar11 & 0xfffffed8) + 0x130);
        piVar13 = piVar13 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  if (((uVar16 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = 0;
  if (iVar6 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar3,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

