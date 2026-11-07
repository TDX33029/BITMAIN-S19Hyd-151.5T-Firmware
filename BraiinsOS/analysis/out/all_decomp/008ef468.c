// FUN_008ef468 @ 008ef468 size=1048 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008ef468(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int unaff_r8;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int local_70;
  int local_68;
  int local_64;
  int *local_60;
  int local_44;
  int *local_40;
  undefined1 local_3c;
  
  piVar13 = (int *)(param_2 + 8);
  piVar17 = (int *)(param_2 + 0x10);
  do {
    if (*piVar13 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar13);
      goto LAB_008ef4ac;
    }
    bVar6 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar6);
  *piVar13 = 1;
  DataMemoryBarrier(0xb);
LAB_008ef4ac:
  uVar15 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_2 + 0xc);
  }
  else {
    uVar15 = FUN_015bf3f8();
    uVar15 = uVar15 ^ 1;
    cVar1 = *(char *)(param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_3c = (undefined1)uVar15;
    local_40 = piVar13;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00347747,0x12,&local_40,&DAT_01866e04,&DAT_01866d14);
  }
  if (*piVar17 == 2 && *(int *)(param_2 + 0x14) == 0) {
    *param_1 = 2;
    param_1[1] = 0;
  }
  else {
    uVar2 = *(undefined2 *)(param_2 + 0x66);
    uVar3 = *(undefined2 *)(param_2 + 100);
    uVar4 = *(undefined2 *)(param_2 + 0x62);
    uVar5 = *(undefined2 *)(param_2 + 0x60);
    local_44 = -0x80000000;
    if (*(int *)(param_2 + 0x30) == -0x80000000) {
      iVar11 = -0x80000000;
    }
    else {
      iVar11 = *(int *)(param_2 + 0x38);
      unaff_r8 = *(int *)(param_2 + 0x34);
      if (iVar11 == 0) {
        local_64 = 1;
      }
      else {
        local_64 = thunk_FUN_016d4a50(iVar11);
        if (local_64 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar11);
        }
      }
      FUN_016dd1aa(local_64,unaff_r8,iVar11);
    }
    if (*(int *)(param_2 + 0x3c) != -0x80000000) {
      local_44 = *(int *)(param_2 + 0x44);
      uVar8 = *(undefined4 *)(param_2 + 0x40);
      if (local_44 == 0) {
        local_68 = 1;
      }
      else {
        local_68 = thunk_FUN_016d4a50(local_44);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_44);
        }
      }
      FUN_016dd1aa(local_68,uVar8,local_44);
    }
    iVar12 = *(int *)(param_2 + 0x20);
    iVar16 = -0x80000000;
    iVar14 = *(int *)(param_2 + 0x24);
    uVar20 = *(undefined8 *)(param_2 + 0x18);
    uVar19 = *(undefined8 *)(param_2 + 0x28);
    iVar10 = *piVar17;
    iVar18 = *(int *)(param_2 + 0x14);
    if (*(int *)(param_2 + 0x48) == -0x80000000) {
      local_60 = (int *)&DAT_80000000;
      iVar7 = *(int *)(param_2 + 0x54);
    }
    else {
      piVar17 = *(int **)(param_2 + 0x50);
      uVar8 = 0;
      if ((int)piVar17 < 0) {
LAB_008ef62c:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar8,piVar17);
      }
      unaff_r8 = *(int *)(param_2 + 0x4c);
      if (piVar17 == (int *)0x0) {
        local_70 = 1;
        local_60 = (int *)0x0;
      }
      else {
        local_70 = thunk_FUN_016d4a50(piVar17);
        local_60 = piVar17;
        if (local_70 == 0) {
          uVar8 = 1;
          goto LAB_008ef62c;
        }
      }
      FUN_016dd1aa(local_70,unaff_r8,piVar17);
      iVar7 = *(int *)(param_2 + 0x54);
    }
    uVar9 = uVar15;
    if (iVar7 != -0x80000000) {
      unaff_r8 = *(int *)(param_2 + 0x5c);
      uVar8 = 0;
      if (unaff_r8 < 0) {
LAB_008ef6c4:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar8,unaff_r8);
      }
      uVar8 = *(undefined4 *)(param_2 + 0x58);
      if (unaff_r8 == 0) {
        uVar9 = 1;
        iVar16 = 0;
      }
      else {
        uVar9 = thunk_FUN_016d4a50(unaff_r8);
        if (uVar9 == 0) {
          uVar8 = 1;
          goto LAB_008ef6c4;
        }
        iVar16 = unaff_r8;
      }
      FUN_016dd1aa(uVar9,uVar8,unaff_r8);
    }
    param_1[8] = iVar11;
    param_1[10] = iVar11;
    param_1[0xb] = local_44;
    param_1[0xd] = local_44;
    param_1[0xe] = (int)local_60;
    param_1[0xf] = local_70;
    *(undefined2 *)((int)param_1 + 0x56) = uVar2;
    *param_1 = iVar10;
    *(undefined2 *)(param_1 + 0x15) = uVar3;
    param_1[9] = local_64;
    *(undefined2 *)((int)param_1 + 0x52) = uVar4;
    param_1[0x12] = uVar9;
    param_1[4] = iVar12;
    param_1[0x10] = (int)piVar17;
    param_1[0xc] = local_68;
    *(undefined8 *)(param_1 + 2) = uVar20;
    param_1[0x11] = iVar16;
    *(undefined8 *)(param_1 + 6) = uVar19;
    *(undefined2 *)(param_1 + 0x14) = uVar5;
    param_1[1] = iVar18;
    param_1[5] = iVar14;
    param_1[0x13] = unaff_r8;
  }
  if (((uVar15 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar11 = FUN_015bf3f8(), iVar11 == 0)) {
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar13;
    bVar6 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar6);
  *piVar13 = 0;
  if (iVar11 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar13,0x81,1,param_5);
    return;
  }
  return;
}

