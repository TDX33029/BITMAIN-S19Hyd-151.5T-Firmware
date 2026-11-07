// FUN_011cb734 @ 011cb734 size=3828 calls_out=13 calls_in=1
// strings: StorageIn | LIGHT | StorageIn | StorageIn | StorageIn | StorageIn

/* WARNING: Type propagation algorithm not settling */

void FUN_011cb734(undefined4 *param_1,undefined4 *******param_2,undefined4 param_3)

{
  ushort uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *****pppppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *****pppppuVar12;
  undefined4 *******pppppppuVar13;
  undefined4 *****pppppuVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  ushort uVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 *puVar27;
  undefined1 uVar28;
  undefined4 *******pppppppuVar29;
  uint uVar30;
  undefined4 *******unaff_r11;
  uint extraout_r12;
  uint uVar31;
  uint local_22c;
  undefined4 *******local_224;
  undefined4 *******local_220;
  uint local_214;
  undefined4 *******local_20c;
  undefined4 *******local_208;
  undefined4 *******local_200;
  undefined4 *******local_1fc;
  undefined1 auStack_1f8 [16];
  undefined1 *local_1e8;
  undefined4 *******local_1c8;
  undefined4 *******local_1c4;
  undefined4 *******local_1c0;
  code *local_1bc;
  undefined4 ******local_1b8;
  undefined4 local_1b4;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined4 *******local_1a8;
  undefined4 uStack_1a4;
  undefined4 *******local_1a0;
  undefined1 *puStack_19c;
  undefined4 *******local_188;
  undefined4 local_184;
  undefined4 *******local_180;
  code *local_17c;
  undefined4 *******local_178;
  undefined4 *******local_174;
  undefined4 *******local_170;
  undefined4 uStack_16c;
  undefined4 *******local_168;
  undefined4 uStack_164;
  undefined4 *******pppppppuStack_160;
  undefined1 *puStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 *******local_148;
  undefined4 *******pppppppuStack_144;
  undefined4 *******pppppppuStack_140;
  code *pcStack_13c;
  undefined4 ******local_138;
  undefined4 local_134;
  uint local_130;
  undefined4 uStack_12c;
  undefined4 *******local_128;
  undefined4 uStack_124;
  undefined4 *******pppppppuStack_120;
  undefined1 *puStack_11c;
  undefined4 *******local_118;
  undefined4 *******pppppppuStack_114;
  undefined4 *******pppppppuStack_110;
  undefined4 *******local_108;
  undefined4 *******local_104;
  undefined4 *******pppppppuStack_100;
  code *pcStack_fc;
  undefined4 ******ppppppuStack_f8;
  undefined4 uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 *******pppppppuStack_e8;
  undefined4 uStack_e4;
  undefined4 *******pppppppuStack_e0;
  undefined1 *puStack_dc;
  undefined4 *******local_d8;
  undefined4 *******pppppppuStack_d4;
  undefined4 *******pppppppuStack_d0;
  undefined4 *******local_c8;
  undefined4 *******local_c4;
  undefined4 *******local_c0;
  code *pcStack_bc;
  undefined4 ******local_b8;
  undefined4 local_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 *******local_a8;
  undefined4 uStack_a4;
  undefined4 *******pppppppuStack_a0;
  undefined1 *puStack_9c;
  undefined4 *******local_98;
  undefined4 *******pppppppuStack_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 auStack_8d [13];
  undefined4 *******local_80;
  undefined4 *******pppppppuStack_7c;
  undefined1 local_78 [16];
  undefined4 *******local_68;
  undefined4 *******local_64;
  undefined4 *******local_60;
  undefined2 *local_5c;
  undefined4 ******local_58;
  undefined4 *******local_54;
  undefined4 ******local_48;
  char *local_44;
  undefined4 *******local_40;
  code *local_3c;
  undefined4 *****local_38;
  char *local_34;
  undefined4 local_30;
  
  pppppuVar14 = (undefined4 *****)0x0;
  pppppuVar6 = param_2[4][4];
  if (pppppuVar6 != (undefined4 *****)0x0) {
    pppppuVar12 = param_2[4][3];
    iVar23 = (int)pppppuVar6 * 0x48;
    do {
      if ((pppppuVar12[3] == (undefined4 ****)0x5) &&
         (iVar4 = thunk_FUN_01bed842(pppppuVar12[2] + 2,param_3,5), iVar4 == 0)) {
        pppppuVar14 = pppppuVar12;
        break;
      }
      pppppuVar12 = pppppuVar12 + 0x12;
      iVar23 = iVar23 + -0x48;
    } while (iVar23 != 0);
  }
  local_224 = &local_200;
  if (pppppuVar14 != (undefined4 *****)0x0) {
    pppppuVar14 = pppppuVar14 + 4;
  }
  FUN_00ad9f18(local_224,pppppuVar14);
  if (local_1e8 == &DAT_80000008) {
    local_138 = (undefined4 ******)0x80000007;
    local_208 = (undefined4 *******)0x0;
    local_20c = (undefined4 *******)0x0;
    local_220 = (undefined4 *******)&DAT_80000008;
    local_178 = (undefined4 *******)(undefined4 ******)0x80000000;
  }
  else {
    unaff_r11 = &local_188;
    local_104 = local_1fc;
    local_108 = local_200;
    local_c8 = param_2;
    local_c4 = &local_108;
    FUN_00ab0d6c(unaff_r11,auStack_1f8,&local_c8);
    param_2 = &local_1c8;
    if (local_188 != (undefined4 *******)0x0) {
      puVar5 = (undefined4 *)((uint)unaff_r11 | 4);
      uVar9 = puVar5[1];
      uVar15 = puVar5[2];
      uVar18 = puVar5[3];
      uVar24 = puVar5[4];
      uVar7 = puVar5[5];
      uVar10 = puVar5[6];
      uVar16 = puVar5[7];
      uVar19 = puVar5[8];
      uVar25 = puVar5[9];
      uVar8 = puVar5[10];
      uVar11 = puVar5[0xb];
      uVar17 = puVar5[0xc];
      uVar20 = puVar5[0xd];
      uVar26 = puVar5[0xe];
      *param_1 = *puVar5;
      param_1[1] = uVar9;
      param_1[2] = uVar15;
      param_1[3] = uVar18;
      param_1[4] = uVar24;
      param_1[5] = uVar7;
      param_1[6] = uVar10;
      param_1[7] = uVar16;
      param_1[8] = uVar19;
      param_1[9] = uVar25;
      param_1[10] = uVar8;
      param_1[0xb] = uVar11;
      param_1[0xc] = uVar17;
      param_1[0xd] = uVar20;
      param_1[0xe] = uVar26;
      return;
    }
    local_20c = local_1fc;
    local_208 = local_200;
    puVar5 = (undefined4 *)((uint)param_2 | 4);
    *puVar5 = local_180;
    puVar5[1] = local_17c;
    puVar5[2] = local_178;
    puVar5[3] = local_174;
    puVar5[4] = local_170;
    puVar5[5] = uStack_16c;
    puVar5[6] = local_168;
    puVar5[7] = uStack_164;
    puVar5[8] = pppppppuStack_160;
    puVar5[9] = puStack_15c;
    puVar5[10] = uStack_158;
    puVar5[0xb] = uStack_154;
    local_148 = (undefined4 *******)*puVar5;
    pppppppuStack_144 = (undefined4 *******)puVar5[1];
    pppppppuStack_140 = (undefined4 *******)puVar5[2];
    pcStack_13c = (code *)puVar5[3];
    local_138 = (undefined4 ******)puVar5[4];
    local_134 = puVar5[5];
    local_130 = puVar5[6];
    uStack_12c = puVar5[7];
    local_220 = (undefined4 *******)puVar5[8];
    uStack_124 = puVar5[9];
    local_224 = (undefined4 *******)puVar5[10];
    puStack_11c = (undefined1 *)puVar5[0xb];
    local_128 = local_220;
    pppppppuStack_120 = local_224;
    if (-1 < (int)local_138) {
      local_108 = local_148;
      local_104 = pppppppuStack_144;
      pppppppuStack_100 = pppppppuStack_140;
      pcStack_fc = pcStack_13c;
      ppppppuStack_f8 = local_138;
      uStack_f4 = local_134;
      local_f0 = local_130;
      uStack_ec = uStack_12c;
      pppppppuStack_e8 = local_220;
      uStack_e4 = uStack_124;
      pppppppuStack_e0 = local_224;
      puStack_dc = puStack_11c;
      uVar7 = FUN_007017a8(&local_108,&DAT_00570120,8);
      FUN_006c1c88(&local_c8,uVar7);
      if (local_b8 == (undefined4 ******)0x80000000) {
        uVar30 = 4;
        FUN_00abbec8(&local_c8);
LAB_011cbda8:
        uVar7 = FUN_007017a8(&local_108,&DAT_00569c68,0x10);
        FUN_006c1c88(&local_c8,uVar7);
        puVar27 = puStack_9c;
        if (local_b8 == (undefined4 ******)0x80000000) {
          uVar22 = 3;
          FUN_00abbec8(&local_c8);
        }
        else {
          uVar22 = 2;
          if (local_b8 != (undefined4 ******)0x80000007) {
            local_1c8 = local_c8;
            local_1c4 = local_c4;
            local_1c0 = local_c0;
            local_1bc = pcStack_bc;
            local_1b8 = local_b8;
            local_1b4 = local_b4;
            local_1b0 = uStack_b0;
            uStack_1ac = uStack_ac;
            uVar31 = 7;
            if ((int)local_b8 < 0) {
              uVar31 = (uint)local_b8 ^ 0x80000000;
            }
            local_1a8 = local_a8;
            uStack_1a4 = uStack_a4;
            local_1a0 = pppppppuStack_a0;
            puStack_19c = puStack_9c;
            if (uVar31 == 2) {
              pppppppuVar13 = local_c0;
              pppppppuVar29 = local_c4;
LAB_011cbe54:
              iVar23 = 0;
              local_68 = pppppppuVar29;
              local_64 = pppppppuVar13;
              do {
                if ((*(undefined4 ********)((int)&DAT_01c1085c + iVar23) == pppppppuVar13) &&
                   (iVar4 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01c10858 + iVar23),
                                               pppppppuVar29,pppppppuVar13), iVar4 == 0)) {
                  puVar27 = (undefined1 *)(uint)(byte)(&DAT_01c10860)[iVar23];
                  pppppppuVar13 = (undefined4 *******)0x2;
                  bVar2 = true;
                  goto LAB_011cc048;
                }
                iVar23 = iVar23 + 0xc;
              } while (iVar23 != 0x18);
              local_60 = &local_68;
              puVar27 = &LAB_012fff30;
              local_5c = &DAT_0132b6a0;
              local_54 = &local_60;
              local_40 = (undefined4 *******)&DAT_00000010;
              local_48 = (undefined4 ******)&DAT_80000000;
              local_180 = &local_58;
              local_188 = &local_48;
              local_58 = (undefined4 ******)&DAT_0058702e;
              local_44 = &DAT_00568d08;
              local_17c = (code *)&LAB_012fff30;
              local_184 = (undefined4 *******)&LAB_012b97d8;
              FUN_00664898(&local_38,&DAT_00592d44,&local_188);
              if (local_48 != (undefined4 ******)&DAT_80000000) {
                FUN_019bb7e0(local_48,local_44);
              }
              FUN_01bed4e2(local_78 + 3,&local_38,0xc);
              bVar2 = false;
              pppppppuVar13 = (undefined4 *******)0x0;
LAB_011cc048:
              uVar22 = (ushort)puVar27;
              FUN_00db19c4(&local_1c8);
              if (!bVar2) {
                FUN_01bed4e2(auStack_8d,local_78 + 3,0xc);
                local_98 = local_80;
                pppppppuStack_94 = pppppppuStack_7c;
                local_90 = local_78._0_2_;
                local_8e = local_78[2];
                if (pppppppuVar13 != (undefined4 *******)0x2) goto LAB_011cc090;
              }
            }
            else {
              if (uVar31 == 5) {
                pppppppuVar13 = local_c4;
                pppppppuVar29 = local_c8 + 2;
                goto LAB_011cbe54;
              }
              local_188 = local_c8;
              local_184 = local_c4;
              local_180 = local_c0;
              local_17c = pcStack_bc;
              local_178 = (undefined4 *******)local_b8;
              local_174 = (undefined4 *******)local_b4;
              local_170 = (undefined4 *******)uStack_b0;
              uStack_16c = uStack_ac;
              local_168 = local_a8;
              uStack_164 = uStack_a4;
              pppppppuStack_160 = pppppppuStack_a0;
              puStack_15c = puStack_9c;
              local_30 = 0x10;
              local_38 = (undefined4 *****)0x80000000;
              local_48 = &local_38;
              local_34 = &DAT_00568d08;
              local_3c = FUN_00700f8c;
              local_44 = &LAB_012b97d8;
              local_40 = &local_188;
              FUN_00664898(&local_58,&DAT_0059054b,&local_48);
              if (local_38 != (undefined4 *****)0x80000000) {
                FUN_019bb7e0(local_38,local_34);
              }
              FUN_01bed4e2(local_78 + 3,&local_58,0xc);
              FUN_00ba8128(&local_188);
              FUN_01bed4e2(auStack_8d,local_78 + 3,0xc);
              pppppppuVar13 = (undefined4 *******)0x0;
              local_90 = local_78._0_2_;
              local_8e = local_78[2];
LAB_011cc090:
              local_98 = local_80;
              pppppppuStack_94 = pppppppuStack_7c;
              FUN_01bed4e2((int)&local_184 + 1,&local_98,0x17);
              local_1bc = (code *)&LAB_012b97d8;
              local_1c0 = &local_c8;
              local_1c8 = &local_178;
              local_184 = (undefined4 *******)CONCAT31(local_184._1_3_,(char)puVar27);
              local_c4 = (undefined4 *******)0x3eb2f0;
              local_c0 = (undefined4 *******)&DAT_00000009;
              local_c8 = (undefined4 *******)&DAT_80000000;
              local_1c4 = (undefined4 *******)&LAB_00632348;
              local_188 = pppppppuVar13;
              FUN_00664898(&local_80,&DAT_005bd155,&local_1c8);
              if (local_c8 != (undefined4 *******)&DAT_80000000) {
                FUN_019bb7e0(local_c8,local_c4);
              }
              pcVar3 = local_17c;
              pppppppuVar13 = local_184;
              pppppppuVar29 = local_188;
              local_d8 = local_80;
              pppppppuStack_d4 = pppppppuStack_7c;
              pppppppuStack_d0 = (undefined4 *******)local_78._0_4_;
              local_220 = local_180;
              local_214 = (uint)local_184 & 0xff;
              uVar22 = (ushort)local_214;
              uVar1 = (ushort)local_17c;
              FUN_019bb7e0(local_178,local_174);
              if (pppppppuVar29 != (undefined4 *******)0x2) goto LAB_011cc3fc;
            }
          }
        }
        uVar7 = FUN_007017a8(&local_108,"webLanguage",0xb);
        FUN_006c1c88(&local_c8,uVar7);
        if (local_b8 == (undefined4 ******)0x80000000) {
          uVar28 = 4;
          FUN_00abbec8(&local_c8);
          goto LAB_011cc568;
        }
        uVar28 = 3;
        if (local_b8 == (undefined4 ******)0x80000007) goto LAB_011cc568;
        local_1c8 = local_c8;
        local_1c4 = local_c4;
        local_1c0 = local_c0;
        local_1bc = pcStack_bc;
        local_1b8 = local_b8;
        local_1b4 = local_b4;
        local_1b0 = uStack_b0;
        uStack_1ac = uStack_ac;
        uVar31 = 7;
        if ((int)local_b8 < 0) {
          uVar31 = (uint)local_b8 ^ 0x80000000;
        }
        local_1a8 = local_a8;
        uStack_1a4 = uStack_a4;
        local_1a0 = pppppppuStack_a0;
        puStack_19c = puStack_9c;
        if (uVar31 == 2) {
          pppppppuVar13 = local_c0;
          pppppppuVar29 = local_c4;
LAB_011cc22c:
          iVar23 = 0;
          local_68 = pppppppuVar29;
          local_64 = pppppppuVar13;
          do {
            if ((*(undefined4 ********)((int)&DAT_01c10764 + iVar23) == pppppppuVar13) &&
               (iVar4 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01c10760 + iVar23),
                                           pppppppuVar29,pppppppuVar13), iVar4 == 0)) {
              pppppppuVar13 = (undefined4 *******)0x2;
              pppppppuVar29 = (undefined4 *******)(uint)(byte)(&DAT_01c10768)[iVar23];
              bVar2 = true;
              goto LAB_011cc42c;
            }
            iVar23 = iVar23 + 0xc;
          } while (iVar23 != 0x24);
          pppppppuVar29 = &local_68;
          local_5c = &DAT_0132b6a0;
          local_54 = &local_60;
          local_40 = (undefined4 *******)&DAT_0000000b;
          local_48 = (undefined4 ******)&DAT_80000000;
          local_180 = &local_58;
          local_188 = &local_48;
          local_58 = (undefined4 ******)&DAT_0058702e;
          local_44 = "WebLanguage";
          local_17c = (code *)&LAB_012fff30;
          local_184 = (undefined4 *******)&LAB_012b97d8;
          local_60 = pppppppuVar29;
          FUN_00664898(&local_38,&DAT_00592d44,&local_188);
          if (local_48 != (undefined4 ******)&DAT_80000000) {
            FUN_019bb7e0(local_48,local_44);
          }
          FUN_01bed4e2(local_78 + 3,&local_38,0xc);
          bVar2 = false;
          pppppppuVar13 = (undefined4 *******)0x0;
LAB_011cc42c:
          uVar28 = SUB41(pppppppuVar29,0);
          FUN_00db19c4(&local_1c8);
          if (bVar2) goto LAB_011cc568;
          FUN_01bed4e2(auStack_8d,local_78 + 3,0xc);
          local_98 = local_80;
          pppppppuStack_94 = pppppppuStack_7c;
          local_90 = local_78._0_2_;
          local_8e = local_78[2];
          if (pppppppuVar13 == (undefined4 *******)0x2) goto LAB_011cc568;
        }
        else {
          if (uVar31 == 5) {
            pppppppuVar13 = local_c4;
            pppppppuVar29 = local_c8 + 2;
            goto LAB_011cc22c;
          }
          local_188 = local_c8;
          local_184 = local_c4;
          local_180 = local_c0;
          local_17c = pcStack_bc;
          local_178 = (undefined4 *******)local_b8;
          local_174 = (undefined4 *******)local_b4;
          local_170 = (undefined4 *******)uStack_b0;
          uStack_16c = uStack_ac;
          local_168 = local_a8;
          uStack_164 = uStack_a4;
          pppppppuStack_160 = pppppppuStack_a0;
          puStack_15c = puStack_9c;
          local_30 = 0xb;
          local_38 = (undefined4 *****)0x80000000;
          local_48 = &local_38;
          local_34 = "WebLanguage";
          local_3c = FUN_00700f8c;
          local_44 = &LAB_012b97d8;
          local_40 = &local_188;
          FUN_00664898(&local_58,&DAT_0059054b,&local_48);
          if (local_38 != (undefined4 *****)0x80000000) {
            FUN_019bb7e0(local_38,local_34);
          }
          pppppppuVar29 = (undefined4 *******)(local_78 + 3);
          FUN_01bed4e2(pppppppuVar29,&local_58,0xc);
          FUN_00ba8128(&local_188);
          FUN_01bed4e2(auStack_8d,pppppppuVar29,0xc);
          pppppppuVar13 = (undefined4 *******)0x0;
          local_90 = local_78._0_2_;
          local_8e = local_78[2];
        }
        local_98 = local_80;
        pppppppuStack_94 = pppppppuStack_7c;
        FUN_01bed4e2((int)&local_184 + 1,&local_98,0x17);
        local_1bc = (code *)&LAB_012b97d8;
        local_1c0 = &local_c8;
        local_184 = (undefined4 *******)CONCAT31(local_184._1_3_,(char)pppppppuVar29);
        local_1c8 = &local_178;
        local_c4 = (undefined4 *******)0x3eb2f0;
        local_c0 = (undefined4 *******)&DAT_00000009;
        local_c8 = (undefined4 *******)&DAT_80000000;
        local_1c4 = (undefined4 *******)&LAB_00632348;
        local_188 = pppppppuVar13;
        FUN_00664898(&local_80,&DAT_005bd155,&local_1c8);
        if (local_c8 != (undefined4 *******)&DAT_80000000) {
          FUN_019bb7e0(local_c8,local_c4);
        }
        pcVar3 = local_17c;
        local_220 = local_180;
        pppppppuVar13 = local_184;
        pppppppuVar29 = local_188;
        local_d8 = local_80;
        pppppppuStack_d4 = pppppppuStack_7c;
        pppppppuStack_d0 = (undefined4 *******)local_78._0_4_;
        uVar31 = (uint)local_17c >> 0x10;
        local_214 = (uint)local_184 & 0xff;
        uVar21 = (uint)local_17c & 0xffff;
        FUN_019bb7e0(local_178,local_174);
        if (pppppppuVar29 == (undefined4 *******)0x2) {
          uVar28 = SUB41(pppppppuVar13,0);
LAB_011cc568:
          FUN_006c1408(&local_108);
          if ((local_138 != (undefined4 ******)0x80000007) &&
             ((undefined4 ******)0x7fffffff < local_138)) {
            FUN_00db19c4(&local_148);
          }
          *(ushort *)(param_1 + 3) = uVar22 & 0xff | (ushort)(uVar30 << 8);
          *param_1 = 2;
          param_1[1] = local_200;
          *(undefined1 *)((int)param_1 + 0xe) = uVar28;
          param_1[2] = local_1fc;
          return;
        }
        unaff_r11 = (undefined4 *******)(uVar21 | (uVar31 & 0xff) << 0x10);
      }
      else {
        uVar30 = 3;
        if (local_b8 == (undefined4 ******)0x80000007) goto LAB_011cbda8;
        local_1c8 = local_c8;
        local_1c4 = local_c4;
        local_1c0 = local_c0;
        local_1bc = pcStack_bc;
        local_1b8 = local_b8;
        local_1b4 = local_b4;
        local_1b0 = uStack_b0;
        uStack_1ac = uStack_ac;
        uVar31 = 7;
        if ((int)local_b8 < 0) {
          uVar31 = (uint)local_b8 ^ 0x80000000;
        }
        local_1a8 = local_a8;
        uStack_1a4 = uStack_a4;
        local_1a0 = pppppppuStack_a0;
        puStack_19c = puStack_9c;
        if (uVar31 == 2) {
          pppppppuVar13 = local_c0;
          pppppppuVar29 = local_c4;
LAB_011cba9c:
          iVar23 = 0;
          local_68 = pppppppuVar29;
          local_64 = pppppppuVar13;
          do {
            if ((*(undefined4 ********)((int)&DAT_01c106ec + iVar23) == pppppppuVar13) &&
               (iVar4 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01c106e8 + iVar23),
                                           pppppppuVar29,pppppppuVar13), iVar4 == 0)) {
              uVar30 = (uint)(byte)(&DAT_01c106f0)[iVar23];
              pppppppuVar13 = (undefined4 *******)0x2;
              bVar2 = true;
              goto LAB_011cbc78;
            }
            iVar23 = iVar23 + 0xc;
          } while (iVar23 != 0x24);
          local_60 = &local_68;
          local_5c = &DAT_0132b6a0;
          local_54 = &local_60;
          local_40 = (undefined4 *******)&DAT_00000008;
          local_48 = (undefined4 ******)&DAT_80000000;
          local_180 = &local_58;
          local_188 = &local_48;
          local_58 = (undefined4 ******)&DAT_0058702e;
          local_44 = &DAT_00570868;
          local_17c = (code *)&LAB_012fff30;
          local_184 = (undefined4 *******)&LAB_012b97d8;
          FUN_00664898(&local_38,&DAT_00592d44,&local_188);
          if (local_48 != (undefined4 ******)&DAT_80000000) {
            FUN_019bb7e0(local_48,local_44);
          }
          FUN_01bed4e2(local_78 + 3,&local_38,0xc);
          bVar2 = false;
          pppppppuVar13 = (undefined4 *******)0x0;
