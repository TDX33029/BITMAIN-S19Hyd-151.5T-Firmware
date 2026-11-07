// FUN_016db8c4 @ 016db8c4 size=2512 calls_out=9 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff38 : 0x016dd6f0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016db8c4(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  int *piVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  bool bVar23;
  int local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_34 [4];
  
  iVar5 = FUN_016d4a28(param_2);
  if (((iVar5 != 0x78) && (iVar5 = FUN_016d4a28(param_2), iVar5 != 0x75)) &&
     (iVar5 = FUN_016d4a28(param_2), iVar5 != 0x55)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004cfe86,0x50,&DAT_01d0a0d8);
  }
  iVar5 = FUN_016d4a28(param_2);
  iVar13 = 2;
  if (iVar5 == 0x75) {
    iVar13 = 1;
  }
  iVar18 = 0;
  if (iVar5 != 0x78) {
    iVar18 = iVar13;
  }
  iVar5 = FUN_016d819c(param_2);
  if (iVar5 == 0) {
    iVar5 = *param_2;
    local_44 = *(undefined4 *)(iVar5 + 0x50);
    local_40 = *(undefined4 *)(iVar5 + 0x54);
    uStack_3c = *(undefined4 *)(iVar5 + 0x58);
    local_50 = *(undefined4 *)(iVar5 + 0x50);
    uStack_4c = *(undefined4 *)(iVar5 + 0x54);
    uStack_48 = *(undefined4 *)(iVar5 + 0x58);
    local_34[0] = 10;
    local_58 = local_34;
    FUN_016d4540(param_1,param_2[1],param_2[2]);
    return;
  }
  iVar5 = FUN_016d4a28(param_2);
  if (iVar5 != 0x7b) {
    iVar5 = *param_2;
    if (*(int *)(iVar5 + 0x40) != 0) {
      FUN_01306fc8(&DAT_01d09ee8);
      *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 1;
                    /* WARNING: Subroutine does not return */
      FUN_01be040c();
    }
    iVar10 = 0;
    piVar17 = (int *)(iVar5 + 0x50);
    *(undefined4 *)(iVar5 + 0x40) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x4c) = 0;
    iVar13 = *piVar17;
    uVar19 = *(undefined4 *)(iVar5 + 0x54);
    uVar22 = *(undefined4 *)(iVar5 + 0x58);
    iVar6 = *(int *)(&UNK_00537e18 + iVar18 * 4);
    do {
      if ((iVar10 != 0) && (iVar11 = FUN_016d819c(param_2), iVar11 == 0)) {
        local_6c = *piVar17;
        uStack_68 = *(undefined4 *)(iVar5 + 0x54);
        uStack_64 = *(undefined4 *)(iVar5 + 0x58);
        local_78 = *piVar17;
        uStack_74 = *(undefined4 *)(iVar5 + 0x54);
        uStack_70 = *(undefined4 *)(iVar5 + 0x58);
        local_5c = 10;
        FUN_016d4540(&local_b8,param_2[1],param_2[2]);
        goto LAB_016dd7d0;
      }
      uVar7 = FUN_016d4a28(param_2);
      if (9 < uVar7 - 0x30) {
        bVar23 = 5 < uVar7 - 0x41;
        if (bVar23) {
          uVar7 = uVar7 - 0x61;
        }
        if (bVar23 && 5 < uVar7) {
          FUN_016d4f3c(&local_78,param_2);
          local_5c = 9;
          FUN_016d4540(&local_b8,param_2[1],param_2[2],&local_78);
          goto LAB_016dd7d0;
        }
      }
      uVar8 = FUN_016d4a28(param_2);
      iVar11 = *(int *)(iVar5 + 0x4c);
      uVar7 = 1;
      if (0x7f < uVar8) {
        uVar7 = 2;
      }
      if ((0x7ff < uVar8) && (uVar7 = 4, uVar8 < 0x10000)) {
        uVar7 = 3;
      }
      iVar12 = iVar11;
      if ((uint)(*(int *)(iVar5 + 0x44) - iVar11) < uVar7) {
        FUN_006520b4((int *)(iVar5 + 0x44),iVar11,uVar7,1);
        iVar12 = *(int *)(iVar5 + 0x4c);
      }
      pbVar9 = (byte *)(*(int *)(iVar5 + 0x48) + iVar12);
      if (uVar8 < 0x80) {
        *pbVar9 = (byte)uVar8;
      }
      else {
        bVar4 = (byte)uVar8 & 0x3f | 0x80;
        bVar2 = (byte)(uVar8 >> 6);
        if (uVar8 < 0x800) {
          pbVar9[1] = bVar4;
          *pbVar9 = bVar2 | 0xc0;
        }
        else {
          bVar2 = bVar2 & 0x3f | 0x80;
          bVar3 = (byte)(uVar8 >> 0xc);
          if (uVar8 >> 0x10 == 0) {
            pbVar9[1] = bVar2;
            pbVar9[2] = bVar4;
            *pbVar9 = bVar3 | 0xe0;
          }
          else {
            pbVar9[3] = bVar4;
            pbVar9[2] = bVar2;
            pbVar9[1] = bVar3 & 0x3f | 0x80;
            *pbVar9 = (byte)(uVar8 >> 0x12) | 0xf0;
          }
        }
      }
      iVar10 = iVar10 + 1;
      *(uint *)(iVar5 + 0x4c) = uVar7 + iVar11;
    } while (iVar6 != iVar10);
    FUN_016d819c(param_2);
    uVar7 = *(uint *)(iVar5 + 0x4c);
    if (uVar7 != 0) {
      pbVar9 = *(byte **)(iVar5 + 0x48);
      if (uVar7 == 1) {
        bVar4 = *pbVar9;
        if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) goto LAB_016dd780;
      }
      else {
        bVar4 = *pbVar9;
      }
      if (bVar4 == 0x2b) {
        pbVar9 = pbVar9 + 1;
        uVar7 = uVar7 - 1;
      }
      if (uVar7 < 9) {
        uVar8 = 0;
        if (uVar7 != 0) {
          do {
            uVar15 = (uint)*pbVar9;
            uVar14 = uVar15 - 0x30;
            if (0x39 < uVar15) {
              uVar14 = (uVar15 - 0x41 & 0xffffffdf) + 10;
            }
            if (0xf < uVar14) goto LAB_016dd780;
            uVar8 = uVar14 | uVar8 << 4;
            pbVar9 = pbVar9 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
LAB_016dd6cc:
          if ((uVar8 ^ 0xd800) - 0x110000 < 0xffef0800) goto LAB_016dd780;
        }
        iVar6 = *piVar17;
        uVar20 = *(undefined4 *)(iVar5 + 0x54);
        uVar16 = *(undefined4 *)(iVar5 + 0x58);
        param_1[1] = uVar8;
        param_1[2] = iVar13;
        param_1[3] = uVar19;
        param_1[4] = uVar22;
        param_1[5] = iVar6;
        param_1[6] = uVar20;
        param_1[7] = uVar16;
        *(undefined1 *)(param_1 + 8) = 4;
        *(char *)((int)param_1 + 0x21) = (char)iVar18;
        *param_1 = 0x22;
        goto LAB_016dd7ec;
      }
      uVar8 = 0;
      while( true ) {
        if (uVar7 == 0) goto LAB_016dd6cc;
        if (0xfffffff < uVar8) break;
        uVar15 = (uint)*pbVar9;
        uVar14 = uVar15 - 0x30;
        if (0x39 < uVar15) {
          uVar14 = (uVar15 - 0x41 & 0xffffffdf) + 10;
        }
        uVar15 = uVar8 * 0x10;
        uVar8 = uVar14 + uVar15;
        if ((0xf < uVar14) || (uVar7 = uVar7 - 1, pbVar9 = pbVar9 + 1, CARRY4(uVar14,uVar15)))
        break;
      }
    }
