// FUN_008ae4e4 @ 008ae4e4 size=1512 calls_out=8 calls_in=1
// strings: 

void FUN_008ae4e4(int param_1)

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
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  undefined4 in_stack_00000000;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *local_38;
  undefined1 local_34;
  
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
      goto LAB_008ae538;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
LAB_008ae538:
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
    local_34 = (undefined1)uVar16;
    local_38 = piVar3;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_01863b5c,&DAT_01886a4c);
  }
  uVar4 = *(uint *)(param_1 + 0x34);
  if (uVar4 != 0x80000000) {
    uVar8 = *(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x1c) < uVar8) {
      do {
        uVar4 = *(uint *)(param_1 + 0x34);
        if (*(int *)(param_1 + 0x40) == 0) goto LAB_008ae7d8;
        puVar9 = (undefined4 *)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) * 8);
        piVar13 = (int *)*puVar9;
        iVar6 = puVar9[1];
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        uVar7 = *(int *)(param_1 + 0x3c) + 1;
        uVar12 = *(uint *)(iVar6 + 8);
        uVar11 = uVar7 - uVar4;
        if (uVar7 < uVar4) {
          uVar11 = uVar7;
        }
        *(uint *)(param_1 + 0x3c) = uVar11;
        uVar4 = uVar12;
        if (uVar12 < 5) {
          uVar4 = 4;
        }
        uVar4 = uVar4 - 1 & 0xfffffff8;
        piVar15 = (int *)((int)piVar13 + uVar4 + 8);
        if (*piVar15 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ab4);
        }
        piVar14 = (int *)((int)piVar13 + uVar4 + 0xc);
        do {
          if (*piVar14 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar14);
            goto LAB_008ae640;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar2);
        *piVar14 = 1;
        DataMemoryBarrier(0xb);
LAB_008ae640:
        uVar11 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar1 = *(char *)((int)piVar13 + uVar4 + 0x10);
        }
        else {
          uVar11 = FUN_015bf3f8();
          uVar11 = uVar11 ^ 1;
          cVar1 = *(char *)((int)piVar13 + uVar4 + 0x10);
        }
        if (cVar1 != '\0') {
          local_34 = (undefined1)uVar11;
          local_38 = piVar14;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_01863b3c,&DAT_01886a94);
        }
        cVar1 = *(char *)((int)piVar13 + uVar4 + 0x14);
        *(undefined1 *)((int)piVar13 + uVar4 + 0x14) = 5;
        if (cVar1 == '\x05') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886ac4);
        }
        FUN_016dd1aa(&local_38,(int)piVar13 + uVar4 + 0x15,0x13);
        if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
          *(undefined1 *)((int)piVar13 + uVar4 + 0x10) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar14;
          bVar2 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar2);
        *piVar14 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar14,0x81,1);
        }
        local_50 = CONCAT31(local_50._1_3_,cVar1);
        FUN_016dd1aa((uint)&local_50 | 1,&local_38,0x13);
        (**(code **)(iVar6 + 0xc))((int)piVar15 + (uVar12 - 1 & 0xffffffe0) + 0x20);
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar11 = *(uint *)(param_1 + 0x1c);
        if (uVar11 == uVar4) {
          FUN_010ff4f0(param_1 + 0x10);
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar11 = *(uint *)(param_1 + 0x1c);
        }
        uVar7 = *(int *)(param_1 + 0x18) + uVar11;
        *(uint *)(param_1 + 0x1c) = uVar11 + 1;
        uVar11 = uVar7 - uVar4;
        if (uVar7 < uVar4) {
          uVar11 = uVar7;
        }
        puVar9 = (undefined4 *)(*(int *)(param_1 + 0x14) + uVar11 * 0x14);
        *puVar9 = local_50;
        puVar9[1] = uStack_4c;
        puVar9[2] = uStack_48;
        puVar9[3] = uStack_44;
        puVar9[4] = uStack_40;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar13;
          bVar2 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar2);
        *piVar13 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_010ff130(piVar13,iVar6);
        }
      } while (*(uint *)(param_1 + 0x1c) < uVar8);
      uVar4 = *(uint *)(param_1 + 0x34);