LAB_011cbc78:
          uVar28 = (undefined1)uVar30;
          FUN_00db19c4(&local_1c8);
          if (!bVar2) {
            FUN_01bed4e2(auStack_8d,local_78 + 3,0xc);
            local_98 = local_80;
            pppppppuStack_94 = pppppppuStack_7c;
            local_90 = local_78._0_2_;
            local_8e = local_78[2];
            if (pppppppuVar13 != (undefined4 *******)0x2) goto LAB_011cbcc0;
          }
          goto LAB_011cbda8;
        }
        if (uVar31 == 5) {
          pppppppuVar13 = local_c4;
          pppppppuVar29 = local_c8 + 2;
          goto LAB_011cba9c;
        }
        uVar28 = SUB41(&local_1b0,0);
        local_188 = local_c8;
        local_184 = local_c4;
        local_180 = local_c0;
        local_17c = pcStack_bc;
        local_178 = (undefined4 *******)local_b8;
        local_174 = (undefined4 *******)local_b4;
        local_170 = (undefined4 *******)uStack_b0;
        uStack_16c = uStack_ac;
        local_168 = local_a8;
        uStack_164 = uStack_a4;
        pppppppuStack_160 = pppppppuStack_a0;
        puStack_15c = puStack_9c;
        local_30 = 8;
        local_38 = (undefined4 *****)0x80000000;
        local_48 = &local_38;
        local_34 = &DAT_00570868;
        local_3c = FUN_00700f8c;
        local_44 = &LAB_012b97d8;
        local_40 = unaff_r11;
        FUN_00664898(&local_58,&DAT_0059054b,&local_48);
        if (local_38 != (undefined4 *****)0x80000000) {
          FUN_019bb7e0(local_38,local_34);
        }
        FUN_01bed4e2(local_78 + 3,&local_58,0xc);
        FUN_00ba8128(&local_188);
        FUN_01bed4e2(auStack_8d,local_78 + 3,0xc);
        pppppppuVar13 = (undefined4 *******)0x0;
        local_90 = local_78._0_2_;
        local_8e = local_78[2];
