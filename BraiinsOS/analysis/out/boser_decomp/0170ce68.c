// FUN_0170ce68 @ 0170ce68 size=7324 calls_out=28 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0170ce68(uint ********param_1,uint ********param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint ********ppppppppuVar12;
  uint ********ppppppppuVar13;
  undefined4 *puVar14;
  uint ******ppppppuVar15;
  uint ********ppppppppuVar16;
  undefined *puVar17;
  uint *******pppppppuVar18;
  uint uVar19;
  uint *******pppppppuVar20;
  uint ********ppppppppuVar21;
  uint uVar22;
  uint ********ppppppppuVar23;
  uint *******pppppppuVar24;
  uint *****pppppuVar25;
  char *pcVar26;
  uint uVar27;
  uint ********ppppppppuVar28;
  uint ********ppppppppuVar29;
  bool bVar30;
  undefined8 uVar31;
  uint local_1cc;
  int local_1c4;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  uint ********local_1b0;
  uint ********local_1ac;
  uint ********local_1a8;
  uint ********local_1a0;
  uint ********local_19c;
  uint ********local_198;
  uint ********local_194;
  uint ********ppppppppuStack_190;
  uint ********ppppppppuStack_18c;
  undefined4 local_188;
  uint ********local_180;
  uint ********ppppppppuStack_17c;
  uint ********ppppppppuStack_178;
  uint ********ppppppppuStack_174;
  uint ********ppppppppuStack_170;
  uint ********ppppppppuStack_16c;
  undefined1 local_168;
  char local_167;
  undefined2 local_166;
  uint ********local_160;
  uint ********ppppppppuStack_15c;
  uint ********ppppppppuStack_158;
  uint ********local_154;
  uint ********ppppppppuStack_150;
  uint ********ppppppppuStack_14c;
  undefined4 local_148;
  uint ********local_140;
  uint ********ppppppppuStack_13c;
  uint ********ppppppppuStack_138;
  uint ********ppppppppuStack_134;
  uint ********ppppppppuStack_130;
  uint ********ppppppppuStack_12c;
  undefined1 local_128;
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
  undefined *local_d8;
  uint ********local_d4;
  uint ********local_d0;
  uint ********local_cc;
  uint ********local_c8;
  uint ********local_c0;
  undefined **local_bc;
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
  undefined4 local_90;
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
  
  ppppppppuVar13 = param_1 + 0x10;
  ppppppppuVar21 = param_1;
  if ((*(char *)(param_3 + 2) == '\x02') && (param_1[0xf] != (uint *******)0x0)) {
    uVar5 = FUN_01743c30(*ppppppppuVar13,param_1[0x11],param_1[0x12],param_1[0x13],param_2);
    uVar10 = uVar5 >> 0x19;
    ppppppppuVar21 = (uint ********)param_1[0xc];
    pppppppuVar24 = param_1[0xd];
    local_1c4 = 0;
    do {
      uVar5 = (uint)pppppppuVar24 & uVar5;
      uVar27 = *(uint *)((int)ppppppppuVar21 + uVar5);
      uVar6 = uVar27 ^ uVar10 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        iVar7 = FUN_01744014(param_2,ppppppppuVar21 +
                                     (uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 |
                                                             (uVar6 >> 8 & 0xff) << 0x10 |
                                                             (uVar6 >> 0x10 & 0xff) << 8 |
                                                             uVar6 >> 0x18) >> 3) &
                                     (uint)pppppppuVar24) * -9 + -9);
        uVar6 = uVar6 - 1 & uVar6;
        if (iVar7 != 0) {
          if ((DAT_01d50f88 == 0) &&
             (((DAT_01d4fb8c - 1 < 2 ||
               ((DAT_01d4fb8c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb84), cVar4 != '\0')))) &&
              (iVar7 = FUN_01aaa278(DAT_01d4fb84), iVar7 != 0)))) {
            local_7c = *(uint *********)(DAT_01d4fb84 + 0x20);
            if (local_7c == (uint ********)0x0) {
LAB_0170ec58:
              puVar17 = &DAT_01d20d7c;
              goto LAB_0170ec60;
            }
            local_19c = (uint ********)&local_c0;
            local_78 = *(uint *********)(DAT_01d4fb84 + 0x24);
            local_74 = *(uint *********)(DAT_01d4fb84 + 0x28);
            local_98 = (uint ********)(DAT_01d4fb84 + 0x1c);
            local_80 = (uint ********)*local_98;
            local_1a0 = (uint ********)&local_80;
            local_a0 = (uint ********)&local_1a0;
            local_70 = (uint ********)0x0;
            local_9c = (uint ********)&DAT_00000001;
            local_bc = (undefined **)&local_90;
            local_198 = (uint ********)&DAT_01d2ea4c;
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
              pppppuVar25 = DAT_01d4edc8;
              pcVar26 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pppppuVar25 = (uint *****)&DAT_01cfc5e0;
                pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)pppppuVar25[3])(pcVar26,&local_110);
              if (iVar8 != 0) {
                FUN_01aaa328(iVar7,pcVar26,pppppuVar25[4],&local_110,&local_a0);
              }
            }
          }
          else {
            iVar7 = DAT_01d4fb84;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_1b8 = *(undefined4 *)(DAT_01d4fb84 + 0x14);
              local_1b4 = *(undefined4 *)(DAT_01d4fb84 + 0x18);
              local_1bc = 5;
              DataMemoryBarrier(0xb);
              pppppuVar25 = DAT_01d4edc8;
              pcVar26 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pppppuVar25 = (uint *****)&DAT_01cfc5e0;
                pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)pppppuVar25[3])(pcVar26,&local_1bc);
              if (iVar8 != 0) {
                local_198 = (uint ********)(DAT_01d4fb84 + 0x1c);
                local_80 = (uint ********)*local_198;
                local_7c = *(uint *********)(DAT_01d4fb84 + 0x20);
                if (local_7c == (uint ********)0x0) goto LAB_0170ec58;
                local_78 = *(uint *********)(DAT_01d4fb84 + 0x24);
                local_10c = (uint ********)&local_90;
                local_74 = *(uint *********)(DAT_01d4fb84 + 0x28);
                local_110 = (uint ********)&local_80;
                local_19c = (uint ********)&DAT_00000001;
                local_8c = (uint ********)&local_a0;
                local_1a0 = (uint ********)&local_110;
                local_70 = (uint ********)0x0;
                local_108 = (uint ********)&DAT_01d2ea4c;
                local_90 = (uint ********)&DAT_005bb204;
                local_9c = (uint ********)FUN_0188d23c;
                local_a0 = param_2;
                FUN_01aaa328(iVar7,pcVar26,pppppuVar25[4],&local_1bc,&local_1a0);
              }
            }
          }
          FUN_0170bc0c(param_3);
          goto LAB_0170e95c;
        }
      }
      if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
      local_1c4 = local_1c4 + 4;
      uVar5 = uVar5 + local_1c4;
    } while( true );
  }
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4fb50 - 1 < 2 ||
       ((DAT_01d4fb50 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb48), cVar4 != '\0')))))) &&
     (iVar7 = FUN_01aaa278(DAT_01d4fb48), iVar7 != 0)) {
    local_7c = *(uint *********)(DAT_01d4fb48 + 0x20);
    if (local_7c == (uint ********)0x0) {
LAB_0170ec30:
      puVar17 = &DAT_01d20d1c;
LAB_0170ec60:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar17);
    }
    local_9c = (uint ********)&local_e4;
    local_78 = *(uint *********)(DAT_01d4fb48 + 0x24);
    local_74 = *(uint *********)(DAT_01d4fb48 + 0x28);
    local_88 = (uint ********)(DAT_01d4fb48 + 0x1c);
    local_80 = (uint ********)*local_88;
    local_a0 = (uint ********)&local_80;
    local_90 = (uint ********)&local_a0;
    ppppppppuVar21 = (uint ********)0x0;
    local_70 = (uint ********)0x0;
    local_8c = (uint ********)&DAT_00000001;
    local_e0 = (uint ********)&local_c0;
    local_98 = (uint ********)&DAT_01d2ea4c;
    local_e4 = (uint ********)&DAT_0058cdbd;
    local_bc = (undefined **)FUN_0188d23c;
    local_c0 = param_2;
    FUN_01aaaecc(DAT_01d4fb48,&local_90);
    iVar7 = DAT_01d4fb48;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_19c = *(uint *********)(DAT_01d4fb48 + 0x14);
      local_198 = *(uint *********)(DAT_01d4fb48 + 0x18);
      local_1a0 = (uint ********)&DAT_00000005;
      DataMemoryBarrier(0xb);
      ppppppppuVar21 = (uint ********)DAT_01d4edc8;
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        ppppppppuVar21 = (uint ********)&DAT_01cfc5e0;
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)ppppppppuVar21[3])(pcVar26,&local_1a0);
      if (iVar8 != 0) {
        local_110 = local_1a0;
        local_10c = local_19c;
        local_108 = local_198;
        FUN_01aaa328(iVar7,pcVar26,ppppppppuVar21[4],&local_110,&local_90);
      }
    }
  }
  else {
    iVar7 = DAT_01d4fb48;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_1ac = *(uint *********)(DAT_01d4fb48 + 0x14);
      local_1a8 = *(uint *********)(DAT_01d4fb48 + 0x18);
      local_1b0 = (uint ********)&DAT_00000005;
      DataMemoryBarrier(0xb);
      ppppppppuVar21 = (uint ********)DAT_01d4edc8;
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        ppppppppuVar21 = (uint ********)&DAT_01cfc5e0;
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)ppppppppuVar21[3])(pcVar26,&local_1b0);
      if (iVar8 != 0) {
        local_98 = (uint ********)(DAT_01d4fb48 + 0x1c);
        local_80 = (uint ********)*local_98;
        local_7c = *(uint *********)(DAT_01d4fb48 + 0x20);
        if (local_7c == (uint ********)0x0) goto LAB_0170ec30;
        local_19c = (uint ********)&local_c0;
        local_78 = *(uint *********)(DAT_01d4fb48 + 0x24);
        local_74 = *(uint *********)(DAT_01d4fb48 + 0x28);
        local_1a0 = (uint ********)&local_80;
        local_a0 = (uint ********)&local_1a0;
        local_9c = (uint ********)&DAT_00000001;
        local_bc = (undefined **)&local_90;
        local_70 = (uint ********)0x0;
        local_198 = (uint ********)&DAT_01d2ea4c;
        local_c0 = (uint ********)&DAT_0058cdbd;
        local_8c = (uint ********)FUN_0188d23c;
        local_110 = local_1b0;
        local_10c = local_1ac;
        local_108 = local_1a8;
        local_90 = param_2;
        FUN_01aaa328(iVar7,pcVar26,ppppppppuVar21[4],&local_110,&local_a0);
      }
    }
  }
  local_1a0 = (uint ********)*param_3;
  local_19c = (uint ********)param_3[1];
  local_198 = (uint ********)param_3[2];
  local_194 = (uint ********)param_3[3];
  ppppppppuStack_190 = (uint ********)param_3[4];
  ppppppppuStack_18c = (uint ********)param_3[5];
  local_188 = (uint ********)param_3[6];
  puVar9 = (uint *)FUN_01709e78(param_1 + 0x14,param_2);
  if (puVar9 != (uint *)0x0) {
    uVar10 = puVar9[3];
    if (uVar10 != 0) {
      do {
        puVar9[3] = uVar10 - 1;
        uVar5 = puVar9[2] + 1;
        iVar7 = *(int *)(puVar9[1] + puVar9[2] * 4);
        uVar10 = uVar5 - *puVar9;
        if (uVar5 < *puVar9) {
          uVar10 = uVar5;
        }
        puVar9[2] = uVar10;
        cVar4 = *(char *)(iVar7 + 0x40);
        DataMemoryBarrier(0xb);
        if (cVar4 == '\0') {
          cVar3 = local_188._1_1_;
          bVar30 = local_188._1_1_ == '\x02';
          local_188._0_2_ = CONCAT11(2,(undefined1)local_188);
          if (bVar30) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("value already sent",0x12,&DAT_01d20d2c);
          }
          local_180 = local_1a0;
          ppppppppuStack_17c = local_19c;
          ppppppppuStack_178 = local_198;
          ppppppppuStack_174 = local_194;
          ppppppppuStack_170 = ppppppppuStack_190;
          ppppppppuStack_16c = ppppppppuStack_18c;
          local_168 = (undefined1)local_188;
          local_166 = local_188._2_2_;
          local_167 = cVar3;
          FUN_01743998(&local_80);
          ppppppppuVar21 = (uint ********)&local_80;
          if (local_4b != '\x02') {
            local_1a0 = local_80;
            local_19c = local_7c;
            local_198 = local_78;
            local_194 = local_74;
            ppppppppuStack_190 = local_70;
            ppppppppuStack_18c = local_6c;
            local_188 = local_68;
            ppppppppuVar21 = (uint ********)&local_64;
          }
          local_160 = (uint ********)*ppppppppuVar21;
          ppppppppuStack_15c = (uint ********)ppppppppuVar21[1];
          ppppppppuStack_158 = (uint ********)ppppppppuVar21[2];
          local_154 = (uint ********)ppppppppuVar21[3];
          ppppppppuStack_150 = (uint ********)ppppppppuVar21[4];
          ppppppppuStack_14c = (uint ********)ppppppppuVar21[5];
          pppppppuVar24 = ppppppppuVar21[6];
          DataMemoryBarrier(0xb);
          local_148 = pppppppuVar24;
          if (*(char *)(iVar7 + 0x40) == '\0') {
            ppppppppuVar21 = (uint ********)(iVar7 + 0x24);
            DataMemoryBarrier(0xb);
            do {
              bVar2 = *(byte *)ppppppppuVar21;
              bVar30 = (bool)hasExclusiveAccess(ppppppppuVar21);
            } while (!bVar30);
            *(byte *)ppppppppuVar21 = 1;
            DataMemoryBarrier(0xb);
            if (bVar2 != 0) goto LAB_0170d4f8;
            if (*(char *)(iVar7 + 0x21) != '\x02') {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_0056c428,0x20,&DAT_01d2dfec);
            }
            local_148._1_1_ = '\x02';
            *(undefined4 *)(iVar7 + 8) = local_160;
            *(uint *********)(iVar7 + 0xc) = ppppppppuStack_15c;
            *(uint *********)(iVar7 + 0x10) = ppppppppuStack_158;
            *(uint *********)(iVar7 + 0x14) = local_154;
            *(uint *********)(iVar7 + 0x18) = ppppppppuStack_150;
            *(uint *********)(iVar7 + 0x1c) = ppppppppuStack_14c;
            *(uint ********)(iVar7 + 0x20) = pppppppuVar24;
            DataMemoryBarrier(0xb);
            *(undefined1 *)(iVar7 + 0x24) = 0;
            DataMemoryBarrier(0xb);
            DataMemoryBarrier(0xb);
            if (*(char *)(iVar7 + 0x40) == '\0') goto LAB_0170d51c;
            DataMemoryBarrier(0xb);
            do {
              bVar2 = *(byte *)ppppppppuVar21;
              bVar30 = (bool)hasExclusiveAccess(ppppppppuVar21);
            } while (!bVar30);
            *(byte *)ppppppppuVar21 = 1;
            DataMemoryBarrier(0xb);
            cVar3 = local_148._1_1_;
            if (bVar2 == 0) {
              cVar3 = *(char *)(iVar7 + 0x21);
              *(undefined1 *)(iVar7 + 0x21) = 2;
              if (cVar3 == '\x02') {
                DataMemoryBarrier(0xb);
                *(byte *)ppppppppuVar21 = 0;
                cVar3 = '\x02';
                DataMemoryBarrier(0xb);
              }
              else {
                local_140 = *(uint *********)(iVar7 + 8);
                ppppppppuStack_13c = *(uint *********)(iVar7 + 0xc);
                ppppppppuStack_138 = *(uint *********)(iVar7 + 0x10);
                ppppppppuStack_134 = *(uint *********)(iVar7 + 0x14);
                ppppppppuStack_130 = *(uint *********)(iVar7 + 0x18);
                ppppppppuStack_12c = *(uint *********)(iVar7 + 0x1c);
                local_128 = *(undefined1 *)(iVar7 + 0x20);
                DataMemoryBarrier(0xb);
                *(byte *)ppppppppuVar21 = 0;
                DataMemoryBarrier(0xb);
                local_1cc = (uint)*(ushort *)(iVar7 + 0x22);
              }
            }
          }
          else {
LAB_0170d4f8:
            local_148._0_1_ = SUB41(pppppppuVar24,0);
            local_1cc = (uint)pppppppuVar24 >> 0x10;
            local_148._1_1_ = (char)((uint)pppppppuVar24 >> 8);
            local_128 = (undefined1)local_148;
            ppppppppuVar21 = ppppppppuStack_158;
            local_140 = local_160;
            ppppppppuStack_13c = ppppppppuStack_15c;
            ppppppppuStack_138 = ppppppppuStack_158;
            ppppppppuStack_134 = local_154;
            ppppppppuStack_130 = ppppppppuStack_150;
            ppppppppuStack_12c = ppppppppuStack_14c;
LAB_0170d51c:
            cVar3 = local_148._1_1_;
          }
          FUN_0170c230(iVar7);
          if (cVar3 != '\x02') {
            if (local_188._1_1_ != '\x02') {
              FUN_0170bc0c(&local_1a0);
            }
            local_1a0 = local_140;
            local_19c = ppppppppuStack_13c;
            local_198 = ppppppppuStack_138;
            local_194 = ppppppppuStack_134;
            ppppppppuStack_190 = ppppppppuStack_130;
            ppppppppuStack_18c = ppppppppuStack_12c;
            local_188._0_2_ = CONCAT11(cVar3,local_128);
            local_188 = (uint ********)CONCAT22((short)local_1cc,(undefined2)local_188);
            ppppppppuVar21 = ppppppppuStack_138;
            goto LAB_0170d57c;
          }
          if (local_188._1_1_ == '\x02') {
            if (puVar9[3] != 0) goto LAB_0170db48;
            break;
          }
        }
        else {
LAB_0170d57c:
          if (((DAT_01d50f88 == 0) &&
              ((DAT_01d4fb5c - 1 < 2 ||
               ((DAT_01d4fb5c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4fb54), cVar3 != '\0')))))) &&
             (iVar8 = FUN_01aaa278(DAT_01d4fb54), iVar8 != 0)) {
            if (*(uint *********)(DAT_01d4fb54 + 0x20) == (uint ********)0x0) {
LAB_0170ec08:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20d3c);
            }
            local_8c = (uint ********)&local_b4;
            local_b8 = (undefined4 *)(DAT_01d4fb54 + 0x1c);
            local_80 = (uint ********)*local_b8;
            local_90 = (uint ********)&local_80;
            local_78 = *(uint *********)(DAT_01d4fb54 + 0x24);
            local_74 = *(uint *********)(DAT_01d4fb54 + 0x28);
            ppppppppuVar21 = (uint ********)0x0;
            local_70 = (uint ********)0x0;
            local_c0 = (uint ********)&local_90;
            local_bc = (undefined **)&DAT_00000001;
            local_88 = (uint ********)&DAT_01d2ea4c;
            local_b0 = (uint ********)&local_e4;
            local_b4 = (uint ********)&DAT_005b017d;
            local_e0 = (uint ********)FUN_0188d23c;
            local_e4 = param_2;
            local_7c = *(uint *********)(DAT_01d4fb54 + 0x20);
            FUN_01aaaecc(DAT_01d4fb54,&local_c0);
            iVar8 = DAT_01d4fb54;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_9c = *(uint *********)(DAT_01d4fb54 + 0x14);
              local_98 = *(uint *********)(DAT_01d4fb54 + 0x18);
              local_a0 = (uint ********)&DAT_00000005;
              DataMemoryBarrier(0xb);
              pcVar26 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              ppppppppuVar21 = (uint ********)DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                ppppppppuVar21 = (uint ********)&DAT_01cfc5e0;
              }
              iVar11 = (*(code *)ppppppppuVar21[3])(pcVar26,&local_a0);
              if (iVar11 != 0) {
                local_110 = local_a0;
                local_10c = local_9c;
                local_108 = local_98;
                FUN_01aaa328(iVar8,pcVar26,ppppppppuVar21[4],&local_110,&local_c0);
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
              pcVar26 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              ppppppppuVar21 = (uint ********)DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                ppppppppuVar21 = (uint ********)&DAT_01cfc5e0;
              }
              iVar11 = (*(code *)ppppppppuVar21[3])(pcVar26,&local_120);
              if (iVar11 != 0) {
                if (*(uint *********)(DAT_01d4fb54 + 0x20) == (uint ********)0x0) goto LAB_0170ec08;
                local_9c = (uint ********)&local_e4;
                local_a0 = (uint ********)&local_80;
                local_90 = (uint ********)&local_a0;
                local_78 = *(uint *********)(DAT_01d4fb54 + 0x24);
                local_74 = *(uint *********)(DAT_01d4fb54 + 0x28);
                local_70 = (uint ********)0x0;
                local_8c = (uint ********)&DAT_00000001;
                local_98 = (uint ********)&DAT_01d2ea4c;
                local_e0 = (uint ********)&local_c0;
                local_e4 = (uint ********)&DAT_005b017d;
                local_bc = (undefined **)FUN_0188d23c;
                local_110 = local_120;
                local_10c = local_11c;
                local_108 = local_118;
                local_c0 = param_2;
                local_88 = (uint ********)(DAT_01d4fb54 + 0x1c);
                local_80 = *(uint *********)(DAT_01d4fb54 + 0x1c);
                local_7c = *(uint *********)(DAT_01d4fb54 + 0x20);
                FUN_01aaa328(iVar8,pcVar26,ppppppppuVar21[4],&local_110,&local_90);
              }
            }
          }
          if (cVar4 != '\0') {
            FUN_0170c230(iVar7);
          }
        }
        uVar10 = puVar9[3];
      } while (uVar10 != 0);
    }
    FUN_0181e654(&local_80,param_1 + 0x14,param_2);
    FUN_0170f364(&local_80);
  }