LAB_008ae7d8:
      if (uVar4 == 0x80000000) goto LAB_008ae8d0;
    }
    uVar8 = *(uint *)(param_1 + 0x40);
    if (uVar8 != 0) {
      iVar6 = *(int *)(param_1 + 0x38);
      uVar7 = *(uint *)(param_1 + 0x3c);
      uVar11 = uVar4;
      if (uVar7 < uVar4) {
        uVar11 = 0;
      }
      uVar10 = uVar7 - uVar11;
      uVar12 = 0;
      iVar5 = uVar8 - (uVar4 - uVar10);
      if (uVar8 < uVar4 - uVar10 || iVar5 == 0) {
        uVar4 = uVar10 + uVar8;
      }
      else {
        uVar12 = iVar5 * 8;
      }
      if (uVar4 != uVar10) {
        iVar5 = uVar4 - uVar10;
        piVar13 = (int *)(iVar6 + uVar7 * 8 + uVar11 * -8 + 4);
        do {
          uVar4 = *(uint *)(*piVar13 + 8);
          uVar8 = uVar4 - 1;
          if (uVar4 < 5) {
            uVar4 = 4;
          }
          (**(code **)(*piVar13 + 0xc))
                    (piVar13[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar8 & 0xffffffe0) + 0x28);
          piVar13 = piVar13 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (uVar12 != 0) {
        piVar13 = (int *)(iVar6 + 4);
        uVar12 = uVar12 >> 3;
        do {
          uVar4 = *(uint *)(*piVar13 + 8);
          uVar8 = uVar4 - 1;
          if (uVar4 < 5) {
            uVar4 = 4;
          }
          (**(code **)(*piVar13 + 0xc))
                    (piVar13[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar8 & 0xffffffe0) + 0x28);
          piVar13 = piVar13 + 2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
  }
LAB_008ae8d0:
  uVar4 = *(uint *)(param_1 + 0x2c);
  if (uVar4 != 0) {
    uVar8 = *(uint *)(param_1 + 0x20);
    uVar7 = *(uint *)(param_1 + 0x28);
    iVar6 = *(int *)(param_1 + 0x24);
    uVar11 = uVar8;
    if (uVar7 < uVar8) {
      uVar11 = 0;
    }
    uVar10 = uVar7 - uVar11;
    iVar5 = uVar4 - (uVar8 - uVar10);
    uVar12 = 0;
    if (uVar4 < uVar8 - uVar10 || iVar5 == 0) {
      uVar8 = uVar10 + uVar4;
    }
    else {
      uVar12 = iVar5 * 8;
    }
    if (uVar8 != uVar10) {
      iVar5 = uVar8 - uVar10;
      piVar13 = (int *)(iVar6 + uVar7 * 8 + uVar11 * -8 + 4);
      do {
        uVar4 = *(uint *)(*piVar13 + 8);
        uVar8 = uVar4 - 1;
        if (uVar4 < 5) {
          uVar4 = 4;
        }
        (**(code **)(*piVar13 + 0xc))
                  (piVar13[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar8 & 0xffffffe0) + 0x28);
        piVar13 = piVar13 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (uVar12 != 0) {
      piVar13 = (int *)(iVar6 + 4);
      uVar12 = uVar12 >> 3;
      do {
        uVar4 = *(uint *)(*piVar13 + 8);
        uVar8 = uVar4 - 1;
        if (uVar4 < 5) {
          uVar4 = 4;
        }
        (**(code **)(*piVar13 + 0xc))
                  (piVar13[-1] + (uVar4 - 1 & 0xfffffff8) + (uVar8 & 0xffffffe0) + 0x28);
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
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