LAB_011cbcc0:
        local_98 = local_80;
        pppppppuStack_94 = pppppppuStack_7c;
        FUN_01bed4e2((int)&local_184 + 1,&local_98,0x17);
        local_1bc = (code *)&LAB_012b97d8;
        local_1c0 = &local_c8;
        local_1c8 = &local_178;
        local_c4 = (undefined4 *******)0x3eb2f0;
        local_184 = (undefined4 *******)CONCAT31(local_184._1_3_,uVar28);
        local_c0 = (undefined4 *******)&DAT_00000009;
        local_c8 = (undefined4 *******)&DAT_80000000;
        local_1c4 = (undefined4 *******)&LAB_00632348;
        local_188 = pppppppuVar13;
        FUN_00664898(&local_80,&DAT_005bd155,&local_1c8);
        if (local_c8 != (undefined4 *******)&DAT_80000000) {
          FUN_019bb7e0(local_c8,local_c4);
        }
        pcVar3 = local_17c;
        local_220 = local_180;
        pppppppuVar13 = local_184;
        pppppppuVar29 = local_188;
        local_d8 = local_80;
        pppppppuStack_d4 = pppppppuStack_7c;
        pppppppuStack_d0 = (undefined4 *******)local_78._0_4_;
        local_214 = (uint)local_184 & 0xff;
        uVar1 = (ushort)local_17c;
        FUN_019bb7e0(local_178,local_174);
        if (pppppppuVar29 == (undefined4 *******)0x2) {
          uVar30 = local_214;
          goto LAB_011cbda8;
        }
