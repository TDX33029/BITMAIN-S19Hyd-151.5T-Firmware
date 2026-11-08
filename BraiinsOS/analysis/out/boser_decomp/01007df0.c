// FUN_01007df0 @ 01007df0 size=2832 calls_out=24 calls_in=1
// strings: Over `u32::MAX` routes created. If you need this; please file an issue.

int FUN_01007df0(undefined4 param_1,undefined4 ***param_2,int param_3,int param_4,undefined4 param_5
                )

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  undefined4 ****ppppuVar22;
  uint uVar23;
  undefined4 ****ppppuVar24;
  undefined4 ****ppppuVar25;
  undefined8 uVar26;
  int local_268;
  uint local_264;
  int local_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  int local_248;
  uint local_244;
  undefined1 local_240;
  undefined4 ****local_1f8;
  undefined4 ****local_1f4;
  undefined4 ****local_1f0;
  undefined4 ****local_1ec;
  undefined1 auStack_1e8 [128];
  undefined4 ****local_168;
  undefined4 ****local_164;
  undefined4 ****local_160;
  undefined4 ****local_e8;
  undefined8 local_e4;
  undefined4 ****local_dc;
  undefined4 ****local_d8;
  undefined4 ****local_d4;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined4 ****local_c8;
  undefined4 ****local_c4;
  undefined4 ****local_c0;
  undefined4 ****local_bc;
  undefined4 ****local_b8;
  undefined4 ****local_b4;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined4 ****local_a8;
  undefined4 ****local_a4;
  undefined4 ****local_a0;
  undefined4 ****local_9c;
  undefined4 ****local_98;
  undefined4 ****local_94;
  undefined4 ****local_90;
  undefined4 ****local_8c;
  undefined4 ****local_88;
  undefined4 ****local_84;
  undefined4 ****local_80;
  undefined4 ****local_7c;
  undefined4 ****ppppuStack_78;
  undefined4 ****ppppuStack_74;
  undefined4 ****local_70;
  undefined4 ****ppppuStack_6c;
  undefined4 ****ppppuStack_68;
  undefined4 ****ppppuStack_64;
  undefined4 uStack_60;
  undefined4 ****local_58;
  undefined4 ****local_54;
  undefined4 ****local_50;
  undefined4 ****ppppuStack_4c;
  undefined4 uStack_48;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  undefined4 ****local_38;
  undefined4 ****local_34;
  undefined4 uStack_30;
  undefined4 ***local_2c;
  int local_28;
  
  FUN_00fef934(&local_268,param_1);
  uVar26 = FUN_0070d26c(local_240,param_2,param_3);
  if ((int)uVar26 != 0) {
    FUN_00feb2a8(param_4);
    ppppuVar25 = (undefined4 ****)&DAT_80000000;
LAB_010088d4:
    local_1f4 = (undefined4 ****)&LAB_012b97d8;
    local_1f8 = &local_e8;
    local_e8 = ppppuVar25;
    local_e4 = uVar26;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00590e5f,&local_1f8,param_5);
  }
  if (*(int *)(local_248 + 0x34) != 0) {
    uVar11 = FUN_01a9c24c(*(undefined4 *)(local_248 + 0x38),*(undefined4 *)(local_248 + 0x3c),
                          *(undefined4 *)(local_248 + 0x40),*(undefined4 *)(local_248 + 0x44),
                          param_2,param_3);
    uVar18 = uVar11 >> 0x19;
    iVar17 = *(int *)(local_248 + 0x28);
    uVar19 = *(uint *)(local_248 + 0x2c);
    iVar20 = 0;
    while( true ) {
      uVar11 = uVar19 & uVar11;
      uVar23 = *(uint *)(iVar17 + uVar11);
      uVar12 = uVar23 ^ uVar18 * 0x1010101;
      for (uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff; uVar12 != 0;
          uVar12 = uVar12 - 1 & uVar12) {
        uVar13 = uVar11 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                 uVar19;
        piVar14 = (int *)(iVar17 + -0xc + uVar13 * -0xc);
        if ((param_3 == piVar14[1]) &&
           (iVar15 = thunk_FUN_01bed842(param_2,*piVar14 + 8), iVar15 == 0)) {
          if (local_25c == 0) goto LAB_01008014;
          iVar17 = *(int *)(iVar17 + uVar13 * -0xc + -4);
          uVar11 = FUN_01656218(local_258,uStack_254,uStack_250,uStack_24c,iVar17);
          uVar18 = uVar11 >> 0x19;
          iVar20 = 0;
          goto LAB_01007f84;
        }
      }
      if ((uVar23 & 0x80808080 & uVar23 << 1) != 0) break;
      iVar20 = iVar20 + 4;
      uVar11 = uVar11 + iVar20;
    }
  }
