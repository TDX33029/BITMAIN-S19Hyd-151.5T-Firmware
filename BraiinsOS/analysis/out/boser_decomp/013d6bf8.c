// FUN_013d6bf8 @ 013d6bf8 size=2268 calls_out=14 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013d6bf8(undefined4 *param_1,byte *param_2,byte *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  code *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  byte bVar10;
  byte *pbVar11;
  byte bVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  byte *pbVar17;
  bool bVar18;
  short local_128;
  undefined2 local_126;
  byte *local_124;
  uint local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint local_e0;
  byte *local_dc;
  uint local_d8;
  byte *local_d4;
  uint local_d0;
  byte *local_cc;
  uint local_c8;
  byte *local_c4;
  uint uStack_c0;
  byte *local_b8;
  uint local_b4;
  byte *local_b0;
  uint local_ac;
  uint local_a8;
  byte *pbStack_a4;
  uint uStack_a0;
  uint local_98;
  byte *local_94;
  uint local_90;
  uint local_88;
  byte *local_84;
  uint local_80;
  undefined4 local_78;
  code *local_74;
  byte *local_70;
  byte *local_6c;
  uint uStack_68;
  byte *pbStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  byte *pbStack_30;
  uint uStack_2c;
  
  pbVar3 = param_2 + (int)param_3;
  if (param_3 == (byte *)0x0) {
    pbVar17 = param_2;
LAB_013d6cb0:
    uVar15 = 0;
    pcVar16 = (code *)&DAT_00000001;
    bVar1 = true;
LAB_013d6cc0:
    local_128 = 2;
  }
  else {
    bVar12 = *param_2;
    pbVar17 = param_2 + 1;
    if (bVar12 == 0x3b) goto LAB_013d6cb0;
    pcVar4 = (code *)FUN_01298504(8,1);
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,8);
    }
    *pcVar4 = (code)bVar12;
    local_78 = (byte **)0x8;
    local_70 = (byte *)0x1;
    local_74 = pcVar4;
    while( true ) {
      pbVar17 = local_70;
      pcVar16 = local_74;
      uVar15 = (uint)local_78;
      if (param_3 == local_70) break;
      bVar12 = param_2[(int)local_70];
      if (bVar12 == 0x3b) {
        bVar1 = false;
        param_3 = local_70;
        pbVar17 = param_2 + (int)local_70 + 1;
        goto LAB_013d7230;
      }
      if ((byte **)local_70 == local_78) {
        FUN_01af7b44(&local_78,local_70,1,1,1);
        pcVar4 = local_74;
      }
      pcVar4[(int)pbVar17] = (code)bVar12;
      local_70 = (byte *)((int)pbVar17 + 1);
    }
    bVar1 = param_3 == (byte *)0x0;
    pbVar17 = pbVar3;
    if (param_3 == (byte *)0x0) goto LAB_013d6cc0;
