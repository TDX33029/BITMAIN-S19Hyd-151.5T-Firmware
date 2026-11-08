// FUN_00a7df18 @ 00a7df18 size=7284 calls_out=28 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a7df18(uint ********param_1,uint ********param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint ********ppppppppuVar11;
  uint ********ppppppppuVar12;
  uint ******ppppppuVar13;
  char *pcVar14;
  uint ********ppppppppuVar15;
  undefined *puVar16;
  uint *******pppppppuVar17;
  uint uVar18;
  uint *******pppppppuVar19;
  uint ********ppppppppuVar20;
  uint uVar21;
  uint *******pppppppuVar22;
  uint ********ppppppppuVar23;
  uint *****pppppuVar24;
  uint uVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint ********ppppppppuVar28;
  uint ********ppppppppuVar29;
  undefined4 *puVar30;
  bool bVar31;
  undefined8 uVar32;
  uint local_1a8;
  int local_1a4;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  uint ********local_190;
  uint ********local_18c;
  uint ********local_188;
  uint ********local_180;
  uint ********local_17c;
  uint ********local_178;
  uint ********local_174;
  uint ********ppppppppuStack_170;
  uint ********ppppppppuStack_16c;
  undefined4 local_168;
  uint ********local_160;
  uint ********ppppppppuStack_15c;
  uint ********ppppppppuStack_158;
  uint ********ppppppppuStack_154;
  uint ********ppppppppuStack_150;
  uint ********ppppppppuStack_14c;
  undefined1 local_148;
  char local_147;
  undefined2 local_146;
  uint ********local_140;
  uint ********ppppppppuStack_13c;
  uint ********ppppppppuStack_138;
  uint ********local_134;
  uint ********ppppppppuStack_130;
  uint ********ppppppppuStack_12c;
  undefined4 local_128;
  uint ********local_120;
  uint ********local_11c;
  uint ********local_118;
  uint ********local_110;
  uint ********local_10c;
  uint ********local_108;
  uint ********ppppppppuStack_104;
  uint ********ppppppppuStack_100;
  uint ********ppppppppuStack_fc;
  uint ********ppppppppuStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  uint ********local_e4;
  uint ********local_e0;
  undefined4 *local_dc;
  uint *******local_d8;
  uint ********local_d4;
  uint ********local_d0;
  uint ********local_cc;
  uint ********local_c8;
  uint ********local_c0;
  uint ********local_bc;
  undefined4 *local_b8;
  uint ********local_b4;
  uint ********local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint ********local_a0;
  uint ********local_9c;
  uint ********local_98;
  uint *******pppppppuStack_94;
  uint ********local_90;
  uint ********local_8c;
  uint ********local_88;
  undefined4 local_80;
  uint ********local_7c;
  uint ********local_78;
  uint ********local_74;
  uint ********local_70;
  uint ********local_6c;
  uint ********local_68;
  uint ********local_64;
  uint ********ppppppppuStack_60;
  uint ********ppppppppuStack_5c;
  uint ********local_58;
  uint ******ppppppuStack_54;
  char local_4b;
  undefined1 local_2c;
  
  ppppppppuVar12 = param_1 + 0x10;
  ppppppppuVar20 = param_1;
  if ((*(char *)(param_3 + 2) == '\x02') && (param_1[0xf] != (uint *******)0x0)) {
    uVar5 = FUN_01743c30(*ppppppppuVar12,param_1[0x11],param_1[0x12],param_1[0x13],param_2);
    uVar25 = uVar5 >> 0x19;
    ppppppppuVar20 = (uint ********)param_1[0xc];
    pppppppuVar22 = param_1[0xd];
    local_1a4 = 0;
    do {
      uVar5 = (uint)pppppppuVar22 & uVar5;
      uVar27 = *(uint *)((int)ppppppppuVar20 + uVar5);
      uVar6 = uVar27 ^ uVar25 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        iVar7 = FUN_01744014(param_2,ppppppppuVar20 +
                                     (uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 |
                                                             (uVar6 >> 8 & 0xff) << 0x10 |
                                                             (uVar6 >> 0x10 & 0xff) << 8 |
                                                             uVar6 >> 0x18) >> 3) &
                                     (uint)pppppppuVar22) * -9 + -9);
        uVar6 = uVar6 - 1 & uVar6;
        if (iVar7 != 0) {
          if ((DAT_01d50f88 == 0) &&
             (((DAT_01d4fb8c - 1 < 2 ||
               ((DAT_01d4fb8c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb84), cVar4 != '\0')))) &&
              (iVar7 = FUN_01aaa278(DAT_01d4fb84), iVar7 != 0)))) {
            local_7c = *(uint *********)(DAT_01d4fb84 + 0x20);
            if (local_7c == (uint ********)0x0) {
LAB_00a7fce0:
              puVar16 = &DAT_01d20d7c;
              goto LAB_00a7fce8;
            }
            local_17c = (uint ********)&local_c0;
            local_78 = *(uint *********)(DAT_01d4fb84 + 0x24);
            local_74 = *(uint *********)(DAT_01d4fb84 + 0x28);
            local_98 = (uint ********)(DAT_01d4fb84 + 0x1c);
            local_80 = (uint ********)*local_98;
            local_180 = (uint ********)&local_80;
            local_a0 = (uint ********)&local_180;
            local_70 = (uint ********)0x0;
            local_9c = (uint ********)&DAT_00000001;
            local_bc = (uint ********)&local_90;
            local_178 = (uint ********)&DAT_01d2ea4c;
            local_c0 = (uint ********)&DAT_005bb204;
            local_8c = (uint ********)FUN_0188d23c;
            local_90 = param_2;
            FUN_01aaaecc(DAT_01d4fb84,&local_a0);
            iVar7 = DAT_01d4fb84;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_10c = *(uint *********)(DAT_01d4fb84 + 0x14);
              local_108 = *(uint *********)(DAT_01d4fb84 + 0x18);
              local_110 = (uint ********)&DAT_00000005;
              DataMemoryBarrier(0xb);
              pppppuVar24 = DAT_01d4edc8;
              pcVar14 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pppppuVar24 = (uint *****)&DAT_01cfc5e0;
                pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)pppppuVar24[3])(pcVar14,&local_110);
              if (iVar8 != 0) {
                FUN_01aaa328(iVar7,pcVar14,pppppuVar24[4],&local_110,&local_a0);
              }
            }
          }
          else {
            iVar7 = DAT_01d4fb84;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_198 = *(undefined4 *)(DAT_01d4fb84 + 0x14);
              local_194 = *(undefined4 *)(DAT_01d4fb84 + 0x18);
              local_19c = 5;
              DataMemoryBarrier(0xb);
              pppppuVar24 = DAT_01d4edc8;
              pcVar14 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pppppuVar24 = (uint *****)&DAT_01cfc5e0;
                pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)pppppuVar24[3])(pcVar14,&local_19c);
              if (iVar8 != 0) {
                local_178 = (uint ********)(DAT_01d4fb84 + 0x1c);
                local_80 = (uint ********)*local_178;
                local_7c = *(uint *********)(DAT_01d4fb84 + 0x20);
                if (local_7c == (uint ********)0x0) goto LAB_00a7fce0;
                local_78 = *(uint *********)(DAT_01d4fb84 + 0x24);
                local_10c = (uint ********)&local_90;
                local_74 = *(uint *********)(DAT_01d4fb84 + 0x28);
                local_110 = (uint ********)&local_80;
                local_17c = (uint ********)&DAT_00000001;
                local_8c = (uint ********)&local_a0;
                local_180 = (uint ********)&local_110;
                local_70 = (uint ********)0x0;
                local_108 = (uint ********)&DAT_01d2ea4c;
                local_90 = (uint ********)&DAT_005bb204;
                local_9c = (uint ********)FUN_0188d23c;
                local_a0 = param_2;
                FUN_01aaa328(iVar7,pcVar14,pppppuVar24[4],&local_19c,&local_180);
              }
            }
          }
          FUN_009d65c0(param_3);
          goto LAB_00a7f9e4;
        }
      }
      if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
      local_1a4 = local_1a4 + 4;
      uVar5 = uVar5 + local_1a4;
    } while( true );
  }
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4fb50 - 1 < 2 ||
       ((DAT_01d4fb50 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb48), cVar4 != '\0')))))) &&
     (iVar7 = FUN_01aaa278(DAT_01d4fb48), iVar7 != 0)) {
    local_7c = *(uint *********)(DAT_01d4fb48 + 0x20);
    if (local_7c == (uint ********)0x0) {
LAB_00a7fca4:
      puVar16 = &DAT_01d20d1c;
LAB_00a7fce8:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar16);
    }
    local_9c = (uint ********)&local_e4;
    local_78 = *(uint *********)(DAT_01d4fb48 + 0x24);
    local_74 = *(uint *********)(DAT_01d4fb48 + 0x28);
    local_88 = (uint ********)(DAT_01d4fb48 + 0x1c);
    local_80 = (uint ********)*local_88;
    local_a0 = (uint ********)&local_80;
    local_90 = (uint ********)&local_a0;
    ppppppppuVar20 = (uint ********)0x0;
    local_70 = (uint ********)0x0;
    local_8c = (uint ********)&DAT_00000001;
    local_e0 = (uint ********)&local_c0;
    local_98 = (uint ********)&DAT_01d2ea4c;
    local_e4 = (uint ********)&DAT_0058cdbd;
    local_bc = (uint ********)FUN_0188d23c;
    local_c0 = param_2;
    FUN_01aaaecc(DAT_01d4fb48,&local_90);
    iVar7 = DAT_01d4fb48;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_17c = *(uint *********)(DAT_01d4fb48 + 0x14);
      local_178 = *(uint *********)(DAT_01d4fb48 + 0x18);
      local_180 = (uint ********)&DAT_00000005;
      DataMemoryBarrier(0xb);
      ppppppppuVar20 = (uint ********)DAT_01d4edc8;
      pcVar14 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        ppppppppuVar20 = (uint ********)&DAT_01cfc5e0;
        pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)ppppppppuVar20[3])(pcVar14,&local_180);
      if (iVar8 != 0) {
        local_110 = local_180;
        local_10c = local_17c;
        local_108 = local_178;
        FUN_01aaa328(iVar7,pcVar14,ppppppppuVar20[4],&local_110,&local_90);
      }
    }
  }
  else {
    iVar7 = DAT_01d4fb48;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_18c = *(uint *********)(DAT_01d4fb48 + 0x14);
      local_188 = *(uint *********)(DAT_01d4fb48 + 0x18);
      local_190 = (uint ********)&DAT_00000005;
      DataMemoryBarrier(0xb);
      ppppppppuVar20 = (uint ********)DAT_01d4edc8;
      pcVar14 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        ppppppppuVar20 = (uint ********)&DAT_01cfc5e0;
        pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)ppppppppuVar20[3])(pcVar14,&local_190);
      if (iVar8 != 0) {
        local_98 = (uint ********)(DAT_01d4fb48 + 0x1c);
        local_80 = (uint ********)*local_98;
        local_7c = *(uint *********)(DAT_01d4fb48 + 0x20);
        if (local_7c == (uint ********)0x0) goto LAB_00a7fca4;
        local_17c = (uint ********)&local_c0;
        local_78 = *(uint *********)(DAT_01d4fb48 + 0x24);
        local_74 = *(uint *********)(DAT_01d4fb48 + 0x28);
        local_180 = (uint ********)&local_80;
        local_a0 = (uint ********)&local_180;
        local_9c = (uint ********)&DAT_00000001;
        local_bc = (uint ********)&local_90;
        local_70 = (uint ********)0x0;
        local_178 = (uint ********)&DAT_01d2ea4c;
        local_c0 = (uint ********)&DAT_0058cdbd;
        local_8c = (uint ********)FUN_0188d23c;
        local_110 = local_190;
        local_10c = local_18c;
        local_108 = local_188;
        local_90 = param_2;
        FUN_01aaa328(iVar7,pcVar14,ppppppppuVar20[4],&local_110,&local_a0);
      }
    }
  }
  local_180 = (uint ********)*param_3;
  local_17c = (uint ********)param_3[1];
  local_178 = (uint ********)param_3[2];
  local_174 = (uint ********)param_3[3];
  ppppppppuStack_170 = (uint ********)param_3[4];
  ppppppppuStack_16c = (uint ********)param_3[5];
  local_168 = (uint ********)param_3[6];
  puVar9 = (uint *)FUN_01709e78(param_1 + 0x14,param_2);
  if (puVar9 != (uint *)0x0) {
    do {
      while( true ) {
        if (puVar9[3] == 0) goto LAB_00a7ebd8;
        puVar9[3] = puVar9[3] - 1;
        uVar5 = puVar9[2] + 1;
        iVar7 = *(int *)(puVar9[1] + puVar9[2] * 4);
        uVar25 = uVar5 - *puVar9;
        if (uVar5 < *puVar9) {
          uVar25 = uVar5;
        }
        puVar9[2] = uVar25;
        ppppppppuVar23 = (uint ********)(uint)*(byte *)(iVar7 + 0x40);
        DataMemoryBarrier(0xb);
        if (ppppppppuVar23 == (uint ********)0x0) break;
LAB_00a7e628:
        if (((DAT_01d50f88 == 0) &&
            ((DAT_01d4fb5c - 1 < 2 ||
             ((DAT_01d4fb5c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb54), cVar4 != '\0')))))) &&
           (iVar8 = FUN_01aaa278(DAT_01d4fb54), iVar8 != 0)) {
          if (*(uint *********)(DAT_01d4fb54 + 0x20) == (uint ********)0x0) {
LAB_00a7fc88:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20d3c);
          }
          local_8c = (uint ********)&local_b4;
          local_b8 = (undefined4 *)(DAT_01d4fb54 + 0x1c);
          local_80 = (uint ********)*local_b8;
          local_90 = (uint ********)&local_80;
          local_c0 = (uint ********)&local_90;
          local_78 = *(uint *********)(DAT_01d4fb54 + 0x24);
          local_74 = *(uint *********)(DAT_01d4fb54 + 0x28);
          local_70 = (uint ********)0x0;
          local_bc = (uint ********)&DAT_00000001;
          local_88 = (uint ********)&DAT_01d2ea4c;
          local_b0 = (uint ********)&local_e4;
          local_b4 = (uint ********)&DAT_005b017d;
          local_e0 = (uint ********)FUN_0188d23c;
          local_e4 = param_2;
          local_7c = *(uint *********)(DAT_01d4fb54 + 0x20);
          FUN_01aaaecc(DAT_01d4fb54,&local_c0);
          iVar8 = DAT_01d4fb54;
          ppppppppuVar20 = ppppppppuVar23;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_9c = *(uint *********)(DAT_01d4fb54 + 0x14);
            local_98 = *(uint *********)(DAT_01d4fb54 + 0x18);
            local_a0 = (uint ********)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar14 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            pppppuVar24 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              pppppuVar24 = (uint *****)&DAT_01cfc5e0;
            }
            iVar10 = (*(code *)pppppuVar24[3])(pcVar14,&local_a0);
            if (iVar10 != 0) {
              local_110 = local_a0;
              local_10c = local_9c;
              local_108 = local_98;
              FUN_01aaa328(iVar8,pcVar14,pppppuVar24[4],&local_110,&local_c0);
            }
          }
        }
        else {
          iVar8 = DAT_01d4fb54;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_11c = *(uint *********)(DAT_01d4fb54 + 0x14);
            local_118 = *(uint *********)(DAT_01d4fb54 + 0x18);
            local_120 = (uint ********)&DAT_00000005;
            DataMemoryBarrier(0xb);
            pcVar14 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            pppppuVar24 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              pppppuVar24 = (uint *****)&DAT_01cfc5e0;
            }
            iVar10 = (*(code *)pppppuVar24[3])(pcVar14,&local_120);
            if (iVar10 != 0) {
              if (*(uint *********)(DAT_01d4fb54 + 0x20) == (uint ********)0x0) goto LAB_00a7fc88;
              local_9c = (uint ********)&local_e4;
              local_a0 = (uint ********)&local_80;
              local_90 = (uint ********)&local_a0;
              local_74 = *(uint *********)(DAT_01d4fb54 + 0x28);
              local_70 = (uint ********)0x0;
              local_78 = *(uint *********)(DAT_01d4fb54 + 0x24);
              local_8c = (uint ********)&DAT_00000001;
              local_98 = (uint ********)&DAT_01d2ea4c;
              local_e0 = (uint ********)&local_c0;
              local_e4 = (uint ********)&DAT_005b017d;
              local_bc = (uint ********)FUN_0188d23c;
              local_110 = local_120;
              local_10c = local_11c;
              local_108 = local_118;
              local_c0 = param_2;
              local_88 = (uint ********)(DAT_01d4fb54 + 0x1c);
              local_80 = *(uint *********)(DAT_01d4fb54 + 0x1c);
              local_7c = *(uint *********)(DAT_01d4fb54 + 0x20);
              FUN_01aaa328(iVar8,pcVar14,pppppuVar24[4],&local_110,&local_90);
              ppppppppuVar20 = ppppppppuVar23;
            }
          }
        }
        if (ppppppppuVar23 != (uint ********)0x0) {
          FUN_009d0990(iVar7);
        }
      }
      cVar4 = local_168._1_1_;
      bVar31 = local_168._1_1_ == '\x02';
      local_168._0_2_ = CONCAT11(2,(undefined1)local_168);
      if (bVar31) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("value already sent",0x12,&DAT_01d20d2c);
      }
      local_160 = local_180;
      ppppppppuStack_15c = local_17c;
      ppppppppuStack_158 = local_178;
      ppppppppuStack_154 = local_174;
      ppppppppuStack_150 = ppppppppuStack_170;
      ppppppppuStack_14c = ppppppppuStack_16c;
      local_148 = (undefined1)local_168;
      local_146 = local_168._2_2_;
      local_147 = cVar4;
      FUN_00a7d52c(&local_80);
      ppppppppuVar20 = (uint ********)&local_80;
      if (local_4b != '\x02') {
        local_180 = local_80;
        local_17c = local_7c;
        local_178 = local_78;
        local_174 = local_74;
        ppppppppuStack_170 = local_70;
        ppppppppuStack_16c = local_6c;
        local_168 = local_68;
        ppppppppuVar20 = (uint ********)&local_64;
      }
      local_140 = (uint ********)*ppppppppuVar20;
      ppppppppuStack_13c = (uint ********)ppppppppuVar20[1];
      ppppppppuStack_138 = (uint ********)ppppppppuVar20[2];
      local_134 = (uint ********)ppppppppuVar20[3];
      ppppppppuStack_130 = (uint ********)ppppppppuVar20[4];
      ppppppppuStack_12c = (uint ********)ppppppppuVar20[5];
      pppppppuVar22 = ppppppppuVar20[6];
      DataMemoryBarrier(0xb);
      local_128 = pppppppuVar22;
      if (*(char *)(iVar7 + 0x40) == '\0') {
        puVar30 = (undefined4 *)(iVar7 + 8);
        pcVar14 = (char *)(iVar7 + 0x24);
        DataMemoryBarrier(0xb);
        do {
          cVar4 = *pcVar14;
          bVar31 = (bool)hasExclusiveAccess(pcVar14);
        } while (!bVar31);
        *pcVar14 = '\x01';
        puVar26 = (undefined4 *)0x0;
        if (cVar4 == '\0') {
          puVar26 = puVar30;
        }
        DataMemoryBarrier(0xb);
        if (cVar4 != '\0') goto LAB_00a7e5a8;
        if (*(char *)(iVar7 + 0x21) != '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_0056c428,0x20,&DAT_01d2dfec);
        }
        cVar4 = '\x02';
        *puVar30 = local_140;
        *(uint *********)(iVar7 + 0xc) = ppppppppuStack_13c;
        *(uint *********)(iVar7 + 0x10) = ppppppppuStack_138;
        *(uint *********)(iVar7 + 0x14) = local_134;
        *(uint *********)(iVar7 + 0x18) = ppppppppuStack_130;
        *(uint *********)(iVar7 + 0x1c) = ppppppppuStack_12c;
        *(uint ********)(iVar7 + 0x20) = pppppppuVar22;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(puVar26 + 7) = 0;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        ppppppppuVar20 = ppppppppuStack_130;
        if (*(char *)(iVar7 + 0x40) != '\0') {
          DataMemoryBarrier(0xb);
          do {
            cVar2 = *pcVar14;
            bVar31 = (bool)hasExclusiveAccess(pcVar14);
          } while (!bVar31);
          *pcVar14 = '\x01';
          DataMemoryBarrier(0xb);
          if (cVar2 == '\0') {
            cVar4 = *(char *)(iVar7 + 0x21);
            *(undefined1 *)(iVar7 + 0x21) = 2;
            if (cVar4 == '\x02') {
              DataMemoryBarrier(0xb);
              *(undefined1 *)(iVar7 + 0x24) = 0;
              cVar4 = '\x02';
              DataMemoryBarrier(0xb);
            }
            else {
              local_80 = (uint ********)*puVar30;
              local_7c = *(uint *********)(iVar7 + 0xc);
              local_78 = *(uint *********)(iVar7 + 0x10);
              ppppppppuVar20 = *(uint *********)(iVar7 + 0x14);
              local_70 = *(uint *********)(iVar7 + 0x18);
              local_6c = *(uint *********)(iVar7 + 0x1c);
              local_68 = (uint ********)CONCAT31(local_68._1_3_,*(undefined1 *)(iVar7 + 0x20));
              DataMemoryBarrier(0xb);
              *(undefined1 *)(iVar7 + 0x24) = 0;
              DataMemoryBarrier(0xb);
              local_1a8 = (uint)*(ushort *)(iVar7 + 0x22);
              local_74 = ppppppppuVar20;
            }
          }
        }
      }
      else {
LAB_00a7e5a8:
        local_128._1_1_ = (char)((uint)pppppppuVar22 >> 8);
        local_128._0_1_ = SUB41(pppppppuVar22,0);
        local_68 = (uint ********)CONCAT31(local_68._1_3_,(undefined1)local_128);
        ppppppppuVar20 = ppppppppuStack_138;
        local_1a8 = (uint)pppppppuVar22 >> 0x10;
        local_80 = local_140;
        local_7c = ppppppppuStack_13c;
        local_78 = ppppppppuStack_138;
        local_74 = local_134;
        local_70 = ppppppppuStack_130;
        local_6c = ppppppppuStack_12c;
        cVar4 = local_128._1_1_;
      }
      FUN_009d0990(iVar7);
      if (cVar4 != '\x02') {
        if (local_168._1_1_ != '\x02') {
          FUN_009d65c0(&local_180);
        }
        local_180 = local_80;
        local_17c = local_7c;
        local_178 = local_78;
        local_174 = local_74;
        ppppppppuStack_170 = local_70;
        ppppppppuStack_16c = local_6c;
        local_168._0_2_ = CONCAT11(cVar4,local_68._0_1_);
        local_168 = (uint ********)CONCAT22((short)local_1a8,(undefined2)local_168);
        ppppppppuVar20 = local_78;
        goto LAB_00a7e628;
      }
    } while (local_168._1_1_ != '\x02');
    if (puVar9[3] == 0) {
LAB_00a7ebd8:
      FUN_00abaa8c(&local_80,param_1 + 0x14,param_2);
      FUN_00a802b0(&local_80);
    }
  }
  if (local_168._1_1_ == '\x02') {
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4fb68 - 1 < 2 ||
         ((DAT_01d4fb68 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb60), cVar4 != '\0')))) &&
        (iVar7 = FUN_01aaa278(DAT_01d4fb60), iVar7 != 0)))) {
      if (*(uint *********)(DAT_01d4fb60 + 0x20) == (uint ********)0x0) {
LAB_00a7fcb4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20d4c);
      }
      local_9c = (uint ********)&local_e4;
      local_78 = *(uint *********)(DAT_01d4fb60 + 0x24);
      local_74 = *(uint *********)(DAT_01d4fb60 + 0x28);
      local_88 = (uint ********)(DAT_01d4fb60 + 0x1c);
      local_80 = (uint ********)*local_88;
      local_a0 = (uint ********)&local_80;
      local_90 = (uint ********)&local_a0;
      local_70 = (uint ********)0x0;
      local_e0 = (uint ********)&local_c0;
      local_8c = (uint ********)&DAT_00000001;
      local_98 = (uint ********)&DAT_01d2ea4c;
      local_e4 = (uint ********)&DAT_00577ddd;
      local_bc = (uint ********)FUN_0188d23c;
      local_c0 = param_2;
      local_7c = *(uint *********)(DAT_01d4fb60 + 0x20);
      FUN_01aaaecc(DAT_01d4fb60,&local_90);
      iVar7 = DAT_01d4fb60;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_10c = *(uint *********)(DAT_01d4fb60 + 0x14);
        local_108 = *(uint *********)(DAT_01d4fb60 + 0x18);
        local_110 = (uint ********)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pppppuVar24 = DAT_01d4edc8;
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppuVar24 = (uint *****)&DAT_01cfc5e0;
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppuVar24[3])(pcVar14,&local_110);
        if (iVar8 != 0) {
          FUN_01aaa328(iVar7,pcVar14,pppppuVar24[4],&local_110,&local_90);
        }
      }
    }
    else {
      iVar7 = DAT_01d4fb60;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_a8 = *(undefined4 *)(DAT_01d4fb60 + 0x14);
        local_a4 = *(undefined4 *)(DAT_01d4fb60 + 0x18);
        local_ac = 5;
        DataMemoryBarrier(0xb);
        pppppuVar24 = DAT_01d4edc8;
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppuVar24 = (uint *****)&DAT_01cfc5e0;
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppuVar24[3])(pcVar14,&local_ac);
        if (iVar8 != 0) {
          if (*(uint *********)(DAT_01d4fb60 + 0x20) == (uint ********)0x0) goto LAB_00a7fcb4;
          local_10c = (uint ********)&local_c0;
          local_78 = *(uint *********)(DAT_01d4fb60 + 0x24);
          local_74 = *(uint *********)(DAT_01d4fb60 + 0x28);
          local_110 = (uint ********)&local_80;
          local_a0 = (uint ********)&local_110;
          local_bc = (uint ********)&local_90;
          local_70 = (uint ********)0x0;
          local_9c = (uint ********)&DAT_00000001;
          local_108 = (uint ********)&DAT_01d2ea4c;
          local_c0 = (uint ********)&DAT_00577ddd;
          local_8c = (uint ********)FUN_0188d23c;
          local_98 = (uint ********)(DAT_01d4fb60 + 0x1c);
          local_90 = param_2;
          local_80 = *(uint *********)(DAT_01d4fb60 + 0x1c);
          local_7c = *(uint *********)(DAT_01d4fb60 + 0x20);
          FUN_01aaa328(iVar7,pcVar14,pppppuVar24[4],&local_ac,&local_a0);
        }
      }
    }
    goto LAB_00a7f9e4;
  }
  local_110 = local_180;
  local_10c = local_17c;
  local_108 = local_178;
  ppppppppuStack_104 = local_174;
  ppppppppuStack_100 = ppppppppuStack_170;
  ppppppppuStack_fc = ppppppppuStack_16c;
  ppppppppuStack_f8 = local_168;
  FUN_0170bbb4(&local_80,param_1[0x1e],param_1[0x1f]);
  ppppppppuVar29 = local_78;
  ppppppppuVar28 = local_7c;
  ppppppppuVar23 = local_80;
  uVar25 = (uint)*(byte *)param_2;
  if (uVar25 == 0) {
    uVar5 = 0;
  }
  else if (uVar25 == 1) {
    uVar5 = (uint)*(byte *)((int)param_2 + 1) << 8;
  }
  else {
    ppppppppuVar20 = (uint ********)FUN_014333b0();
    pppppppuVar22 = param_2[1];
    (*(code *)**pppppppuVar22)(&local_a0,pppppppuVar22 + 3,pppppppuVar22[1],pppppppuVar22[2]);
    *ppppppppuVar20 = (uint *******)local_a0;
    ppppppppuVar20[1] = (uint *******)local_9c;
    ppppppppuVar20[2] = (uint *******)local_98;
    ppppppppuVar20[3] = pppppppuStack_94;
    uVar5 = 0;
  }
  local_80 = (uint ********)(uVar5 | uVar25);
  local_7c = ppppppppuVar20;
  (*(code *)*param_2[2])(&local_78,param_2 + 5,param_2[3],param_2[4]);
  uVar5 = FUN_01743c30(*ppppppppuVar12,param_1[0x11],param_1[0x12],param_1[0x13],&local_80);
  pppppppuVar22 = param_1[0xc];
  iVar7 = 0;
  pppppppuVar17 = param_1[0xd];
  uVar25 = uVar5;
  while( true ) {
    uVar25 = (uint)pppppppuVar17 & uVar25;
    uVar27 = *(uint *)((int)pppppppuVar22 + uVar25);
    uVar6 = uVar27 ^ (uVar5 >> 0x19) * 0x1010101;
    for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      ppppppppuVar20 =
           (uint ********)
           (pppppppuVar22 +
           (uVar25 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
           (uint)pppppppuVar17) * -9);
      iVar8 = FUN_014146a0(ppppppppuVar20 + -9,&local_80);
      if ((iVar8 != 0) &&
         (ppppppppuVar11 = (uint ********)ppppppppuVar20[-5], ppppppppuVar11 == local_70)) {
        ppppppppuVar15 = local_74;
        pppppppuVar19 = ppppppppuVar20[-6];
        do {
          if (ppppppppuVar11 == (uint ********)0x0) {
            FUN_0184c61c(&local_80);
            goto LAB_00a7f2c4;
          }
          uVar18 = (uint)*(byte *)ppppppppuVar15;
          ppppppppuVar11 = (uint ********)((int)ppppppppuVar11 + -1);
          uVar21 = (uint)*(byte *)pppppppuVar19;
          if (uVar18 - 0x41 < 0x1a) {
            uVar18 = uVar18 | 0x20;
          }
          if (uVar21 - 0x41 < 0x1a) {
            uVar21 = uVar21 | 0x20;
          }
          ppppppppuVar15 = (uint ********)((int)ppppppppuVar15 + 1);
          pppppppuVar19 = (uint *******)((int)pppppppuVar19 + 1);
        } while (uVar21 == uVar18);
      }
    }
    if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
    iVar7 = iVar7 + 4;
    uVar25 = uVar25 + iVar7;
  }
  if (param_1[0xe] == (uint *******)0x0) {
    FUN_00944ed4(param_1 + 0xc,ppppppppuVar12);
  }
  ppppppppuVar20 = local_7c;
  if ((byte)local_80 != 3) {
    local_90._0_3_ = (undefined3)((uint)local_80 >> 8);
    local_a0 = local_74;
    local_9c = local_70;
    local_98 = local_6c;
    pppppppuVar17 = param_1[0xd];
    pppppppuVar22 = param_1[0xc];
    uVar25 = (uint)pppppppuVar17 & uVar5;
    uVar6 = *(uint *)((int)pppppppuVar22 + uVar25) & 0x80808080;
    if (uVar6 == 0) {
      iVar7 = 4;
      do {
        uVar25 = uVar25 + iVar7;
        iVar7 = iVar7 + 4;
        uVar25 = uVar25 & (uint)pppppppuVar17;
        uVar6 = *(uint *)((int)pppppppuVar22 + uVar25) & 0x80808080;
      } while (uVar6 == 0);
    }
    uVar25 = uVar25 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                     (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
             (uint)pppppppuVar17;
    uVar6 = (uint)*(char *)((int)pppppppuVar22 + uVar25);
    if (-1 < (int)uVar6) {
      uVar25 = (uint)*pppppppuVar22 & 0x80808080;
      uVar25 = LZCOUNT(((uint)*pppppppuVar22 & 0x80) << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                       (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18);
      uVar6 = (uint)*(byte *)((int)pppppppuVar22 + (uVar25 >> 3));
      uVar25 = uVar25 >> 3;
    }
    pppppppuVar19 = param_1[0xe];
    bVar3 = (byte)(uVar5 >> 0x19);
    *(byte *)((int)pppppppuVar22 + uVar25) = bVar3;
    param_1[0xe] = (uint *******)((int)pppppppuVar19 - (uVar6 & 1));
    *(byte *)((int)pppppppuVar22 + (uVar25 - 4 & (uint)pppppppuVar17) + 4) = bVar3;
    ppppppppuVar20 = (uint ********)(pppppppuVar22 + uVar25 * -9);
    *(undefined2 *)((int)ppppppppuVar20 + -0x23) = local_80._1_2_;
    ppppppppuVar20[-8] = (uint *******)local_7c;
    *(byte *)(ppppppppuVar20 + -9) = (byte)local_80;
    *(byte *)((int)ppppppppuVar20 + -0x21) = local_80._3_1_;
    ppppppppuVar20[-7] = (uint *******)local_78;
    ppppppppuVar20[-6] = (uint *******)local_74;
    ppppppppuVar20[-5] = (uint *******)local_70;
    ppppppppuVar20[-4] = (uint *******)local_6c;
    ppppppppuVar20[-1] = (uint *******)0x0;
    pppppppuVar22 = param_1[0xf];
    ppppppppuVar20[-3] = (uint *******)0x0;
    ppppppppuVar20[-2] = (uint *******)&DAT_00000008;
    param_1[0xf] = (uint *******)((int)pppppppuVar22 + 1);
  }
LAB_00a7f2c4:
  if (param_1[0x20] <= ppppppppuVar20[-1]) {
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4fb80 - 1 < 2 ||
         ((DAT_01d4fb80 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb78), cVar4 != '\0')))))) &&
       (iVar7 = FUN_01aaa278(DAT_01d4fb78), iVar7 != 0)) {
      if (*(uint *********)(DAT_01d4fb78 + 0x20) == (uint ********)0x0) {
LAB_00a7fd08:
        puVar16 = &DAT_01d20d6c;
        goto LAB_00a7fd10;
      }
      local_8c = (uint ********)&local_b4;
      local_78 = *(uint *********)(DAT_01d4fb78 + 0x24);
      local_74 = *(uint *********)(DAT_01d4fb78 + 0x28);
      local_b8 = (undefined4 *)(DAT_01d4fb78 + 0x1c);
      local_80 = (uint ********)*local_b8;
      local_c0 = (uint ********)&local_90;
      local_70 = (uint ********)0x0;
      local_bc = (uint ********)&DAT_00000001;
      local_b0 = (uint ********)&local_e4;
      local_88 = (uint ********)&DAT_01d2ea4c;
      local_b4 = (uint ********)&DAT_00593d28;
      local_e0 = (uint ********)FUN_0188d23c;
      local_e4 = param_2;
      local_90 = (uint ********)&local_80;
      local_7c = *(uint *********)(DAT_01d4fb78 + 0x20);
      FUN_01aaaecc(DAT_01d4fb78,&local_c0);
      iVar7 = DAT_01d4fb78;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_9c = *(uint *********)(DAT_01d4fb78 + 0x14);
        local_98 = *(uint *********)(DAT_01d4fb78 + 0x18);
        local_a0 = (uint ********)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pppppuVar24 = DAT_01d4edc8;
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppuVar24 = (uint *****)&DAT_01cfc5e0;
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppuVar24[3])(pcVar14,&local_a0);
        if (iVar8 != 0) {
          FUN_01aaa328(iVar7,pcVar14,pppppuVar24[4],&local_a0,&local_c0);
        }
      }
    }
    else {
      iVar7 = DAT_01d4fb78;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_ec = *(undefined4 *)(DAT_01d4fb78 + 0x14);
        local_e8 = *(undefined4 *)(DAT_01d4fb78 + 0x18);
        local_f0 = 5;
        DataMemoryBarrier(0xb);
        pppppuVar24 = DAT_01d4edc8;
        pcVar14 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppuVar24 = (uint *****)&DAT_01cfc5e0;
          pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppuVar24[3])(pcVar14,&local_f0);
        if (iVar8 != 0) {
          if (*(uint *********)(DAT_01d4fb78 + 0x20) == (uint ********)0x0) goto LAB_00a7fd08;
          local_78 = *(uint *********)(DAT_01d4fb78 + 0x24);
          local_74 = *(uint *********)(DAT_01d4fb78 + 0x28);
          local_9c = (uint ********)&local_e4;
          local_90 = (uint ********)&local_a0;
          local_8c = (uint ********)&DAT_00000001;
          local_e0 = (uint ********)&local_c0;
          local_70 = (uint ********)0x0;
          local_98 = (uint ********)&DAT_01d2ea4c;
          local_e4 = (uint ********)&DAT_00593d28;
          local_bc = (uint ********)FUN_0188d23c;
          local_c0 = param_2;
          local_a0 = (uint ********)&local_80;
          local_88 = (uint ********)(DAT_01d4fb78 + 0x1c);
          local_80 = *(uint *********)(DAT_01d4fb78 + 0x1c);
          local_7c = *(uint *********)(DAT_01d4fb78 + 0x20);
          FUN_01aaa328(iVar7,pcVar14,pppppuVar24[4],&local_f0,&local_90);
        }
      }
    }
    FUN_009d65c0(&local_110);
    goto LAB_00a7f9e4;
  }
  if (((DAT_01d50f88 < 2) &&
      ((DAT_01d4fb74 - 1 < 2 ||
       ((DAT_01d4fb74 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb6c), cVar4 != '\0')))))) &&
     (iVar7 = FUN_01aaa278(DAT_01d4fb6c), iVar7 != 0)) {
    if (*(int *)(DAT_01d4fb6c + 0x20) == 0) {
LAB_00a7fcfc:
      puVar16 = &DAT_01d20d5c;
LAB_00a7fd10:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar16);
    }
    local_bc = &local_d8;
    local_78 = *(uint *********)(DAT_01d4fb6c + 0x24);
    local_74 = *(uint *********)(DAT_01d4fb6c + 0x28);
    local_dc = (undefined4 *)(DAT_01d4fb6c + 0x1c);
    local_80 = (uint ********)*local_dc;
    local_e4 = (uint ********)&local_c0;
    local_70 = (uint ********)0x0;
    local_e0 = (uint ********)&DAT_00000001;
    local_d4 = (uint ********)&local_b4;
    local_b8 = (undefined4 *)&DAT_01d2ea4c;
    local_d8 = (uint *******)&DAT_005ae714;
    local_b0 = (uint ********)FUN_0188d23c;
    local_c0 = (uint ********)&local_80;
    local_b4 = param_2;
    local_7c = (uint ********)*(int *)(DAT_01d4fb6c + 0x20);
    FUN_01aaaecc(DAT_01d4fb6c,&local_e4);
    iVar7 = DAT_01d4fb6c;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_8c = *(uint *********)(DAT_01d4fb6c + 0x14);
      local_88 = *(uint *********)(DAT_01d4fb6c + 0x18);
      local_90 = (uint ********)&SUB_00000004;
      DataMemoryBarrier(0xb);
      pppppuVar24 = DAT_01d4edc8;
      pcVar14 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pppppuVar24 = (uint *****)&DAT_01cfc5e0;
        pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)pppppuVar24[3])(pcVar14,&local_90);
      if (iVar8 != 0) {
        local_a0 = local_90;
        local_9c = local_8c;
        local_98 = local_88;
        FUN_01aaa328(iVar7,pcVar14,pppppuVar24[4],&local_a0,&local_e4);
      }
    }
  }
  else {
    iVar7 = DAT_01d4fb6c;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_cc = *(uint *********)(DAT_01d4fb6c + 0x14);
      local_c8 = *(uint *********)(DAT_01d4fb6c + 0x18);
      local_d0 = (uint ********)&SUB_00000004;
      DataMemoryBarrier(0xb);
      pppppuVar24 = DAT_01d4edc8;
      pcVar14 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pppppuVar24 = (uint *****)&DAT_01cfc5e0;
        pcVar14 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)pppppuVar24[3])(pcVar14,&local_d0);
      if (iVar8 != 0) {
        if (*(int *)(DAT_01d4fb6c + 0x20) == 0) goto LAB_00a7fcfc;
        local_8c = (uint ********)&local_b4;
        local_78 = *(uint *********)(DAT_01d4fb6c + 0x24);
        local_74 = *(uint *********)(DAT_01d4fb6c + 0x28);
        local_c0 = (uint ********)&local_90;
        local_70 = (uint ********)0x0;
        local_bc = (uint ********)&DAT_00000001;
        local_b0 = (uint ********)&local_e4;
        local_88 = (uint ********)&DAT_01d2ea4c;
        local_b4 = (uint ********)&DAT_005ae714;
        local_e0 = (uint ********)FUN_0188d23c;
        local_a0 = local_d0;
        local_9c = local_cc;
        local_98 = local_c8;
        local_e4 = param_2;
        local_b8 = (undefined4 *)(DAT_01d4fb6c + 0x1c);
        local_90 = (uint ********)&local_80;
        local_80 = (uint ********)*(uint ********)(DAT_01d4fb6c + 0x1c);
        local_7c = (uint ********)*(int *)(DAT_01d4fb6c + 0x20);
        FUN_01aaa328(iVar7,pcVar14,pppppuVar24[4],&local_a0,&local_c0);
      }
    }
  }
  local_70 = local_110;
  local_6c = local_10c;
  local_68 = local_108;
  local_64 = ppppppppuStack_104;
  ppppppppuStack_60 = ppppppppuStack_100;
  ppppppppuStack_5c = ppppppppuStack_fc;
  local_58 = ppppppppuStack_f8;
  pppppppuVar22 = ppppppppuVar20[-1];
  local_80 = ppppppppuVar23;
  local_7c = ppppppppuVar28;
  local_78 = ppppppppuVar29;
  if (pppppppuVar22 == ppppppppuVar20[-3]) {
    FUN_018061c0(ppppppppuVar20 + -3);
  }
  pppppppuVar17 = ppppppppuVar20[-2] + (int)pppppppuVar22 * 0xc;
  *pppppppuVar17 = (uint ******)local_80;
  pppppppuVar17[1] = (uint ******)local_7c;
  pppppppuVar17[2] = (uint ******)local_78;
  pppppppuVar17[3] = (uint ******)local_74;
  pppppppuVar17[4] = (uint ******)local_70;
  pppppppuVar17[5] = (uint ******)local_6c;
  pppppppuVar17[6] = (uint ******)local_68;
  pppppppuVar17[7] = (uint ******)local_64;
  pppppppuVar17[8] = (uint ******)ppppppppuStack_60;
  pppppppuVar17[9] = (uint ******)ppppppppuStack_5c;
  pppppppuVar17[10] = (uint ******)local_58;
  pppppppuVar17[0xb] = ppppppuStack_54;
  ppppppppuVar20[-1] = (uint *******)((int)pppppppuVar22 + 1);
  ppppppppuVar20 = param_1 + 0x21;
  if ((*ppppppppuVar20 == (uint *******)0x0) &&
     (ppppppppuVar12 = (uint ********)param_1[2], ppppppppuVar12 != (uint ********)&DAT_3b9aca00)) {
    ppppppppuVar28 = (uint ********)*param_1;
    ppppppppuVar29 = (uint ********)param_1[1];
    bVar31 = ppppppppuVar12 == (uint ********)0x0 &&
             (ppppppppuVar28 == (uint ********)0x0 && ppppppppuVar29 == (uint ********)0x0);
    ppppppppuVar23 = ppppppppuStack_5c;
    if (ppppppppuVar12 != (uint ********)0x0 ||
        (ppppppppuVar28 != (uint ********)0x0 || ppppppppuVar29 != (uint ********)0x0)) {
      ppppppppuVar23 = (uint ********)param_1[0x1e];
      bVar31 = ppppppppuVar23 == (uint ********)0x0;
    }
    if (!bVar31) {
      do {
        pppppppuVar22 = *ppppppppuVar23;
        bVar31 = (bool)hasExclusiveAccess(ppppppppuVar23);
      } while (!bVar31);
      *ppppppppuVar23 = (uint *******)((int)pppppppuVar22 + 1);
      if (-1 < (int)pppppppuVar22) {
        ppppppppuVar11 = (uint ********)param_1[0x1f];
        if ((ppppppppuVar28 == (uint ********)0x0 && ppppppppuVar29 == (uint ********)0x0) &&
            ppppppppuVar12 < (uint ********)0x55d4a81) {
          ppppppppuVar28 = (uint ********)0x0;
          ppppppppuVar29 = (uint ********)0x0;
          ppppppppuVar12 = (uint ********)0x55d4a80;
        }
        uVar32 = FUN_0170f480();
        ppppppppuVar15 = (uint ********)((ulonglong)uVar32 >> 0x20);
        FUN_00a7dd44(ppppppppuVar20);
        *ppppppppuVar20 = (uint *******)uVar32;
        do {
          pppppppuVar22 = *ppppppppuVar23;
          bVar31 = (bool)hasExclusiveAccess(ppppppppuVar23);
        } while (!bVar31);
        *ppppppppuVar23 = (uint *******)((int)pppppppuVar22 + 1);
        if (-1 < (int)pppppppuVar22) {
          ppppppppuVar20 = (uint ********)FUN_017048d8(param_4);
          pppppppuVar17 = param_1[0x1d];
          pppppppuVar22 = param_1[0x1c];
          local_2c = 0;
          local_80 = ppppppppuVar28;
          local_7c = ppppppppuVar29;
          local_78 = ppppppppuVar12;
          local_70 = ppppppppuVar23;
          local_6c = ppppppppuVar11;
          local_68 = ppppppppuVar15;
          local_64 = ppppppppuVar20;
          puVar30 = (undefined4 *)thunk_FUN_01be5118(0x58);
          if (puVar30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x58);
          }
          *puVar30 = ppppppppuVar28;
          *(undefined1 *)(puVar30 + 0x15) = 0;
          puVar30[4] = ppppppppuVar23;
          puVar30[5] = ppppppppuVar11;
          puVar30[6] = ppppppppuVar15;
          puVar30[7] = ppppppppuVar20;
          puVar30[2] = ppppppppuVar12;
          ppppppuVar13 = pppppppuVar17[2];
          puVar30[1] = ppppppppuVar29;
          (*(code *)pppppppuVar17[3])
                    ((int)pppppppuVar22 + ((int)ppppppuVar13 - 1U & 0xfffffff8) + 8,puVar30,
                     &DAT_01c0cf18);
          DataMemoryBarrier(0xb);
          do {
            pppppppuVar22 = *ppppppppuVar23;
            bVar31 = (bool)hasExclusiveAccess(ppppppppuVar23);
          } while (!bVar31);
          *ppppppppuVar23 = (uint *******)((int)pppppppuVar22 + -1);
          if (pppppppuVar22 == (uint *******)&DAT_00000001) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(ppppppppuVar23,ppppppppuVar11);
          }
          goto LAB_00a7f9e4;
        }
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xa7fd20);
      (*pcVar1)();
    }
  }
LAB_00a7f9e4:
  FUN_0178e1c4(param_2);
  return;
}