LAB_01008014:
  uVar18 = local_244 + 1;
  if (0xfffffffe < local_244) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("Over `u32::MAX` routes created. If you need this, please file an issue.",0x47,
                 &DAT_01d2cca8);
  }
  local_244 = uVar18;
  local_2c = param_2;
  local_28 = param_3;
  uVar16 = FUN_00ff7120(&local_248);
  FUN_01a65fd0(&local_58,uVar16,param_2,param_3,uVar18);
  if (local_58 != (undefined4 ****)0x80000003) {
    local_e4._4_4_ = &local_40;
    local_40 = local_58;
    local_3c = local_54;
    local_38 = local_50;
    local_e8 = &local_2c;
    local_dc = (undefined4 ****)&LAB_015a6eb0;
    local_e4._0_4_ = (undefined4 ****)&LAB_01674ec4;
    FUN_00664898(&local_168,&DAT_005b5ab7,&local_e8);
    if (-1 < (int)local_40) {
      FUN_019bb7e0(local_40,local_3c);
    }
    if (local_168 != (undefined4 ****)&DAT_80000000) {
      FUN_00fedc64(param_4);
      pcVar21 = (char *)local_164;
      ppppuVar22 = local_160;
      ppppuVar25 = local_168;
LAB_0100834c:
      uVar26 = CONCAT44(ppppuVar22,pcVar21);
      if (ppppuVar25 != (undefined4 ****)&DAT_80000001) goto LAB_010088d4;
      goto LAB_01008354;
    }
  }
  FUN_00ff7c3c(&local_e8,&local_268,uVar18,param_4);
  if (local_e8 != (undefined4 ****)&SUB_00000004) {
    FUN_00fedc64(&local_e8);
  }
LAB_01008354:
  FUN_01bed4e2((int)&local_e4 + 4,&local_268,0x70);
  local_e4._0_4_ = (undefined4 ****)0x1;
  local_e8 = (undefined4 ****)0x1;
  iVar17 = thunk_FUN_01be5118(0x78);
  if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar17,&local_e8,0x78);
  return iVar17;
