// FUN_005fd574 @ 005fd574 size=1476 calls_out=13 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005fd574(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined *puVar11;
  uint *puVar12;
  uint *puVar13;
  int unaff_r4;
  uint uVar14;
  int *piVar15;
  undefined4 ****ppppuVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined4 ****ppppuVar23;
  bool bVar24;
  bool bVar25;
  undefined *local_b0;
  undefined4 ****local_a0;
  int *piStack_9c;
  undefined4 ****ppppuStack_98;
  undefined4 ****ppppuStack_94;
  uint *local_90;
  undefined4 ****local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 ****local_78;
  int *piStack_74;
  undefined4 ****ppppuStack_70;
  int *piStack_6c;
  undefined4 ****ppppuStack_68;
  undefined4 ****ppppuStack_64;
  undefined4 ****local_60;
  int *local_5c;
  undefined4 ****local_58;
  int *local_54;
  undefined4 ****local_50;
  undefined4 ****local_4c;
  uint *local_48;
  undefined4 ****ppppuStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 local_30;
  int *local_2c;
  
  if ((*(char *)(param_2 + 0x29) != '\0') ||
     (ppppuVar23 = *(undefined4 *****)(param_2 + 8), ppppuVar23 == (undefined4 ****)0x0)) {
    *param_1 = 0x80000000;
    return;
  }
  iVar17 = (int)ppppuVar23 * 0xc;
  iVar21 = *(int *)(param_2 + 4);
  local_5c = (int *)thunk_FUN_016d4a50(iVar17);
  if (local_5c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,iVar17);
  }
  piVar4 = local_5c + 1;
  ppppuVar16 = (undefined4 ****)0x0;
  local_60 = ppppuVar23;
  do {
    if (iVar17 == 0) break;
    iVar19 = *(int *)(iVar21 + 8);
    uVar2 = 0;
    if (iVar19 < 0) {
LAB_005fdb14:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar2,unaff_r4);
    }
    uVar2 = *(undefined4 *)(iVar21 + 4);
    if (iVar19 == 0) {
      iVar20 = 0;
      unaff_r4 = 1;
    }
    else {
      unaff_r4 = thunk_FUN_016d4a50(iVar19,uVar2);
      if (unaff_r4 == 0) {
        uVar2 = 1;
        unaff_r4 = iVar19;
        goto LAB_005fdb14;
      }
      iVar20 = iVar19;
    }
    ppppuVar16 = (undefined4 ****)((int)ppppuVar16 + 1);
    iVar21 = iVar21 + 0xc;
    FUN_016dd1aa(unaff_r4,uVar2,iVar19);
    piVar4[-1] = iVar20;
    iVar17 = iVar17 + -0xc;
    *piVar4 = unaff_r4;
    piVar4[1] = iVar19;
    piVar4 = piVar4 + 3;
  } while (ppppuVar23 != ppppuVar16);
  ppppuVar16 = *(undefined4 *****)(param_2 + 0x14);
  local_78 = local_60;
  piStack_74 = local_5c;
  uVar2 = 0;
  bVar25 = (undefined4 ****)0x3ffffffe < ppppuVar16;
  bVar24 = ppppuVar16 == (undefined4 ****)0x3fffffff;
  uVar14 = (int)ppppuVar16 * 4;
  if (ppppuVar16 < (undefined4 ****)0x40000000) {
    bVar25 = 0x7ffffffb < uVar14;
    bVar24 = uVar14 == 0x7ffffffc;
  }
  ppppuStack_70 = ppppuVar23;
  if (bVar25 && !bVar24) {
LAB_005fd66c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,uVar14);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  if (uVar14 == 0) {
    ppppuVar23 = (undefined4 ****)0x0;
    puVar3 = (uint *)&DAT_00000004;
  }
  else {
    puVar3 = (uint *)thunk_FUN_016d4a50(uVar14);
    ppppuVar23 = ppppuVar16;
    if (puVar3 == (uint *)0x0) {
      uVar2 = 4;
      goto LAB_005fd66c;
    }
  }
  FUN_016dd1aa(puVar3,uVar2,uVar14);
  local_88 = *(int *)(param_2 + 0x18);
  local_84 = *(int *)(param_2 + 0x1c);
  local_a0 = local_78;
  piStack_9c = piStack_74;
  ppppuStack_98 = ppppuStack_70;
  local_80 = CONCAT31(local_80._1_3_,*(char *)(param_2 + 0x24));
  ppppuStack_94 = ppppuVar23;
  local_90 = puVar3;
  local_8c = ppppuVar16;
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_78 = &local_a0;
    if (&DAT_00000001 < ppppuVar16) {
      local_60 = &local_78;
      if (&DAT_00000014 < ppppuVar16) {
        FUN_005fcef4(puVar3,ppppuVar16,&local_60);
      }
      else {
        FUN_00600040(puVar3,ppppuVar16,&local_78);
      }
    }
  }
  else if (&DAT_00000001 < ppppuVar16) {
    if (&DAT_00000014 < ppppuVar16) {
      FUN_005fcfdc(puVar3,ppppuVar16);
    }
    else {
      puVar10 = puVar3 + 1;
      iVar17 = 0;
      puVar13 = puVar10;
      do {
        uVar14 = puVar13[-1];
        uVar22 = *puVar13;
        if (uVar22 < uVar14) {
          iVar21 = iVar17;
          do {
            *(uint *)((int)puVar10 + iVar21) = uVar14;
            if (iVar21 == 0) {
              puVar12 = puVar3;
              goto LAB_005fda80;
            }
            iVar19 = iVar21 + -4;
            uVar14 = *(uint *)((int)puVar10 + iVar21 + -8);
            iVar21 = iVar19;
          } while (uVar22 < uVar14);
          puVar12 = (uint *)((int)puVar10 + iVar19);
LAB_005fda80:
          *puVar12 = uVar22;
        }
        puVar13 = puVar13 + 1;
        iVar17 = iVar17 + 4;
      } while (puVar13 != puVar3 + (int)ppppuVar16);
    }
  }
  local_58 = local_a0;
  local_54 = piStack_9c;
  local_50 = ppppuStack_98;
  local_4c = ppppuStack_94;
  local_48 = local_90;
  ppppuStack_44 = local_8c;
  iStack_40 = local_88;
  iStack_3c = local_84;
  iStack_38 = local_80;
  local_5c = (int *)&DAT_00000001;
  local_60 = (undefined4 ****)&DAT_00000001;
  piVar4 = (int *)thunk_FUN_016d4a50(0x2c);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x2c);
  }
  *piVar4 = (int)local_60;
  piVar4[1] = (int)local_5c;
  piVar4[2] = (int)local_58;
  piVar4[3] = (int)local_54;
  piVar4[4] = (int)local_50;
  piVar4[5] = (int)local_4c;
  piVar4[6] = (int)local_48;
  piVar4[7] = (int)ppppuStack_44;
  piVar4[8] = iStack_40;
  piVar4[9] = iStack_3c;
  piVar4[10] = iStack_38;
  uVar14 = piVar4[4];
  if (uVar14 == 0) {
    uVar2 = 0x25;
    puVar11 = &DAT_01857398;
    puVar9 = &DAT_0033d6c8;
LAB_005fda58:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(puVar9,uVar2,puVar11);
  }
  ppppuVar16 = (undefined4 ****)piVar4[8];
  ppppuVar23 = ppppuVar16;
  if (ppppuVar16 != (undefined4 ****)&DAT_00000001) {
    if (ppppuVar16 == (undefined4 ****)0x0) {
      uVar2 = 0x1f;
      puVar11 = &DAT_018573a8;
      puVar9 = &DAT_0033d6ed;
      goto LAB_005fda58;
    }
    puVar5 = (undefined1 *)((int)ppppuVar16 + -1);
    ppppuVar23 = (undefined4 ****)&DAT_00000001;
    do {
      puVar5 = puVar5 + -1;
      ppppuVar23 = (undefined4 ****)((int)ppppuVar23 << 1);
    } while (puVar5 != (undefined1 *)0x0);
  }
  do {
    iVar17 = *piVar4;
    bVar24 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar24);
  *piVar4 = iVar17 + 1;
  if (iVar17 < 0) {
LAB_005fdb2c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x5fdb2c);
    (*pcVar1)();
  }
  piVar6 = (int *)thunk_FUN_016d4a50(0x300);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x300);
  }
  local_30 = 0x40;
  iVar17 = -0x2f4;
  do {
    iVar21 = iVar17 + 0xc;
    *(undefined4 *)((int)piVar6 + iVar17 + 0x2f4) = 0;
    *(undefined4 *)((int)piVar6 + iVar17 + 0x2f8) = 4;
    *(undefined4 *)((int)piVar6 + iVar17 + 0x2fc) = 0;
    iVar17 = iVar21;
  } while (iVar21 != 0);
  uVar22 = 0;
  piVar6[0xbe] = 4;
  piVar6[0xbf] = 0;
  piVar6[0xbd] = 0;
  local_60 = (undefined4 ****)&DAT_00000040;
  local_58 = (undefined4 ****)&DAT_00000040;
  local_b0 = &DAT_01857378;
  local_5c = piVar6;
  local_54 = piVar4;
  local_50 = ppppuVar16;
  local_4c = ppppuVar23;
  local_2c = piVar6;
  do {
    uVar8 = piVar4[7];
    uVar18 = uVar22;
    if ((uint)piVar4[7] <= uVar22) {
LAB_005fdaec:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,uVar8,local_b0);
    }
    uVar18 = *(uint *)(piVar4[6] + uVar22 * 4);
    if (uVar14 <= uVar18) {
      local_b0 = &DAT_01857388;
      uVar8 = uVar14;
      goto LAB_005fdaec;
    }
    iVar17 = piVar4[3] + uVar18 * 0xc;
    ppppuVar23 = *(undefined4 *****)(iVar17 + 8);
    if (ppppuVar23 < ppppuVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,ppppuVar16,ppppuVar23,&DAT_018573c8);
    }
    uVar22 = uVar22 + 1;
    uVar14 = 0;
    pbVar7 = *(byte **)(iVar17 + 4);
    ppppuVar23 = ppppuVar16;
    do {
      ppppuVar23 = (undefined4 ****)((int)ppppuVar23 + -1);
      uVar14 = (uint)*pbVar7 + uVar14 * 2;
      pbVar7 = pbVar7 + 1;
    } while (ppppuVar23 != (undefined4 ****)0x0);
    uVar8 = uVar14 & 0x3f;
    if (0x3f < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,0x40,&DAT_018573b8);
    }
    piVar15 = piVar6 + uVar8 * 3;
    iVar17 = piVar15[2];
    if (iVar17 == *piVar15) {
      FUN_005fd440(piVar15);
    }
    puVar3 = (uint *)(piVar15[1] + iVar17 * 8);
    *puVar3 = uVar14;
    puVar3[1] = uVar18;
    piVar15[2] = iVar17 + 1;
    uVar14 = piVar4[4];
  } while (uVar22 < uVar14);
  local_78 = local_60;
  piStack_74 = local_5c;
  ppppuStack_70 = local_58;
  piStack_6c = local_54;
  ppppuStack_68 = local_50;
  ppppuStack_64 = local_4c;
  if ((*(byte *)(param_2 + 0x26) & 1) == 0) {
    do {
      iVar17 = *piVar4;
      bVar24 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar24);
    *piVar4 = iVar17 + 1;
    if (iVar17 < 0) goto LAB_005fdb2c;
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar4;
      bVar24 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar24);
    *piVar4 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      FUN_005ffdec(piVar4);
    }
    *param_1 = 0x80000000;
    FUN_005fdc4c(&local_78);
    DataMemoryBarrier(0xb);
    do {
      iVar17 = *piVar4;
      bVar24 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar24);
    *piVar4 = iVar17 + -1;
    if (iVar17 == 1) {
      DataMemoryBarrier(0xb);
      FUN_005ffdec(piVar4);
      return;
    }
  }
  else {
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = local_58;
    param_1[3] = local_54;
    param_1[4] = local_50;
    param_1[5] = local_4c;
    param_1[6] = piVar4;
    param_1[0xb] = 0;
    param_1[7] = 0;
  }
  return;
}