LAB_011cc3fc:
        local_22c = (uint)pcVar3 >> 0x10 & 0xff;
        unaff_r11 = (undefined4 *******)((uint)uVar1 | local_22c << 0x10);
      }
      uVar31 = (uint)pppppppuVar13 >> 8 & 0xff;
      uVar30 = (uint)pppppppuVar13 >> 0x18;
      uVar28 = (undefined1)((uint)pcVar3 >> 0x18);
      local_224 = (undefined4 *******)((uint)pppppppuVar13 >> 0x10 & 0xff);
      local_118 = local_d8;
      pppppppuStack_114 = pppppppuStack_d4;
      pppppppuStack_110 = pppppppuStack_d0;
      FUN_006c1408(&local_108);
      if ((local_138 != (undefined4 ******)0x80000007) &&
         ((undefined4 ******)0x7fffffff < local_138)) {
        FUN_00db19c4(&local_148);
      }
      goto LAB_011cb870;
    }
    if (local_138 == (undefined4 ******)0x80000007) {
      local_178 = (undefined4 *******)(undefined4 ******)0x80000000;
    }
    else {
      local_178 = (undefined4 *******)local_138;
      local_188 = local_148;
      local_184 = pppppppuStack_144;
      local_180 = pppppppuStack_140;
      local_17c = pcStack_13c;
      local_174 = (undefined4 *******)local_134;
      local_170 = (undefined4 *******)local_130;
      uStack_16c = uStack_12c;
      local_168 = local_220;
      uStack_164 = uStack_124;
      pppppppuStack_160 = local_224;
      puStack_15c = puStack_11c;
    }
  }
  uVar28 = SUB41(param_2,0);
  local_c0 = (undefined4 *******)&DAT_00000009;
  local_c8 = (undefined4 *******)&DAT_80000000;
  local_1c0 = &local_188;
  local_1c8 = &local_c8;
  local_c4 = (undefined4 *******)0x3eb2f0;
  local_1bc = FUN_00700f8c;
  local_1c4 = (undefined4 *******)&LAB_012b97d8;
  FUN_00664898(&local_108,&DAT_0059054b,&local_1c8);
  if (local_c8 != (undefined4 *******)&DAT_80000000) {
    FUN_019bb7e0(local_c8,local_c4);
  }
  local_118 = local_108;
  pppppppuStack_114 = local_104;
  pppppppuStack_110 = pppppppuStack_100;
  uVar31 = 0x11cb86c;
  FUN_00ba8128(&local_188);
  pppppppuVar29 = (undefined4 *******)0x0;
  uVar30 = extraout_r12;
LAB_011cb870:
  local_178 = local_118;
  local_174 = pppppppuStack_114;
  local_170 = pppppppuStack_110;
  local_17c = (code *)CONCAT13(uVar28,(int3)unaff_r11);
  local_184 = (undefined4 *******)
              (((uint)local_224 & 0xff) << 0x10 | (uVar31 & 0xff) << 8 | local_214 & 0xff |
              uVar30 << 0x18);
  local_188 = pppppppuVar29;
  local_180 = local_220;
  FUN_00ddb4b4(param_1,&local_188,local_208,local_20c);
  return;
}