LAB_01007f84:
  uVar11 = local_264 & uVar11;
  uVar12 = *(uint *)(local_268 + uVar11);
  uVar19 = uVar12 ^ uVar18 * 0x1010101;
  uVar19 = ~uVar19 & 0x80808080 & uVar19 + 0xfefefeff;
  while (uVar19 != 0) {
    uVar23 = uVar19 >> 8;
    uVar13 = uVar19 >> 0x10;
    uVar1 = uVar19 >> 0x18;
    uVar2 = uVar19 << 0x18;
    uVar19 = uVar19 - 1 & uVar19;
    uVar23 = uVar11 + ((uint)LZCOUNT(uVar2 | (uVar23 & 0xff) << 0x10 | (uVar13 & 0xff) << 8 | uVar1)
                      >> 3) & local_264;
    if (iVar17 == *(int *)(local_268 + -0x90 + uVar23 * -0x90)) {
      if (*(int *)(local_268 + uVar23 * -0x90 + -0x8c) == 3) goto LAB_01008014;
      FUN_00ff7270(&local_e8);
      local_58 = local_e8;
      local_54 = (undefined4 ****)local_e4;
      local_50 = local_e4._4_4_;
      FUN_01006a24(&local_40,param_2,param_3,&DAT_00477de4,3,&local_58,param_4);
      ppppuVar22 = local_34;
      pcVar21 = (char *)local_38;
      ppppuVar25 = local_3c;
      ppppuVar24 = local_40;
      if (local_40 == (undefined4 ****)0x0) {
        local_e4._4_4_ = local_34;
        local_e4._0_4_ = local_38;
        local_e8 = local_3c;
        local_58 = local_dc;
        local_54 = local_d8;
        local_50 = local_d4;
        FUN_01006a24(&local_40,param_2,param_3,&DAT_0056efe0,4,&local_58,param_4 + 0xc);
        pcVar21 = (char *)local_38;
        ppppuVar22 = local_34;
        ppppuVar25 = local_3c;
        if (local_40 != (undefined4 ****)0x0) goto LAB_010081d8;
        local_d4 = local_34;
        local_d8 = local_38;
        local_dc = local_3c;
        local_58 = local_d0;
        local_54 = local_cc;
        local_50 = local_c8;
        FUN_01006a24(&local_40,param_2,param_3,&DAT_00477dea,6,&local_58,param_4 + 0x18);
        if (local_40 != (undefined4 ****)0x0) {
          bVar4 = false;
          uVar18 = 1;
          ppppuVar24 = (undefined4 ****)&DAT_00000001;
          pcVar21 = (char *)local_38;
          ppppuVar22 = local_34;
          ppppuVar25 = local_3c;
          goto LAB_010081f0;
        }
        local_c8 = local_34;
        local_cc = local_38;
        local_d0 = local_3c;
        local_58 = local_c4;
        local_54 = local_c0;
        local_50 = local_bc;
        FUN_01006a24(&local_40,param_2,param_3,&DAT_00477ddd,7,&local_58,param_4 + 0x24);
        if (local_40 != (undefined4 ****)0x0) {
          bVar5 = false;
          uVar18 = 1;
          ppppuVar24 = (undefined4 ****)&DAT_00000001;
          bVar4 = true;
          pcVar21 = (char *)local_38;
          ppppuVar22 = local_34;
          ppppuVar25 = local_3c;
          goto LAB_01008200;
        }
        local_bc = local_34;
        local_c0 = local_38;
        local_c4 = local_3c;
        local_58 = local_b8;
        local_54 = local_b4;
        local_50 = local_b0;
        FUN_01006a24(&local_40,param_2,param_3,&DAT_00477df7,5,&local_58,param_4 + 0x30);
        if (local_40 != (undefined4 ****)0x0) {
          bVar6 = false;
          bVar5 = true;
          ppppuVar24 = (undefined4 ****)&DAT_00000001;
          uVar18 = 1;
          bVar4 = true;
          pcVar21 = (char *)local_38;
          ppppuVar22 = local_34;
          ppppuVar25 = local_3c;
          goto LAB_01008210;
        }
        local_b0 = local_34;
        local_b4 = local_38;
        local_b8 = local_3c;
        local_58 = local_ac;
        local_54 = local_a8;
        local_50 = local_a4;
        FUN_01006a24(&local_40,param_2,param_3,&DAT_0056e630,4,&local_58,param_4 + 0x3c);
        if (local_40 != (undefined4 ****)0x0) {
          bVar7 = false;
          uVar18 = 1;
          ppppuVar24 = (undefined4 ****)&DAT_00000001;
          bVar5 = true;
          bVar4 = true;
          bVar6 = true;
          pcVar21 = (char *)local_38;
          ppppuVar22 = local_34;
          ppppuVar25 = local_3c;
          goto LAB_01008220;
        }
        local_a4 = local_34;
        local_a8 = local_38;
        local_ac = local_3c;
        local_58 = local_a0;
        local_54 = local_9c;
        local_50 = local_98;
        FUN_01006a24(&local_40,param_2,param_3,&DAT_00477de7,3,&local_58,param_4 + 0x48);
        if (local_40 != (undefined4 ****)0x0) {
          bVar7 = true;
          bVar8 = false;
          bVar5 = true;
          ppppuVar24 = (undefined4 ****)&DAT_00000001;
          uVar18 = 1;
          bVar6 = true;
          bVar4 = true;
          pcVar21 = (char *)local_38;
          ppppuVar22 = local_34;
          ppppuVar25 = local_3c;
          goto LAB_01008230;
        }
        local_98 = local_34;
        local_9c = local_38;
        local_a0 = local_3c;
        local_58 = local_94;
        local_54 = local_90;
        local_50 = local_8c;
        FUN_01006a24(&local_40,param_2,param_3,&DAT_005319d2,5,&local_58,param_4 + 0x54);
        if (local_40 != (undefined4 ****)0x0) {
          bVar9 = false;
          uVar18 = 1;
          ppppuVar24 = (undefined4 ****)&DAT_00000001;
          bVar4 = true;
          bVar5 = true;
          bVar6 = true;
          bVar7 = true;
          bVar8 = true;
          pcVar21 = (char *)local_38;
          ppppuVar22 = local_34;
          ppppuVar25 = local_3c;
          goto LAB_01008244;
        }
        local_8c = local_34;
        local_90 = local_38;
        local_94 = local_3c;
        local_58 = local_88;
        local_54 = local_84;
        local_50 = local_80;
        FUN_01006a24(&local_40,param_2,param_3,&DAT_00477df0,7,&local_58,param_4 + 0x60);
        if (local_40 != (undefined4 ****)0x0) {
          bVar9 = true;
          bVar10 = false;
          ppppuVar24 = (undefined4 ****)&DAT_00000001;
          uVar18 = 1;
          bVar8 = true;
          bVar7 = true;
          bVar6 = true;
          bVar5 = true;
          bVar4 = true;
          pcVar21 = (char *)local_38;
          ppppuVar22 = local_34;
          ppppuVar25 = local_3c;
          goto LAB_01008254;
        }
        local_80 = local_34;
        local_84 = local_38;
        local_88 = local_3c;
        local_40 = local_7c;
        local_3c = ppppuStack_78;
        local_38 = ppppuStack_74;
        FUN_01006b58(&local_58,&local_40,param_4 + 0x6c);
        if (local_58 != (undefined4 ****)&DAT_00000003) {
          local_7c = local_58;
          ppppuStack_78 = local_54;
          ppppuStack_74 = local_50;
          local_40 = local_70;
          local_3c = ppppuStack_6c;
          local_38 = ppppuStack_68;
          local_34 = ppppuStack_64;
          uStack_30 = uStack_60;
          FUN_0070a708(&local_58,&local_40,param_4 + 0x78);
          ppppuVar22 = local_dc;
          pcVar21 = (char *)local_e4._4_4_;
          ppppuVar25 = (undefined4 ****)local_e4;
          ppppuVar24 = local_e8;
          local_70 = local_58;
          ppppuStack_6c = local_54;
          ppppuStack_68 = local_50;
          ppppuStack_64 = ppppuStack_4c;
          uStack_60 = uStack_48;
          FUN_01bed4e2(&local_168,&local_d8,0x7c);
          if (ppppuVar24 == (undefined4 ****)&DAT_00000003) goto LAB_0100834c;
          FUN_01bed4e2(auStack_1e8,&local_168,0x7c);
          local_1ec = ppppuVar22;
          local_1f0 = (undefined4 ****)pcVar21;
          local_1f4 = ppppuVar25;
          local_1f8 = ppppuVar24;
          FUN_00ff7c3c(&local_e8,&local_268,iVar17,&local_1f8);
          if (local_e8 != (undefined4 ****)&SUB_00000004) {
            FUN_00fedc64(&local_e8);
          }
          goto LAB_01008354;
        }
        bVar3 = false;
        pcVar21 = "Cannot merge two `MethodRouter`s that both have a fallback";
        ppppuVar25 = (undefined4 ****)&DAT_80000000;
        ppppuVar22 = (undefined4 ****)0x3a;
        ppppuVar24 = (undefined4 ****)&DAT_00000001;
        uVar18 = 1;
        bVar10 = true;
        bVar9 = true;
        bVar8 = true;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
      }
      else {
        FUN_00feb758(param_4 + 0xc);
LAB_010081d8:
        uVar18 = (uint)ppppuVar24 ^ 1;
        FUN_00feb758(param_4 + 0x18);
        bVar4 = true;
LAB_010081f0:
        bVar5 = true;
        FUN_00feb758(param_4 + 0x24);
LAB_01008200:
        bVar6 = true;
        FUN_00feb758(param_4 + 0x30);
LAB_01008210:
        bVar7 = true;
        FUN_00feb758(param_4 + 0x3c);
LAB_01008220:
        bVar8 = true;
        FUN_00feb758(param_4 + 0x48);
LAB_01008230:
        bVar9 = true;
        FUN_00feb758(param_4 + 0x54);
LAB_01008244:
        bVar10 = true;
        FUN_00feb758(param_4 + 0x60);
LAB_01008254:
        bVar3 = true;
        FUN_00feb76c(param_4 + 0x6c);
      }
      if (1 < *(uint *)(param_4 + 0x78)) {
        FUN_012840cc(param_4 + 0x7c);
      }
      if (uVar18 != 0) {
        FUN_00feb758(&local_e8);
      }
      if (ppppuVar24 != (undefined4 ****)0x0) {
        FUN_00feb758(&local_dc);
      }
      if (bVar4) {
        FUN_00feb758(&local_d0);
      }
      if (bVar5) {
        FUN_00feb758(&local_c4);
      }
      if (bVar6) {
        FUN_00feb758(&local_b8);
      }
      if (bVar7) {
        FUN_00feb758(&local_ac);
      }
      if (bVar8) {
        FUN_00feb758(&local_a0);
      }
      if (bVar9) {
        FUN_00feb758(&local_94);
      }
      if (bVar10) {
        FUN_00feb758(&local_88);
      }
      if (bVar3) {
        FUN_00feb76c(&local_7c);
      }
      if (&DAT_00000001 < local_70) {
        FUN_012840cc(&ppppuStack_6c);
      }
      goto LAB_0100834c;
    }
  }
  if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) goto LAB_01008014;
  iVar20 = iVar20 + 4;
  uVar11 = uVar11 + iVar20;
  goto LAB_01007f84;
}

