// FUN_01a5d07c @ 01a5d07c size=1504 calls_out=8 calls_in=1
// strings: 2DIGIT should match u8

void FUN_01a5d07c(uint *param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined1 uVar11;
  char *pcVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 uVar17;
  uint uVar18;
  byte *pbVar19;
  undefined1 uVar20;
  uint uVar21;
  uint extraout_r12;
  undefined1 uVar22;
  uint local_98;
  byte *local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 local_70 [6];
  undefined4 local_58 [6];
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  FUN_01a5d670(&local_40);
  uVar18 = (uint)local_3c & 0xff;
  if (local_40 != 3) {
    uVar14 = local_38 & 0xff;
    local_98 = local_40;
    local_88 = local_30;
    local_8c = local_34;
    local_84 = local_2c;
    uVar9 = local_38._3_1_;
    uVar13 = local_38._2_1_;
    uVar6 = local_38._1_1_;
    uVar20 = local_3c._3_1_;
    uVar11 = local_3c._2_1_;
    uVar22 = local_3c._1_1_;
    uVar17 = (undefined1)local_3c;
    goto LAB_01a5d22c;
  }
  uVar14 = 4;
  local_98 = 1;
  local_84 = extraout_r12;
  if ((*(int *)(param_2 + 0xc) == 0) || (**(char **)(param_2 + 8) != ':')) {
LAB_01a5d1d8:
    local_8c = 0;
    local_88 = 0;
    uVar9 = 0;
    uVar13 = 0;
    uVar6 = 0;
    uVar20 = 0;
    uVar11 = 0;
    uVar22 = 0;
    uVar17 = 0;
    goto LAB_01a5d22c;
  }
  *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
  FUN_01a5cd30(&local_40,param_2);
  pbVar7 = (byte *)((uint)local_3c & 0xff);
  if (local_40 == 3) {
    local_98 = 2;
    if (*(int *)(param_2 + 0xc) == 0) {
      local_84 = 0;
      goto LAB_01a5d1d8;
    }
    local_84 = 0;
    local_8c = 0;
    local_88 = 0;
    uVar9 = 0;
    uVar13 = 0;
    uVar6 = 0;
    uVar20 = 0;
    uVar11 = 0;
    uVar22 = 0;
    uVar17 = 0;
    if (**(char **)(param_2 + 8) != ':') goto LAB_01a5d22c;
    uVar14 = *(int *)(param_2 + 0xc) - 1;
    pcVar12 = *(char **)(param_2 + 8) + 1;
    *(char **)(param_2 + 8) = pcVar12;
    *(uint *)(param_2 + 0xc) = uVar14;
    FUN_01a44f0c(&local_40,param_2,2,2);
    if (local_40 != 3) {
LAB_01a5d314:
      uVar18 = (uint)local_3c >> 0x10;
      uVar14 = (uint)local_3c >> 8;
      local_98 = local_40;
      local_88 = local_30;
      local_8c = local_34;
      local_90 = local_38;
      local_94 = local_3c;
      local_84 = local_2c;
      local_3c._3_1_ = (char)((uint)local_3c >> 0x18);
      local_3c._2_1_ = (char)uVar18;
      local_3c._1_1_ = (char)uVar14;
      goto LAB_01a5d218;
    }
    if (local_38 == 1) {
      bVar2 = *local_3c;
      bVar5 = 1;
      if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_01a5d620;
    }
    else {
      if (local_38 == 0) {
        bVar5 = 0;
        goto LAB_01a5d620;
      }
      bVar2 = *local_3c;
    }
    uVar15 = local_38;
    pbVar19 = local_3c;
    if (bVar2 == 0x2b) {
      pbVar19 = local_3c + 1;
      uVar15 = local_38 - 1;
    }
    if (2 < uVar15) {
      uVar21 = 0;
      do {
        if (uVar15 == 0) goto LAB_01a5d2e0;
        uVar21 = (uVar21 & 0xff) * 4 + (uVar21 & 0xff);
        if (uVar21 >> 7 != 0) {
          bVar5 = 1;
          if (*pbVar19 - 0x30 < 10) {
            bVar5 = 2;
          }
          goto LAB_01a5d620;
        }
        uVar10 = *pbVar19 - 0x30;
        if (9 < uVar10) goto LAB_01a5d64c;
        uVar21 = (uVar21 * 2 & 0xff) + (uVar10 & 0xff);
        uVar15 = uVar15 - 1;
        pbVar19 = pbVar19 + 1;
      } while ((uVar21 & 0xffffff00) == 0);
      bVar5 = 2;
LAB_01a5d620:
      local_40 = (uint)bVar5;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("2DIGIT should match u8",0x16,&local_40,&DAT_01d2c500,&DAT_01d2c568);
    }
    if (uVar15 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      bVar3 = uVar15 == 1;
      do {
        bVar2 = *pbVar19;
        if (9 < bVar2 - 0x30) goto LAB_01a5d64c;
        pbVar19 = pbVar19 + 1;
        bVar1 = !bVar3;
        bVar3 = true;
        uVar21 = (bVar2 - 0x30) + uVar21 * 10;
      } while (bVar1);
LAB_01a5d2e0:
      if (0x3c < (uVar21 & 0xff)) {
        local_70[0] = 0x80000001;
        *(char **)(param_2 + 8) = pcVar12;
        *(uint *)(param_2 + 0xc) = uVar14;
        FUN_01a5cfbc(&local_3c,local_70);
        local_40 = 1;
        goto LAB_01a5d314;
      }
    }
    iVar16 = *(int *)(param_2 + 0xc);
    local_98 = 1;
    pcVar12 = *(char **)(param_2 + 8);
    local_90 = 4;
    if ((iVar16 == 0) || (*pcVar12 != '.')) {
      local_34 = 0;
      local_30 = 0;
      local_3c = (byte *)0x0;
LAB_01a5d428:
      local_94 = local_3c;
      local_8c = local_34;
      local_88 = local_30;
      local_84 = uVar14;
    }
    else {
      *(char **)(param_2 + 8) = pcVar12 + 1;
      *(int *)(param_2 + 0xc) = iVar16 + -1;
      FUN_01a44f0c(&local_40,param_2,1,0xffffffff);
      if (local_40 != 3) {
        local_98 = local_40;
        local_90 = local_38;
        uVar14 = local_2c;
        goto LAB_01a5d428;
      }
      if (local_38 < 10) {
        if (local_38 != 0) {
          uVar14 = local_38;
          if (local_38 != 1) goto LAB_01a5d4e8;
          bVar2 = *local_3c;
          if (bVar2 == 0x2b || bVar2 == 0x2d) goto LAB_01a5d5b4;
          uVar14 = 1;
          goto LAB_01a5d4ec;
        }
LAB_01a5d5b4:
        local_70[0] = 0x80000001;
        *(char **)(param_2 + 8) = pcVar12;
        *(int *)(param_2 + 0xc) = iVar16;
        FUN_01a5cfbc((uint)&local_40 | 4,local_70);
        local_98 = 1;
        local_80 = local_38;
        uStack_7c = local_34;
        uStack_78 = local_30;
        uStack_74 = local_2c;
      }
      else {
        uVar14 = 9;
        if ((char)local_3c[9] < -0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_3c,local_38,0,9,&DAT_01d2c578);
        }
LAB_01a5d4e8:
        bVar2 = *local_3c;
LAB_01a5d4ec:
        uVar15 = uVar14;
        pbVar19 = local_3c;
        if (bVar2 == 0x2b) {
          pbVar19 = local_3c + 1;
          uVar15 = uVar14 - 1;
        }
        if (8 < uVar15) {
          iVar8 = 0;
          uVar10 = 0;
          while( true ) {
            if (iVar8 == 9) goto LAB_01a5d534;
            uVar15 = (uint)((ulonglong)uVar10 * 10);
            if ((int)((ulonglong)uVar10 * 10 >> 0x20) != 0) break;
            uVar4 = pbVar19[iVar8] - 0x30;
            uVar10 = uVar4 + uVar15;
            if ((9 < uVar4) || (iVar8 = iVar8 + 1, CARRY4(uVar4,uVar15))) break;
          }
          goto LAB_01a5d5b4;
        }
        uVar10 = 0;
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          bVar2 = *pbVar19;
          if (9 < bVar2 - 0x30) goto LAB_01a5d5b4;
          pbVar19 = pbVar19 + 1;
          uVar10 = (bVar2 - 0x30) + uVar10 * 10;
        }
LAB_01a5d534:
        local_58[0] = 0x80000001;
        FUN_01a458dc(local_58);
        uVar14 = *(uint *)("time offset" + uVar14 * 4 + 0xb);
        if ((int)((ulonglong)uVar14 * (ulonglong)uVar10 >> 0x20) != 0) goto LAB_01a5d5b4;
        FUN_01a458dc(local_58);
        local_98 = 3;
        local_3c = (byte *)((ulonglong)uVar14 * (ulonglong)uVar10);
      }
      local_90 = local_80;
      local_8c = uStack_7c;
      local_88 = uStack_78;
      local_84 = uStack_74;
      local_94 = local_3c;
    }
    if (local_98 == 3) {
LAB_01a5d468:
      *param_1 = 3;
      param_1[1] = (uint)local_94;
      param_1[2] = (uVar21 & 0xff) << 0x10 | (int)pbVar7 << 8 | uVar18;
      return;
    }
    if (local_98 == 1) {
      *(char **)(param_2 + 8) = pcVar12;
      *(int *)(param_2 + 0xc) = iVar16;
      FUN_01a451b0((uint)&local_98 | 4);
      local_94 = (byte *)0x0;
      goto LAB_01a5d468;
    }
    local_3c._3_1_ = (undefined1)((uint)local_94 >> 0x18);
    local_3c._2_1_ = (undefined1)((uint)local_94 >> 0x10);
    local_3c._1_1_ = (undefined1)((uint)local_94 >> 8);
    uVar9 = (undefined1)(local_90 >> 0x18);
  }
  else {
    local_98 = local_40;
    local_88 = local_30;
    local_8c = local_34;
    local_90 = local_38;
    local_94 = pbVar7;
    local_84 = local_2c;
LAB_01a5d218:
    uVar9 = (undefined1)(local_90 >> 0x18);
    if (local_98 == 1) {
      local_98 = 2;
    }
  }
  uVar14 = local_90;
  uVar13 = (char)(local_90 >> 0x10);
  uVar6 = (char)(local_90 >> 8);
  uVar20 = local_3c._3_1_;
  uVar11 = local_3c._2_1_;
  uVar22 = local_3c._1_1_;
  uVar17 = (char)local_94;
LAB_01a5d22c:
  param_1[3] = local_8c;
  param_1[4] = local_88;
  param_1[5] = local_84;
  *(undefined1 *)((int)param_1 + 0xb) = uVar9;
  *(undefined1 *)((int)param_1 + 10) = uVar13;
  *(undefined1 *)((int)param_1 + 9) = uVar6;
  *(char *)(param_1 + 2) = (char)uVar14;
  *(undefined1 *)((int)param_1 + 7) = uVar20;
  *(undefined1 *)((int)param_1 + 6) = uVar11;
  *(undefined1 *)((int)param_1 + 5) = uVar22;
  *(undefined1 *)(param_1 + 1) = uVar17;
  *param_1 = local_98;
  return;
LAB_01a5d64c:
  bVar5 = 1;
  goto LAB_01a5d620;
}