LAB_0170db48:
  if (local_188._1_1_ == '\x02') {
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4fb68 - 1 < 2 ||
         ((DAT_01d4fb68 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb60), cVar4 != '\0')))) &&
        (iVar7 = FUN_01aaa278(DAT_01d4fb60), iVar7 != 0)))) {
      if (*(uint *********)(DAT_01d4fb60 + 0x20) == (uint ********)0x0) {
LAB_0170ec3c:
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
      local_bc = (undefined **)FUN_0188d23c;
      local_c0 = param_2;
      local_7c = *(uint *********)(DAT_01d4fb60 + 0x20);
      FUN_01aaaecc(DAT_01d4fb60,&local_90);
      iVar7 = DAT_01d4fb60;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_10c = *(uint *********)(DAT_01d4fb60 + 0x14);
        local_108 = *(uint *********)(DAT_01d4fb60 + 0x18);
        local_110 = (uint ********)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pppppuVar25 = DAT_01d4edc8;
        pcVar26 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppuVar25 = (uint *****)&DAT_01cfc5e0;
          pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppuVar25[3])(pcVar26,&local_110);
        if (iVar8 != 0) {
          FUN_01aaa328(iVar7,pcVar26,pppppuVar25[4],&local_110,&local_90);
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
        pppppuVar25 = DAT_01d4edc8;
        pcVar26 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppuVar25 = (uint *****)&DAT_01cfc5e0;
          pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppuVar25[3])(pcVar26,&local_ac);
        if (iVar8 != 0) {
          if (*(uint *********)(DAT_01d4fb60 + 0x20) == (uint ********)0x0) goto LAB_0170ec3c;
          local_10c = (uint ********)&local_c0;
          local_78 = *(uint *********)(DAT_01d4fb60 + 0x24);
          local_74 = *(uint *********)(DAT_01d4fb60 + 0x28);
          local_110 = (uint ********)&local_80;
          local_a0 = (uint ********)&local_110;
          local_bc = (undefined **)&local_90;
          local_70 = (uint ********)0x0;
          local_9c = (uint ********)&DAT_00000001;
          local_108 = (uint ********)&DAT_01d2ea4c;
          local_c0 = (uint ********)&DAT_00577ddd;
          local_8c = (uint ********)FUN_0188d23c;
          local_98 = (uint ********)(DAT_01d4fb60 + 0x1c);
          local_90 = param_2;
          local_80 = *(uint *********)(DAT_01d4fb60 + 0x1c);
          local_7c = *(uint *********)(DAT_01d4fb60 + 0x20);
          FUN_01aaa328(iVar7,pcVar26,pppppuVar25[4],&local_ac,&local_a0);
        }
      }
    }
    goto LAB_0170e95c;
  }
  local_110 = local_1a0;
  local_10c = local_19c;
  local_108 = local_198;
  ppppppppuStack_104 = local_194;
  ppppppppuStack_100 = ppppppppuStack_190;
  ppppppppuStack_fc = ppppppppuStack_18c;
  ppppppppuStack_f8 = local_188;
  FUN_0170bbb4(&local_80,param_1[0x1e],param_1[0x1f]);
  ppppppppuVar29 = local_78;
  ppppppppuVar28 = local_7c;
  ppppppppuVar23 = local_80;
  uVar10 = (uint)*(byte *)param_2;
  if (uVar10 == 0) {
    uVar5 = 0;
  }
  else if (uVar10 == 1) {
    uVar5 = (uint)*(byte *)((int)param_2 + 1) << 8;
  }
  else {
    ppppppppuVar21 = (uint ********)FUN_014333b0();
    pppppppuVar24 = param_2[1];
    (*(code *)**pppppppuVar24)(&local_a0,pppppppuVar24 + 3,pppppppuVar24[1],pppppppuVar24[2]);
    *ppppppppuVar21 = (uint *******)local_a0;
    ppppppppuVar21[1] = (uint *******)local_9c;
    ppppppppuVar21[2] = (uint *******)local_98;
    ppppppppuVar21[3] = pppppppuStack_94;
    uVar5 = 0;
  }
  local_80 = (uint ********)(uVar5 | uVar10);
  local_7c = ppppppppuVar21;
  (*(code *)*param_2[2])(&local_78,param_2 + 5,param_2[3],param_2[4]);
  uVar5 = FUN_01743c30(*ppppppppuVar13,param_1[0x11],param_1[0x12],param_1[0x13],&local_80);
  pppppppuVar24 = param_1[0xc];
  pppppppuVar18 = param_1[0xd];
  iVar7 = 0;
  uVar10 = uVar5;
  while( true ) {
    uVar10 = (uint)pppppppuVar18 & uVar10;
    uVar27 = *(uint *)((int)pppppppuVar24 + uVar10);
    uVar6 = uVar27 ^ (uVar5 >> 0x19) * 0x1010101;
    for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      ppppppppuVar21 =
           (uint ********)
           (pppppppuVar24 +
           (uVar10 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
           (uint)pppppppuVar18) * -9);
      iVar8 = FUN_014146a0(ppppppppuVar21 + -9,&local_80);
      if ((iVar8 != 0) &&
         (ppppppppuVar12 = (uint ********)ppppppppuVar21[-5], ppppppppuVar12 == local_70)) {
        ppppppppuVar16 = local_74;
        pppppppuVar20 = ppppppppuVar21[-6];
        do {
          if (ppppppppuVar12 == (uint ********)0x0) {
            FUN_0177266c(&local_80);
            goto LAB_0170e110;
          }
          uVar19 = (uint)*(byte *)ppppppppuVar16;
          ppppppppuVar12 = (uint ********)((int)ppppppppuVar12 + -1);
          uVar22 = (uint)*(byte *)pppppppuVar20;
          if (uVar19 - 0x41 < 0x1a) {
            uVar19 = uVar19 | 0x20;
          }
          if (uVar22 - 0x41 < 0x1a) {
            uVar22 = uVar22 | 0x20;
          }
          ppppppppuVar16 = (uint ********)((int)ppppppppuVar16 + 1);
          pppppppuVar20 = (uint *******)((int)pppppppuVar20 + 1);
        } while (uVar22 == uVar19);
      }
    }
    if ((uVar27 & 0x80808080 & uVar27 << 1) != 0) break;
    iVar7 = iVar7 + 4;
    uVar10 = uVar10 + iVar7;
  }
  if (param_1[0xe] == (uint *******)0x0) {
    FUN_0170933c(param_1 + 0xc,ppppppppuVar13);
  }
  ppppppppuVar21 = local_7c;
  if ((byte)local_80 != 3) {
    local_90 = (uint ********)CONCAT22(CONCAT11(local_90._3_1_,local_80._3_1_),local_80._1_2_);
    local_a0 = local_74;
    local_9c = local_70;
    local_98 = local_6c;
    pppppppuVar18 = param_1[0xd];
    pppppppuVar24 = param_1[0xc];
    uVar10 = (uint)pppppppuVar18 & uVar5;
    uVar6 = *(uint *)((int)pppppppuVar24 + uVar10) & 0x80808080;
    if (uVar6 == 0) {
      iVar7 = 4;
      do {
        uVar10 = uVar10 + iVar7;
        iVar7 = iVar7 + 4;
        uVar10 = uVar10 & (uint)pppppppuVar18;
        uVar6 = *(uint *)((int)pppppppuVar24 + uVar10) & 0x80808080;
      } while (uVar6 == 0);
    }
    uVar10 = uVar10 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                     (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
             (uint)pppppppuVar18;
    uVar6 = (uint)*(char *)((int)pppppppuVar24 + uVar10);
    if (-1 < (int)uVar6) {
      uVar10 = (uint)*pppppppuVar24 & 0x80808080;
      uVar10 = LZCOUNT(((uint)*pppppppuVar24 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                       (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
      uVar6 = (uint)*(byte *)((int)pppppppuVar24 + (uVar10 >> 3));
      uVar10 = uVar10 >> 3;
    }
    pppppppuVar20 = param_1[0xe];
    bVar2 = (byte)(uVar5 >> 0x19);
    *(byte *)((int)pppppppuVar24 + uVar10) = bVar2;
    param_1[0xe] = (uint *******)((int)pppppppuVar20 - (uVar6 & 1));
    *(byte *)((int)pppppppuVar24 + (uVar10 - 4 & (uint)pppppppuVar18) + 4) = bVar2;
    ppppppppuVar21 = (uint ********)(pppppppuVar24 + uVar10 * -9);
    ppppppppuVar21[-8] = (uint *******)local_7c;
    *(undefined2 *)((int)ppppppppuVar21 + -0x23) = local_80._1_2_;
    *(byte *)(ppppppppuVar21 + -9) = (byte)local_80;
    *(byte *)((int)ppppppppuVar21 + -0x21) = local_80._3_1_;
    ppppppppuVar21[-7] = (uint *******)local_78;
    ppppppppuVar21[-6] = (uint *******)local_74;
    ppppppppuVar21[-5] = (uint *******)local_70;
    ppppppppuVar21[-4] = (uint *******)local_6c;
    ppppppppuVar21[-1] = (uint *******)0x0;
    pppppppuVar24 = param_1[0xf];
    ppppppppuVar21[-3] = (uint *******)0x0;
    ppppppppuVar21[-2] = (uint *******)&DAT_00000008;
    param_1[0xf] = (uint *******)((int)pppppppuVar24 + 1);
  }
LAB_0170e110:
  if (param_1[0x20] <= ppppppppuVar21[-1]) {
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4fb80 - 1 < 2 ||
         ((DAT_01d4fb80 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb78), cVar4 != '\0')))))) &&
       (iVar7 = FUN_01aaa278(DAT_01d4fb78), iVar7 != 0)) {
      if (*(uint *********)(DAT_01d4fb78 + 0x20) == (uint ********)0x0) {
LAB_0170ec80:
        puVar17 = &DAT_01d20d6c;
        goto LAB_0170ec88;
      }
      local_8c = (uint ********)&local_b4;
      local_78 = *(uint *********)(DAT_01d4fb78 + 0x24);
      local_74 = *(uint *********)(DAT_01d4fb78 + 0x28);
      local_b8 = (undefined4 *)(DAT_01d4fb78 + 0x1c);
      local_80 = (uint ********)*local_b8;
      local_c0 = (uint ********)&local_90;
      local_70 = (uint ********)0x0;
      local_bc = (undefined **)&DAT_00000001;
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
        pppppuVar25 = DAT_01d4edc8;
        pcVar26 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppuVar25 = (uint *****)&DAT_01cfc5e0;
          pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppuVar25[3])(pcVar26,&local_a0);
        if (iVar8 != 0) {
          FUN_01aaa328(iVar7,pcVar26,pppppuVar25[4],&local_a0,&local_c0);
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
        pppppuVar25 = DAT_01d4edc8;
        pcVar26 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppuVar25 = (uint *****)&DAT_01cfc5e0;
          pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppuVar25[3])(pcVar26,&local_f0);
        if (iVar8 != 0) {
          if (*(uint *********)(DAT_01d4fb78 + 0x20) == (uint ********)0x0) goto LAB_0170ec80;
          local_78 = *(uint *********)(DAT_01d4fb78 + 0x24);
          local_74 = *(uint *********)(DAT_01d4fb78 + 0x28);
          local_9c = (uint ********)&local_e4;
          local_90 = (uint ********)&local_a0;
          local_8c = (uint ********)&DAT_00000001;
          local_e0 = (uint ********)&local_c0;
          local_70 = (uint ********)0x0;
          local_98 = (uint ********)&DAT_01d2ea4c;
          local_e4 = (uint ********)&DAT_00593d28;
          local_bc = (undefined **)FUN_0188d23c;
          local_c0 = param_2;
          local_a0 = (uint ********)&local_80;
          local_88 = (uint ********)(DAT_01d4fb78 + 0x1c);
          local_80 = *(uint *********)(DAT_01d4fb78 + 0x1c);
          local_7c = *(uint *********)(DAT_01d4fb78 + 0x20);
          FUN_01aaa328(iVar7,pcVar26,pppppuVar25[4],&local_f0,&local_90);
        }
      }
    }
    FUN_0170bc0c(&local_110);
    goto LAB_0170e95c;
  }
  if (((DAT_01d50f88 < 2) &&
      ((DAT_01d4fb74 - 1 < 2 ||
       ((DAT_01d4fb74 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4fb6c), cVar4 != '\0')))))) &&
     (iVar7 = FUN_01aaa278(DAT_01d4fb6c), iVar7 != 0)) {
    if (*(int *)(DAT_01d4fb6c + 0x20) == 0) {
LAB_0170ec74:
      puVar17 = &DAT_01d20d5c;
LAB_0170ec88:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar17);
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
    local_d8 = &DAT_005ae714;
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
      pppppuVar25 = DAT_01d4edc8;
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pppppuVar25 = (uint *****)&DAT_01cfc5e0;
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)pppppuVar25[3])(pcVar26,&local_90);
      if (iVar8 != 0) {
        local_a0 = local_90;
        local_9c = local_8c;
        local_98 = local_88;
        FUN_01aaa328(iVar7,pcVar26,pppppuVar25[4],&local_a0,&local_e4);
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
      pppppuVar25 = DAT_01d4edc8;
      pcVar26 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pppppuVar25 = (uint *****)&DAT_01cfc5e0;
        pcVar26 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)pppppuVar25[3])(pcVar26,&local_d0);
      if (iVar8 != 0) {
        if (*(int *)(DAT_01d4fb6c + 0x20) == 0) goto LAB_0170ec74;
        local_8c = (uint ********)&local_b4;
        local_78 = *(uint *********)(DAT_01d4fb6c + 0x24);
        local_90 = (uint ********)&local_80;
        local_74 = *(uint *********)(DAT_01d4fb6c + 0x28);
        local_c0 = (uint ********)&local_90;
        local_bc = (undefined **)&DAT_00000001;
        local_b0 = (uint ********)&local_e4;
        local_70 = (uint ********)0x0;
        local_88 = (uint ********)&DAT_01d2ea4c;
        local_b4 = (uint ********)&DAT_005ae714;
        local_e0 = (uint ********)FUN_0188d23c;
        local_a0 = local_d0;
        local_9c = local_cc;
        local_98 = local_c8;
        local_e4 = param_2;
        local_b8 = (undefined4 *)(DAT_01d4fb6c + 0x1c);
        local_80 = (uint ********)*(uint ********)(DAT_01d4fb6c + 0x1c);
        local_7c = (uint ********)*(int *)(DAT_01d4fb6c + 0x20);
        FUN_01aaa328(iVar7,pcVar26,pppppuVar25[4],&local_a0,&local_c0);
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
  pppppppuVar24 = ppppppppuVar21[-1];
  local_80 = ppppppppuVar23;
  local_7c = ppppppppuVar28;
  local_78 = ppppppppuVar29;
  if (pppppppuVar24 == ppppppppuVar21[-3]) {
    FUN_01734250(ppppppppuVar21 + -3);
  }
  pppppppuVar18 = ppppppppuVar21[-2] + (int)pppppppuVar24 * 0xc;
  *pppppppuVar18 = (uint ******)local_80;
  pppppppuVar18[1] = (uint ******)local_7c;
  pppppppuVar18[2] = (uint ******)local_78;
  pppppppuVar18[3] = (uint ******)local_74;
  pppppppuVar18[4] = (uint ******)local_70;
  pppppppuVar18[5] = (uint ******)local_6c;
  pppppppuVar18[6] = (uint ******)local_68;
  pppppppuVar18[7] = (uint ******)local_64;
  pppppppuVar18[8] = (uint ******)ppppppppuStack_60;
  pppppppuVar18[9] = (uint ******)ppppppppuStack_5c;
  pppppppuVar18[10] = (uint ******)local_58;
  pppppppuVar18[0xb] = ppppppuStack_54;
  ppppppppuVar21[-1] = (uint *******)((int)pppppppuVar24 + 1);
  ppppppppuVar21 = param_1 + 0x21;
  if ((*ppppppppuVar21 == (uint *******)0x0) &&
     (ppppppppuVar13 = (uint ********)param_1[2], ppppppppuVar13 != (uint ********)&DAT_3b9aca00)) {
    ppppppppuVar28 = (uint ********)*param_1;
    ppppppppuVar29 = (uint ********)param_1[1];
    bVar30 = ppppppppuVar13 == (uint ********)0x0 &&
             (ppppppppuVar28 == (uint ********)0x0 && ppppppppuVar29 == (uint ********)0x0);
    ppppppppuVar23 = ppppppppuStack_5c;
    if (ppppppppuVar13 != (uint ********)0x0 ||
        (ppppppppuVar28 != (uint ********)0x0 || ppppppppuVar29 != (uint ********)0x0)) {
      ppppppppuVar23 = (uint ********)param_1[0x1e];
      bVar30 = ppppppppuVar23 == (uint ********)0x0;
    }
    if (!bVar30) {
      do {
        pppppppuVar24 = *ppppppppuVar23;
        bVar30 = (bool)hasExclusiveAccess(ppppppppuVar23);
      } while (!bVar30);
      *ppppppppuVar23 = (uint *******)((int)pppppppuVar24 + 1);
      if (-1 < (int)pppppppuVar24) {
        ppppppppuVar12 = (uint ********)param_1[0x1f];
        if ((ppppppppuVar28 == (uint ********)0x0 && ppppppppuVar29 == (uint ********)0x0) &&
            ppppppppuVar13 < (uint ********)0x55d4a81) {
          ppppppppuVar28 = (uint ********)0x0;
          ppppppppuVar29 = (uint ********)0x0;
          ppppppppuVar13 = (uint ********)0x55d4a80;
        }
        uVar31 = FUN_0170f480();
        ppppppppuVar16 = (uint ********)((ulonglong)uVar31 >> 0x20);
        FUN_0182217c(ppppppppuVar21);
        *ppppppppuVar21 = (uint *******)uVar31;
        do {
          pppppppuVar24 = *ppppppppuVar23;
          bVar30 = (bool)hasExclusiveAccess(ppppppppuVar23);
        } while (!bVar30);
        *ppppppppuVar23 = (uint *******)((int)pppppppuVar24 + 1);
        if (-1 < (int)pppppppuVar24) {
          ppppppppuVar21 = (uint ********)FUN_017048d8(param_4);
          pppppppuVar18 = param_1[0x1d];
          pppppppuVar24 = param_1[0x1c];
          local_2c = 0;
          local_80 = ppppppppuVar28;
          local_7c = ppppppppuVar29;
          local_78 = ppppppppuVar13;
          local_70 = ppppppppuVar23;
          local_6c = ppppppppuVar12;
          local_68 = ppppppppuVar16;
          local_64 = ppppppppuVar21;
          puVar14 = (undefined4 *)thunk_FUN_01be5118(0x58);
          if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x58);
          }
          *puVar14 = ppppppppuVar28;
          *(undefined1 *)(puVar14 + 0x15) = 0;
          puVar14[4] = ppppppppuVar23;
          puVar14[5] = ppppppppuVar12;
          puVar14[6] = ppppppppuVar16;
          puVar14[7] = ppppppppuVar21;
          puVar14[2] = ppppppppuVar13;
          ppppppuVar15 = pppppppuVar18[2];
          puVar14[1] = ppppppppuVar29;
          (*(code *)pppppppuVar18[3])
                    ((int)pppppppuVar24 + ((int)ppppppuVar15 - 1U & 0xfffffff8) + 8,puVar14,
                     &DAT_01d1a04c);
          DataMemoryBarrier(0xb);
          do {
            pppppppuVar24 = *ppppppppuVar23;
            bVar30 = (bool)hasExclusiveAccess(ppppppppuVar23);
          } while (!bVar30);
          *ppppppppuVar23 = (uint *******)((int)pppppppuVar24 + -1);
          if (pppppppuVar24 == (uint *******)&DAT_00000001) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(ppppppppuVar23,ppppppppuVar12);
          }
          goto LAB_0170e95c;
        }
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x170ec98);
      (*pcVar1)();
    }
  }
LAB_0170e95c:
  FUN_0178e1c4(param_2);
  return;
}