LAB_013d7230:
    FUN_012fbd94(&local_78,local_74,param_3);
    if (local_78 == (byte **)0x1) {
      pcVar4 = (code *)FUN_013e9378(local_74,local_70);
LAB_013d7284:
      *param_1 = pcVar4;
      param_1[0x11] = 0x80000000;
      FUN_019bb7e0(uVar15,pcVar16);
      return;
    }
    FUN_013c89a4(&local_78,local_74);
    if ((short)local_78 == 2) {
      pcVar4 = local_74;
      goto LAB_013d7284;
    }
    local_120 = (uint)local_70;
    uStack_11c = local_6c;
    uStack_118 = uStack_68;
    uStack_114 = pbStack_64;
    uStack_110 = uStack_60;
    local_10c = local_5c;
    uStack_108 = uStack_58;
    uStack_104 = uStack_54;
    uStack_100 = uStack_50;
    uStack_fc = uStack_4c;
    local_f8 = local_48;
    uStack_f4 = uStack_44;
    uStack_f0 = uStack_40;
    uStack_ec = uStack_3c;
    uStack_e8 = uStack_38;
    local_124 = (byte *)local_74;
    local_126 = local_78._2_2_;
    local_128 = (short)local_78;
  }
  FUN_019bb7e0(uVar15,pcVar16);
  local_d8 = 4;
  local_e0 = 0x80000000;
  puVar5 = (uint *)((uint)&local_e0 | 4);
  local_d4 = (byte *)0x0;
  local_dc = (byte *)0x0;
  if (pbVar17 == pbVar3) {
LAB_013d7330:
    local_a8 = *puVar5;
    pbStack_a4 = (byte *)puVar5[1];
    uStack_a0 = puVar5[2];
  }
  else {
    do {
      uVar8 = uStack_c0;
      pbVar11 = local_cc;
      uVar14 = local_d8;
      pbVar13 = local_dc;
      uVar15 = local_e0;
      uVar6 = 2;
      if ((int)local_e0 < 0) {
        uVar6 = local_e0 ^ 0x80000000;
      }
      if (uVar6 == 0) {
        local_98 = *puVar5;
        local_94 = (byte *)puVar5[1];
        local_90 = puVar5[2];
        bVar12 = *pbVar17;
        pbVar13 = (byte *)(uint)bVar12;
        if ((pbVar13 == &DAT_00000009 || pbVar13 == (byte *)0x3b) || (pbVar13 == &DAT_00000020)) {
          local_e0 = 0x80000000;
        }
        else {
          if (pbVar13 == &DAT_0000003d ||
              &DAT_00000009 < pbVar13 + -0x30 && 0x19 < ((uint)pbVar13 & 0xdf) - 0x41) {
            local_74 = FUN_012fbb84;
            local_78 = &local_b8;
            local_b8 = pbVar13;
            FUN_00664898(&local_88,&DAT_0059b159,&local_78);
            local_74 = (code *)local_88;
            local_70 = local_84;
            local_6c = (byte *)local_80;
            local_78 = (byte **)CONCAT22(local_78._2_2_,0x11);
            uVar9 = FUN_013e649c(&local_78);
            param_1[0x11] = 0x80000000;
            *param_1 = uVar9;
            FUN_0074dd34(puVar5);
            goto LAB_013d7444;
          }
          uVar15 = 2;
          if ((uint)(int)(char)bVar12 < 0x80000000) {
            uVar15 = 1;
          }
          local_70 = (byte *)0x0;
          local_74 = (code *)&DAT_00000001;
          local_78 = (byte **)0x0;
          FUN_01af7b44(&local_78,0,uVar15,1,1);
          if (0x7fffffff < (uint)(int)(char)bVar12) {
            (local_74 + (int)local_70)[1] = (code)(bVar12 & 0xbf);
            bVar12 = bVar12 >> 6 | 0xc0;
          }
          local_74[(int)local_70] = (code)bVar12;
          local_70 = (byte *)uVar15;
          *puVar5 = (uint)local_78;
          puVar5[1] = (uint)local_74;
          puVar5[2] = uVar15;
          local_d0 = local_98;
          local_cc = local_94;
          local_c8 = local_90;
          uVar2 = 1;
LAB_013d7070:
          local_c4._0_1_ = uVar2;
          local_c4 = (byte *)CONCAT31(local_c4._1_3_,uVar2);
          local_e0 = 0x80000001;
        }
      }
      else if (uVar6 == 1) {
        uVar15 = puVar5[2];
        local_98 = *puVar5;
        local_94 = (byte *)puVar5[1];
        bVar12 = *pbVar17;
        pbVar13 = (byte *)(uint)bVar12;
        local_90 = uVar15;
        if (pbVar13 != &DAT_0000003d) {
          pbVar11 = pbVar13 + -0x30;
          bVar18 = &DAT_00000009 < pbVar11;
          if (bVar18) {
            pbVar11 = (byte *)(((uint)pbVar13 & 0xdf) - 0x41);
          }
          if (bVar18 && &DAT_00000019 < pbVar11) {
            if (pbVar13 != &DAT_0000002d || (char)local_c4 != '\0') goto LAB_013d70d8;
            bVar18 = true;
            uVar14 = 1;
          }
          else {
            if (pbVar13 == (byte *)0x3b) {
LAB_013d70d8:
              local_74 = FUN_012fbb84;
              local_78 = &local_b8;
              local_b8 = pbVar13;
              FUN_00664898(&local_88,&DAT_0059b159,&local_78);
              local_74 = (code *)local_88;
              local_70 = local_84;
              local_6c = (byte *)local_80;
              local_78 = (byte **)CONCAT22(local_78._2_2_,0x11);
              uVar9 = FUN_013e649c(&local_78);
              param_1[0x11] = 0x80000000;
              *param_1 = uVar9;
              FUN_0074dd34(&local_d0);
              FUN_019bb7e0(local_98,local_94);
              goto LAB_013d7150;
            }
            uVar14 = 2;
            if ((uint)(int)(char)bVar12 < 0x80000000) {
              uVar14 = 1;
            }
            bVar18 = (uint)(int)(char)bVar12 < 0x80000000;
          }
          if (*puVar5 - uVar15 < uVar14) {
            FUN_01af7b44(&local_98,uVar15,uVar14,1,1);
          }
          bVar10 = bVar12;
          if (!bVar18) {
            bVar10 = bVar12 >> 6 | 0xc0;
            (local_94 + local_90)[1] = bVar12 & 0x3f | 0x80;
          }
          local_94[local_90] = bVar10;
          local_90 = uVar14 + uVar15;
          *puVar5 = local_98;
          puVar5[1] = (uint)local_94;
          puVar5[2] = uVar14 + uVar15;
          uVar2 = 0;
          goto LAB_013d7070;
        }
        local_78 = (byte **)local_d0;
        local_74 = (code *)local_cc;
        local_70 = (byte *)local_c8;
        FUN_01bed864(&local_e0,puVar5,0xc);
        local_d0 = 1;
        local_cc = (byte *)0x0;
        local_d4 = (byte *)0x0;
        local_c8 = (uint)local_78;
        local_c4 = (byte *)local_74;
        uStack_c0 = (uint)local_70;
      }
      else {
        local_b8 = local_d4;
        local_b4 = local_d0;
        local_b0 = local_cc;
        local_98 = local_c8;
        local_94 = local_c4;
        local_90 = uStack_c0;
        bVar12 = *pbVar17;
        uVar6 = (uint)bVar12;
        if (uVar6 == 0x3b) {
          local_78 = (byte **)local_e0;
          local_74 = (code *)local_dc;
          local_70 = (byte *)local_d8;
          local_6c = local_d4;
          uStack_68 = local_d0;
          pbStack_64 = local_cc;
          if (uStack_c0 == local_c8) {
            FUN_013e6234(&local_98);
          }
          puVar7 = (uint *)(local_94 + uVar8 * 0x18);
          *puVar7 = (uint)local_78;
          puVar7[1] = (uint)local_74;
          puVar7[2] = (uint)local_70;
          puVar7[3] = (uint)local_6c;
          puVar7[4] = uStack_68;
          puVar7[5] = (uint)pbStack_64;
          local_90 = uVar8 + 1;
          *puVar5 = local_98;
          puVar5[1] = (uint)local_94;
          puVar5[2] = local_90;
          local_e0 = 0x80000000;
        }
        else {
          uVar8 = uVar6 - 0x21;
          bVar18 = 0x19 < uVar8;
          if (bVar18) {
            uVar8 = uVar6 - 0x3c;
          }
          if (bVar18 && 0x42 < uVar8) {
            local_74 = FUN_012fbb84;
            local_78 = (byte **)&local_ac;
            local_ac = uVar6;
            FUN_00664898(&local_88,&DAT_005713da,&local_78);
            local_74 = (code *)local_88;
            local_70 = local_84;
            local_6c = (byte *)local_80;
            local_78 = (byte **)CONCAT22(local_78._2_2_,0x11);
            uVar9 = FUN_013e649c(&local_78);
            param_1[0x11] = 0x80000000;
            *param_1 = uVar9;
            FUN_0074dd34(&local_c8);
            FUN_019bb7e0(local_b8,local_b4);
            uVar14 = uVar15;
            goto LAB_013d7440;
          }
          if (local_d4 == local_cc) {
            FUN_01af7b44(&local_b8,local_cc,1,1,1);
          }
          local_b0[local_b4] = bVar12;
          local_cc = pbVar11 + 1;
          local_b0 = local_cc;
          local_d4 = local_b8;
          local_d0 = local_b4;
          local_e0 = uVar15;
          local_dc = pbVar13;
          local_d8 = uVar14;
        }
      }
      uVar15 = uStack_c0;
      uVar14 = local_e0;
      pbVar17 = pbVar17 + 1;
    } while (pbVar17 != pbVar3);
    if ((int)local_e0 < 0) {
      if ((local_e0 & 0x7fffffff) == 0) goto LAB_013d7330;
      if ((local_e0 & 0x7fffffff) == 1) {
        local_78 = (byte **)&local_98;
        local_98 = *puVar5;
        local_94 = (byte *)puVar5[1];
        local_90 = puVar5[2];
        local_74 = (code *)&LAB_00632348;
        FUN_00664898(&local_88,&DAT_0058b5ef,&local_78);
        local_74 = (code *)local_88;
        local_70 = local_84;
        local_6c = (byte *)local_80;
        local_78 = (byte **)CONCAT22(local_78._2_2_,0x11);
        uVar9 = FUN_013e649c(&local_78);
        *param_1 = uVar9;
        param_1[0x11] = 0x80000000;
        uVar15 = local_98;
        pbVar13 = local_94;
LAB_013d7440:
        FUN_019bb7e0(uVar15,pbVar13);
        uVar15 = uVar14;
LAB_013d7444:
        if (uVar15 == 0x80000001) {
          FUN_0074dd34(&local_d0);
        }
LAB_013d7150:
        if (!bVar1) {
          FUN_013d76c0(&local_128);
          return;
        }
        return;
      }
    }
    local_78 = (byte **)local_e0;
    local_74 = (code *)local_dc;
    local_70 = (byte *)local_d8;
    local_6c = local_d4;
    uStack_68 = local_d0;
    pbStack_64 = local_cc;
    local_88 = local_c8;
    local_84 = local_c4;
    local_80 = uStack_c0;
    if (uStack_c0 == local_c8) {
      FUN_013e6234(&local_88);
    }
    puVar5 = (uint *)(local_84 + uVar15 * 0x18);
    *puVar5 = (uint)local_78;
    puVar5[1] = (uint)local_74;
    puVar5[2] = (uint)local_70;
    puVar5[3] = (uint)local_6c;
    puVar5[4] = uStack_68;
    puVar5[5] = (uint)pbStack_64;
    uStack_a0 = uVar15 + 1;
    local_a8 = local_88;
    pbStack_a4 = local_84;
    local_80 = uStack_a0;
  }
  FUN_01bed4e2(&local_78,&local_128,0x44);
  local_34 = local_a8;
  pbStack_30 = pbStack_a4;
  uStack_2c = uStack_a0;
  FUN_01bed4e2(param_1,&local_78,0x50);
  return;
}