LAB_016dd780:
    local_6c = *piVar17;
    uStack_68 = *(undefined4 *)(iVar5 + 0x54);
    uStack_64 = *(undefined4 *)(iVar5 + 0x58);
    local_5c = 8;
    local_78 = iVar13;
    uStack_74 = uVar19;
    uStack_70 = uVar22;
    FUN_016d4540(&local_b8,param_2[1],param_2[2]);
LAB_016dd7d0:
    *param_1 = local_b8;
    param_1[1] = uStack_b4;
    param_1[2] = uStack_b0;
    param_1[3] = local_ac;
    param_1[4] = uStack_a8;
    param_1[5] = local_a4;
    param_1[6] = uStack_a0;
    param_1[7] = uStack_9c;
    param_1[8] = uStack_98;
    param_1[9] = uStack_94;
    param_1[10] = local_90;
    param_1[0xb] = uStack_8c;
    param_1[0xc] = uStack_88;
    param_1[0xd] = uStack_84;
    param_1[0xe] = uStack_80;
    param_1[0xf] = uStack_7c;
LAB_016dd7ec:
    *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 1;
    return;
  }
  iVar5 = *param_2;
  if (*(int *)(iVar5 + 0x40) != 0) {
    FUN_01306fc8(&DAT_01d09e38);
LAB_016dd400:
    FUN_016f4e14(&local_bc,&DAT_0056db9c,&DAT_01d09e48);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16dd418);
    (*pcVar1)();
  }
  piVar17 = (int *)(iVar5 + 0x50);
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  *(undefined4 *)(iVar5 + 0x40) = 0xffffffff;
  iVar13 = *piVar17;
  uVar16 = *(undefined4 *)(iVar5 + 0x54);
  uVar21 = *(undefined4 *)(iVar5 + 0x58);
  FUN_016d4f3c(&local_b8,param_2);
  uVar20 = local_a4;
  uVar22 = uStack_a8;
  uVar19 = local_ac;
  while ((iVar6 = FUN_016d819c(param_2), iVar6 != 0 &&
         (iVar6 = FUN_016d4a28(param_2), iVar6 != 0x7d))) {
    uVar7 = FUN_016d4a28(param_2);
    if (9 < uVar7 - 0x30) {
      bVar23 = 5 < uVar7 - 0x41;
      if (bVar23) {
        uVar7 = uVar7 - 0x61;
      }
      if (bVar23 && 5 < uVar7) {
        FUN_016d4f3c(&local_78,param_2);
        local_5c = 9;
        FUN_016d4540(&local_b8,param_2[1],param_2[2],&local_78,&local_5c);
        goto LAB_016dd384;
      }
    }
    uVar8 = FUN_016d4a28(param_2);
    iVar6 = *(int *)(iVar5 + 0x4c);
    uVar7 = 1;
    if (0x7f < uVar8) {
      uVar7 = 2;
    }
    if ((0x7ff < uVar8) && (uVar7 = 4, uVar8 < 0x10000)) {
      uVar7 = 3;
    }
    iVar10 = iVar6;
    if ((uint)(*(int *)(iVar5 + 0x44) - iVar6) < uVar7) {
      FUN_006520b4((int *)(iVar5 + 0x44),iVar6,uVar7,1,1);
      iVar10 = *(int *)(iVar5 + 0x4c);
    }
    pbVar9 = (byte *)(*(int *)(iVar5 + 0x48) + iVar10);
    if (uVar8 < 0x80) {
      *pbVar9 = (byte)uVar8;
    }
    else {
      bVar4 = (byte)uVar8 & 0x3f | 0x80;
      bVar2 = (byte)(uVar8 >> 6);
      if (uVar8 < 0x800) {
        pbVar9[1] = bVar4;
        *pbVar9 = bVar2 | 0xc0;
      }
      else {
        bVar2 = bVar2 & 0x3f | 0x80;
        bVar3 = (byte)(uVar8 >> 0xc);
        if (uVar8 >> 0x10 == 0) {
          pbVar9[1] = bVar2;
          pbVar9[2] = bVar4;
          *pbVar9 = bVar3 | 0xe0;
        }
        else {
          pbVar9[3] = bVar4;
          pbVar9[2] = bVar2;
          pbVar9[1] = bVar3 & 0x3f | 0x80;
          *pbVar9 = (byte)(uVar8 >> 0x12) | 0xf0;
        }
      }
    }
    *(uint *)(iVar5 + 0x4c) = uVar7 + iVar6;
  }
  iVar6 = param_2[2];
  local_78 = iVar13;
  uStack_74 = uVar16;
  uStack_70 = uVar21;
  if (*piVar17 == iVar6) {
    local_6c = *piVar17;
    uStack_68 = *(undefined4 *)(iVar5 + 0x54);
    uStack_64 = *(undefined4 *)(iVar5 + 0x58);
    local_5c = 10;
    FUN_016d4540(&local_b8,param_2[1],*piVar17,&local_78,&local_5c);
  }
  else {
    iVar13 = *piVar17;
    uVar16 = *(undefined4 *)(iVar5 + 0x54);
    uVar21 = *(undefined4 *)(iVar5 + 0x58);
    pbVar9 = *(byte **)(iVar5 + 0x48);
    uVar7 = *(uint *)(iVar5 + 0x4c);
    local_bc = FUN_016d4a28(param_2);
    if (local_bc != 0x7d) goto LAB_016dd400;
    FUN_016d819c(param_2);
    if (uVar7 == 0) {
      local_6c = *piVar17;
      uStack_68 = *(undefined4 *)(iVar5 + 0x54);
      uStack_64 = *(undefined4 *)(iVar5 + 0x58);
      local_5c = 7;
      FUN_016d4540(&local_b8,param_2[1],iVar6,&local_78,&local_5c);
      goto LAB_016dd384;
    }
    if (uVar7 == 1) {
      bVar4 = *pbVar9;
      if ((bVar4 != 0x2b) && (bVar4 != 0x2d)) goto LAB_016dd23c;
    }
    else {
      bVar4 = *pbVar9;
LAB_016dd23c:
      if (bVar4 == 0x2b) {
        pbVar9 = pbVar9 + 1;
        uVar7 = uVar7 - 1;
      }
      if (uVar7 < 9) {
        uVar8 = 0;
        if (uVar7 != 0) {
          do {
            uVar15 = (uint)*pbVar9;
            uVar14 = uVar15 - 0x30;
            if (0x39 < uVar15) {
              uVar14 = (uVar15 - 0x41 & 0xffffffdf) + 10;
            }
            if (0xf < uVar14) goto LAB_016dd340;
            uVar8 = uVar14 | uVar8 << 4;
            pbVar9 = pbVar9 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
LAB_016dd28c:
          if ((uVar8 ^ 0xd800) - 0x110000 < 0xffef0800) goto LAB_016dd340;
        }
        iVar13 = *piVar17;
        uVar16 = *(undefined4 *)(iVar5 + 0x54);
        uVar21 = *(undefined4 *)(iVar5 + 0x58);
        param_1[1] = uVar8;
        param_1[2] = uVar19;
        param_1[3] = uVar22;
        param_1[4] = uVar20;
        param_1[5] = iVar13;
        param_1[6] = uVar16;
        param_1[7] = uVar21;
        *(char *)((int)param_1 + 0x21) = (char)iVar18;
        *(undefined1 *)(param_1 + 8) = 5;
        *param_1 = 0x22;
        goto LAB_016dd3a0;
      }
      uVar8 = 0;
      while( true ) {
        if (uVar7 == 0) goto LAB_016dd28c;
        if (0xfffffff < uVar8) break;
        uVar14 = (uint)*pbVar9;
        uVar15 = uVar14 - 0x30;
        if (0x39 < uVar14) {
          uVar15 = (uVar14 - 0x41 & 0xffffffdf) + 10;
        }
        uVar14 = uVar8 * 0x10;
        uVar8 = uVar15 + uVar14;
        if ((0xf < uVar15) || (uVar7 = uVar7 - 1, pbVar9 = pbVar9 + 1, CARRY4(uVar15,uVar14)))
        break;
      }
    }
LAB_016dd340:
    local_5c = 8;
    local_6c = iVar13;
    uStack_68 = uVar16;
    uStack_64 = uVar21;
    FUN_016d4540(&local_b8,param_2[1],iVar6,&local_78,&local_5c);
  }
LAB_016dd384:
  *param_1 = local_b8;
  param_1[1] = uStack_b4;
  param_1[2] = uStack_b0;
  param_1[3] = local_ac;
  param_1[4] = uStack_a8;
  param_1[5] = local_a4;
  param_1[6] = uStack_a0;
  param_1[7] = uStack_9c;
  param_1[8] = uStack_98;
  param_1[9] = uStack_94;
  param_1[10] = local_90;
  param_1[0xb] = uStack_8c;
  param_1[0xc] = uStack_88;
  param_1[0xd] = uStack_84;
  param_1[0xe] = uStack_80;
  param_1[0xf] = uStack_7c;
LAB_016dd3a0:
  *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + 1;
  return;
}

