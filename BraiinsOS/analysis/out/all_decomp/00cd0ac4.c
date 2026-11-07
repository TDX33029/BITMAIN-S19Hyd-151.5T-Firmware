// FUN_00cd0ac4 @ 00cd0ac4 size=4356 calls_out=21 calls_in=1
// strings: paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended | origin | measured_hashrate | paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended | measured_hashrate | origin

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cd0ac4(uint *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  char ******ppppppcVar16;
  char *****pppppcVar17;
  char *****pppppcVar18;
  char ******ppppppcVar19;
  char ******ppppppcVar20;
  char *****pppppcVar21;
  char ******ppppppcVar22;
  char ******unaff_r6;
  char *****pppppcVar23;
  char ******ppppppcVar24;
  char *****pppppcVar25;
  char ******ppppppcVar26;
  char ******ppppppcVar27;
  char ******unaff_r9;
  int iVar28;
  char ******unaff_r10;
  char ******local_2ac;
  char ******local_2a8;
  char ******local_288;
  char ******local_280;
  char ******local_27c;
  char ******local_278;
  char ******local_268;
  char ******local_260;
  uint local_254;
  char ******local_250;
  char ******local_248;
  char ******local_22c;
  byte *local_224;
  uint local_218;
  uint local_214;
  uint local_210;
  char ******local_208;
  char ******ppppppcStack_204;
  char ******ppppppcStack_200;
  char ******ppppppcStack_1fc;
  char ******ppppppcStack_1f8;
  int iStack_1f4;
  char ******local_1f0;
  char ******local_1ec;
  int local_1e8;
  char ******local_1e0;
  char ******local_1dc;
  int local_1d8;
  char ******local_1d0;
  char ******local_1cc;
  char ******local_1c8;
  char ******local_1c4;
  char ******ppppppcStack_1c0;
  int local_1bc;
  char ******local_1b8;
  char ******local_1b4;
  char ******local_1b0;
  char ******local_1ac;
  char ******ppppppcStack_1a8;
  int iStack_1a4;
  char ******local_1a0;
  char ******ppppppcStack_19c;
  char ******ppppppcStack_198;
  char ******ppppppcStack_194;
  char ******ppppppcStack_190;
  int iStack_18c;
  byte local_188 [4];
  char ******local_184;
  char ******ppppppcStack_180;
  int iStack_17c;
  char ******local_170;
  char ******ppppppcStack_16c;
  char ******ppppppcStack_168;
  char ******ppppppcStack_164;
  char ******ppppppcStack_160;
  int iStack_15c;
  char ******local_158;
  char ******local_154;
  int local_150;
  char ******local_148;
  char ******ppppppcStack_144;
  int iStack_140;
  char ******local_138;
  char ******local_134;
  char ******local_130;
  char ******local_12c;
  char ******ppppppcStack_128;
  int iStack_124;
  char *****local_120;
  undefined4 local_11c;
  char ******local_118;
  char ******local_114;
  char *****local_110;
  undefined4 local_10c;
  char ******local_108;
  char ******local_104;
  int local_100;
  char ******local_f8;
  char ******local_f4;
  char ******local_f0;
  char ******local_ec;
  char ******ppppppcStack_e8;
  int iStack_e4;
  char ******local_e0;
  char ******local_dc;
  char ******local_d8;
  char ******local_d4;
  char ******ppppppcStack_d0;
  int local_cc;
  char ******local_c8;
  char ******ppppppcStack_c4;
  char ******ppppppcStack_c0;
  char ******ppppppcStack_bc;
  char ******ppppppcStack_b8;
  int iStack_b4;
  char ******local_b0;
  char ******local_ac;
  char ******local_a8;
  char ******local_a4;
  char ******local_a0;
  int iStack_9c;
  char ******local_98;
  char ******ppppppcStack_94;
  int iStack_90;
  char ******local_88;
  char ******ppppppcStack_84;
  int iStack_80;
  char ******local_78;
  char ******local_74;
  char ******local_70;
  char ******local_6c;
  char ******local_68;
  int iStack_64;
  undefined4 uStack_60;
  char ******local_58;
  char ******ppppppcStack_54;
  int local_50;
  char ******local_48;
  char ******local_44;
  char ******ppppppcStack_40;
  char ******local_3c;
  char ******ppppppcStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined1 uStack_25;
  
  if (*param_2 == '\x04') {
    iVar3 = *(int *)(param_2 + 4);
    pbVar9 = *(byte **)(param_2 + 8);
    uVar15 = *(uint *)(param_2 + 0xc);
    uVar8 = 0x38e3;
    if (uVar15 < 0x38e3) {
      uVar8 = uVar15;
    }
    pbVar4 = pbVar9 + uVar15 * 0x18;
    if (uVar15 == 0) {
      local_254 = 8;
      uVar8 = 0;
    }
    else {
      local_254 = thunk_FUN_016d4a50(uVar8 * 0x48);
      if (local_254 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,uVar8 * 0x48);
      }
    }
    uVar10 = (uint)&local_48 | 1;
    puVar11 = (undefined4 *)((uint)&local_78 | 4);
    puVar12 = (undefined4 *)((uint)&local_48 | 4);
    uVar13 = (uint)&local_138 | 1;
    local_210 = 0;
    local_224 = pbVar9;
    local_218 = uVar8;
    local_214 = local_254;
    while (uVar8 = local_210, local_224 != pbVar4) {
      pbVar14 = local_224 + 0x18;
      bVar1 = *local_224;
      if (bVar1 == 6) {
        goto LAB_00cd1ab8;
      }
      local_188[0] = bVar1;
      FUN_016dd1aa((uint)local_188 | 1,local_224 + 1,0x17);
      iVar7 = iStack_17c;
      ppppppcVar27 = ppppppcStack_180;
      ppppppcVar19 = local_184;
      if (bVar1 != 4) {
        if (bVar1 == 5) {
          local_104 = ppppppcStack_180;
          local_114 = ppppppcStack_180;
          local_248 = (char ******)0x0;
          local_138 = (char ******)CONCAT31(local_138._1_3_,6);
          local_108 = local_184;
          local_100 = 0;
          if (local_184 != (char ******)0x0) {
            local_100 = iStack_17c;
          }
          local_118 = local_184;
          local_120 = (char *****)(uint)(local_184 != (char ******)0x0);
          local_250 = (char ******)&DAT_00000005;
          local_268 = local_ac;
          local_260 = (char ******)&DAT_80000000;
          local_10c = 0;
          local_11c = 0;
          local_110 = local_120;
          local_22c = unaff_r6;
          ppppppcVar19 = (char ******)&DAT_3b9aca00;
LAB_00cd0d00:
          FUN_00c3b8fc(&local_58,&local_120);
          ppppppcVar22 = local_a0;
          ppppppcVar24 = local_a4;
          ppppppcVar27 = (char ******)&local_f8;
          if (local_58 != (char ******)0x0) {
            ppppppcVar16 = local_58 + local_50 * 6;
            unaff_r10 = (char ******)local_58[local_50 * 3 + 0x43];
            unaff_r9 = (char ******)local_58[local_50 * 3 + 0x44];
            ppppppcVar27 = (char ******)local_58[local_50 * 3 + 0x45];
            pppppcVar17 = ppppppcVar16[1];
            pppppcVar18 = ppppppcVar16[2];
            pppppcVar21 = ppppppcVar16[3];
            pppppcVar23 = ppppppcVar16[4];
            pppppcVar25 = ppppppcVar16[5];
            *puVar12 = *ppppppcVar16;
            puVar12[1] = pppppcVar17;
            puVar12[2] = pppppcVar18;
            puVar12[3] = pppppcVar21;
            puVar12[4] = pppppcVar23;
            puVar12[5] = pppppcVar25;
            local_78 = local_48;
            local_74 = local_44;
            local_70 = ppppppcStack_40;
            local_6c = local_3c;
            local_68 = ppppppcStack_38;
            iStack_64 = iStack_34;
            uStack_60 = uStack_30;
          }
          if (local_58 == (char ******)0x0 || unaff_r10 == (char ******)&DAT_80000000) {
            local_ac = local_268;
            local_a8 = local_260;
            local_b0 = local_288;
            if (local_260 == (char ******)&DAT_80000000) {
              local_74 = (char ******)&DAT_00000006;
              local_78 = (char ******)0x38b2cc;
              local_44 = (char ******)&DAT_0157d360;
              local_48 = (char ******)&local_78;
              local_22c = (char ******)FUN_00f56780(&DAT_0057a25d,&local_48);
              goto LAB_00cd10e8;
            }
            if (local_250 == (char ******)&DAT_00000005 && local_248 == (char ******)0x0) {
              local_74 = (char ******)&DAT_00000011;
              local_78 = (char ******)0x359dd0;
              local_44 = (char ******)&DAT_0157d360;
              local_48 = (char ******)&local_78;
              local_22c = (char ******)FUN_00f56780(&DAT_0057a25d,&local_48);
              ppppppcVar19 = unaff_r9;
LAB_00cd12f4:
              ppppppcVar27 = ppppppcVar24 + 4;
              for (; ppppppcVar22 != (char ******)0x0;
                  ppppppcVar22 = (char ******)((int)ppppppcVar22 + -1)) {
                if (ppppppcVar27[-4] != (char *****)0x0) {
                  thunk_FUN_016d3fb4(ppppppcVar27[-3]);
                }
                if (ppppppcVar27[-1] != (char *****)0x0) {
                  thunk_FUN_016d3fb4(*ppppppcVar27);
                }
                ppppppcVar27 = ppppppcVar27 + 6;
              }
              if (local_260 != (char ******)0x0) goto LAB_00cd1348;
              goto LAB_00cd135c;
            }
            if (ppppppcVar19 == (char ******)&DAT_3b9aca00) {
              local_74 = (char ******)&DAT_00000006;
              local_78 = (char ******)0x409554;
              local_44 = (char ******)&DAT_0157d360;
              local_48 = (char ******)&local_78;
              local_22c = (char ******)FUN_00f56780(&DAT_0057a25d,&local_48);
              goto LAB_00cd12f4;
            }
            local_158 = local_88;
            local_154 = ppppppcStack_84;
            local_150 = iStack_80;
            local_170 = local_288;
            ppppppcStack_16c = local_268;
            ppppppcStack_168 = local_260;
            ppppppcStack_164 = local_a4;
            ppppppcStack_160 = local_a0;
            iStack_15c = iStack_9c;
            local_148 = local_98;
            ppppppcStack_144 = ppppppcStack_94;
            iStack_140 = iStack_90;
            local_ec = local_98;
            ppppppcStack_e8 = ppppppcStack_94;
            iStack_e4 = iStack_90;
            local_d4 = local_88;
            ppppppcStack_d0 = ppppppcStack_84;
            local_cc = iStack_80;
            local_f4 = local_248;
            local_dc = local_2ac;
            local_e0 = local_2a8;
            local_f8 = local_250;
            local_c8 = local_288;
            ppppppcStack_c4 = local_268;
            ppppppcStack_c0 = local_260;
            ppppppcStack_bc = local_a4;
            ppppppcStack_b8 = local_a0;
            iStack_b4 = iStack_9c;
            local_f0 = local_22c;
            local_d8 = ppppppcVar19;
            if (local_100 != 0) {
              local_22c = (char ******)FUN_00f2c2f0(iVar7,&DAT_01887430,&DAT_018ab990);
              FUN_00c3e2dc(&local_f8);
              local_250 = (char ******)&DAT_00000005;
              local_248 = (char ******)0x0;
            }
            while( true ) {
              FUN_00c3b8fc(&local_f8,&local_120);
              ppppppcVar24 = local_f0;
              ppppppcVar27 = local_f8;
              if (local_f8 == (char ******)0x0) break;
              local_48 = &local_120;
              if (local_f8[(int)local_f0 * 3 + 0x43] != (char *****)0x0) {
                thunk_FUN_016d3fb4(local_f8[(int)local_f0 * 3 + 0x44]);
              }
              FUN_00c436d0(ppppppcVar27 + (int)ppppppcVar24 * 6);
            }
            local_f8 = (char ******)0x0;
            local_278 = local_2ac;
            local_280 = local_2a8;
            unaff_r9 = ppppppcVar19;
            local_27c = ppppppcVar19;
            goto joined_r0x00cd1600;
          }
          if ((char)local_138 != '\x06') {
            FUN_00d4fc54(&local_138);
          }
          local_138 = (char ******)*puVar11;
          local_134 = (char ******)puVar11[1];
          local_130 = (char ******)puVar11[2];
          local_12c = (char ******)puVar11[3];
          ppppppcStack_128 = (char ******)puVar11[4];
          iStack_124 = puVar11[5];
          if (ppppppcVar27 == (char ******)&DAT_00000011) {
            iVar5 = thunk_FUN_016dd50a(unaff_r9,"measured_hashrate",0x11);
            if (iVar5 == 0) {
              iVar5 = 1;
              goto LAB_00cd0e04;
            }
LAB_00cd0e00:
            iVar5 = 3;
          }
          else {
            if (ppppppcVar27 != (char ******)&DAT_00000006) goto LAB_00cd0e00;
            iVar5 = thunk_FUN_016dd50a(unaff_r9,
                                       "paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended"
                                       ,6);
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = thunk_FUN_016dd50a(unaff_r9,"origin",6);
              if (iVar5 != 0) goto LAB_00cd0e00;
              iVar5 = 2;
            }
          }
LAB_00cd0e04:
          if (unaff_r10 != (char ******)0x0) {
            thunk_FUN_016d3fb4(unaff_r9);
          }
          cVar2 = (char)local_138;
          if (iVar5 == 3) {
            local_138 = (char ******)CONCAT31(local_138._1_3_,6);
            if (cVar2 != '\x06') {
              local_48 = (char ******)CONCAT31(local_48._1_3_,cVar2);
              FUN_016dd1aa(uVar10,uVar13,0x17);
              FUN_00c01f94(&local_48);
              goto LAB_00cd0d00;
            }
            local_ac = local_268;
            local_b0 = local_288;
            local_a8 = local_260;
            local_22c = (char ******)FUN_00c4c3ec(&DAT_00565810,0x10);
LAB_00cd10e8:
            goto LAB_00cd10ec;
          }
          if (iVar5 != 0) {
            if (iVar5 == 1) {
              if (local_250 == (char ******)&DAT_00000005 && local_248 == (char ******)0x0) {
                local_138 = (char ******)CONCAT31(local_138._1_3_,6);
                if (cVar2 != '\x06') {
                  local_48 = (char ******)CONCAT31(local_48._1_3_,cVar2);
                  FUN_016dd1aa(uVar10,uVar13,0x17);
                  FUN_00d4380c(&local_78,&local_48);
                  local_250 = local_78;
                  local_248 = local_74;
                  local_22c = local_70;
                  if (local_78 == (char ******)&DAT_00000005 && local_74 == (char ******)0x0) {
                    local_ac = local_268;
                    local_b0 = local_288;
                    local_a8 = local_260;
                    goto LAB_00cd10ec;
                  }
                  local_98 = local_6c;
                  ppppppcStack_94 = local_68;
                  iStack_90 = iStack_64;
                  goto LAB_00cd0d00;
                }
                local_ac = local_268;
                local_b0 = local_288;
                local_a8 = local_260;
                local_22c = (char ******)FUN_00c4c3ec(&DAT_00565810,0x10);
              }
              else {
                local_ac = local_268;
                local_b0 = local_288;
                local_a8 = local_260;
                local_74 = (char ******)&DAT_00000011;
                local_78 = (char ******)0x359dd0;
                local_44 = (char ******)&DAT_0157d360;
                local_48 = (char ******)&local_78;
                local_22c = (char ******)FUN_00f56780(&DAT_00582dbd,&local_48);
              }
            }
            else {
              if (ppppppcVar19 == (char ******)&DAT_3b9aca00) {
                local_138 = (char ******)CONCAT31(local_138._1_3_,6);
                if (cVar2 == '\x06') {
                  local_ac = local_268;
                  local_b0 = local_288;
                  local_a8 = local_260;
                  local_22c = (char ******)FUN_00c4c3ec(&DAT_00565810,0x10);
                  goto LAB_00cd10e8;
                }
                local_48 = (char ******)CONCAT31(local_48._1_3_,cVar2);
                FUN_016dd1aa(uVar10,uVar13,0x17);
                FUN_00c65aa8(&local_78,&local_48);
                local_2a8 = local_78;
                if (local_70 == (char ******)&DAT_3b9aca00) {
                  local_ac = local_268;
                  local_b0 = local_288;
                  local_a8 = local_260;
                  local_22c = local_78;
                  goto LAB_00cd10ec;
                }
                local_2ac = local_74;
                local_88 = local_6c;
                ppppppcStack_84 = local_68;
                iStack_80 = iStack_64;
                ppppppcVar19 = local_70;
                goto LAB_00cd0d00;
              }
              local_ac = local_268;
              local_b0 = local_288;
              local_a8 = local_260;
              local_74 = (char ******)&DAT_00000006;
              local_78 = (char ******)0x409554;
              local_44 = (char ******)&DAT_0157d360;
              local_48 = (char ******)&local_78;
              local_22c = (char ******)FUN_00f56780(&DAT_00582dbd,&local_48);
            }
            goto LAB_00cd10e8;
          }
          if (local_260 != (char ******)&DAT_80000000) {
            local_ac = local_268;
            local_b0 = local_288;
            local_a8 = local_260;
            local_74 = (char ******)&DAT_00000006;
            local_78 = (char ******)0x38b2cc;
            local_44 = (char ******)&DAT_0157d360;
            local_48 = (char ******)&local_78;
            local_22c = (char ******)FUN_00f56780(&DAT_00582dbd,&local_48);
            goto LAB_00cd10e8;
          }
          local_138 = (char ******)CONCAT31(local_138._1_3_,6);
          if (cVar2 == '\x06') {
            local_ac = local_268;
            local_b0 = local_288;
            local_a8 = (char ******)&DAT_80000000;
            local_22c = (char ******)FUN_00c4c3ec(&DAT_00565810,0x10);
            goto LAB_00cd10e8;
          }
          local_48 = (char ******)CONCAT31(local_48._1_3_,cVar2);
          FUN_016dd1aa(uVar10,uVar13,0x17);
          FUN_00c64ee0(&local_78,&local_48);
          if (local_70 != (char ******)&DAT_80000000) goto code_r0x00cd0f40;
          local_ac = local_268;
          local_b0 = local_288;
          local_a8 = (char ******)&DAT_80000000;
          local_22c = local_78;
LAB_00cd10ec:
          ppppppcVar19 = unaff_r9;
          if (local_a8 != (char ******)&DAT_80000000) {
            ppppppcVar27 = local_a4 + 4;
            for (ppppppcVar19 = local_a0; ppppppcVar19 != (char ******)0x0;
                ppppppcVar19 = (char ******)((int)ppppppcVar19 + -1)) {
              if (ppppppcVar27[-4] != (char *****)0x0) {
                thunk_FUN_016d3fb4(ppppppcVar27[-3]);
              }
              if (ppppppcVar27[-1] != (char *****)0x0) {
                thunk_FUN_016d3fb4(*ppppppcVar27);
              }
              ppppppcVar27 = ppppppcVar27 + 6;
            }
            ppppppcVar19 = unaff_r9;
            if (local_a8 != (char ******)0x0) {
              ppppppcVar24 = local_a4;
LAB_00cd1348:
              thunk_FUN_016d3fb4(ppppppcVar24);
            }
          }
LAB_00cd135c:
          while( true ) {
            FUN_00c3b8fc(&local_f8,&local_120);
            ppppppcVar24 = local_f0;
            ppppppcVar27 = local_f8;
            if (local_f8 == (char ******)0x0) break;
            local_48 = &local_120;
            if (local_f8[(int)local_f0 * 3 + 0x43] != (char *****)0x0) {
              thunk_FUN_016d3fb4(local_f8[(int)local_f0 * 3 + 0x44]);
            }
            FUN_00c436d0(ppppppcVar27 + (int)ppppppcVar24 * 6);
          }
          local_250 = (char ******)&DAT_00000005;
          local_248 = (char ******)0x0;
          unaff_r9 = ppppppcVar19;
joined_r0x00cd1600:
          if ((char)local_138 != '\x06') {
            FUN_00c01f94(&local_138);
          }
          goto LAB_00cd13bc;
        }
        local_22c = (char ******)FUN_00f36124(local_188,&uStack_25,&DAT_01873e08);
        if ((bVar1 & 6) != 4) {
          FUN_00c01f94(local_188);
        }
LAB_00cd19f0:
        *param_1 = 0x80000000;
        param_1[1] = (uint)local_22c;
        uVar15 = 0;
        while (uVar15 != uVar8) {
          iVar7 = local_254 + uVar15 * 0x48;
          iVar5 = *(int *)(iVar7 + 0x3c);
          puVar11 = (undefined4 *)(iVar5 + 0x10);
          for (iVar28 = *(int *)(iVar7 + 0x40); iVar28 != 0; iVar28 = iVar28 + -1) {
            if (puVar11[-4] != 0) {
              thunk_FUN_016d3fb4(puVar11[-3]);
            }
            if (puVar11[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar11);
            }
            puVar11 = puVar11 + 6;
          }
          uVar15 = uVar15 + 1;
          if (*(int *)(iVar7 + 0x38) != 0) {
            thunk_FUN_016d3fb4(iVar5);
          }
        }
        if (local_218 != 0) {
          thunk_FUN_016d3fb4(local_254);
        }
        goto LAB_00cd1ae4;
      }
      ppppppcVar24 = ppppppcStack_180 + iStack_17c * 6;
      local_a8 = local_184;
      local_ac = ppppppcStack_180;
      local_b0 = ppppppcStack_180;
      local_a4 = ppppppcVar24;
      if (iStack_17c == 0) {
LAB_00cd1028:
        unaff_r9 = local_ac;
        local_22c = (char ******)FUN_00f2c2f0(0,&DAT_01878054,&DAT_018ab990);
LAB_00cd1044:
        local_248 = (char ******)0x0;
        local_250 = (char ******)&DAT_00000005;
      }
      else {
        unaff_r9 = ppppppcStack_180 + 6;
        local_ac = unaff_r9;
        if (*(char *)ppppppcStack_180 == '\x06') goto LAB_00cd1028;
        local_48 = (char ******)CONCAT31(local_48._1_3_,*(char *)ppppppcStack_180);
        FUN_016dd1aa(uVar10,(char *)((int)ppppppcStack_180 + 1),0x17);
        FUN_00c64ee0(&local_138,&local_48);
        ppppppcVar22 = local_130;
        local_22c = local_138;
        if (local_130 == (char ******)&DAT_80000000) goto LAB_00cd1044;
        local_6c = local_12c;
        local_68 = ppppppcStack_128;
        iStack_64 = iStack_124;
        local_70 = local_130;
        local_74 = local_134;
        local_78 = local_138;
        if (iVar7 == 1) {
LAB_00cd1228:
          uVar6 = 1;
LAB_00cd122c:
          local_22c = (char ******)FUN_00f2c2f0(uVar6,&DAT_01878054,&DAT_018ab990);
LAB_00cd1244:
          ppppppcVar16 = local_6c;
          ppppppcVar26 = local_6c + 4;
          for (ppppppcVar20 = local_68; ppppppcVar20 != (char ******)0x0;
              ppppppcVar20 = (char ******)((int)ppppppcVar20 + -1)) {
            if (ppppppcVar26[-4] != (char *****)0x0) {
              thunk_FUN_016d3fb4(ppppppcVar26[-3]);
            }
            if (ppppppcVar26[-1] != (char *****)0x0) {
              thunk_FUN_016d3fb4(*ppppppcVar26);
            }
            ppppppcVar26 = ppppppcVar26 + 6;
          }
          if (ppppppcVar22 != (char ******)0x0) {
            thunk_FUN_016d3fb4(ppppppcVar16);
          }
          goto LAB_00cd1044;
        }
        unaff_r9 = ppppppcVar27 + 0xc;
        local_ac = unaff_r9;
        if (*(char *)(ppppppcVar27 + 6) == '\x06') goto LAB_00cd1228;
        local_48 = (char ******)CONCAT31(local_48._1_3_,*(char *)(ppppppcVar27 + 6));
        FUN_016dd1aa(uVar10,(char *)((int)ppppppcVar27 + 0x19),0x17);
        FUN_00d4380c(&local_138,&local_48);
        local_22c = local_130;
        ppppppcVar20 = local_134;
        ppppppcVar16 = local_138;
        local_250 = local_138;
        local_248 = local_134;
        if (local_138 == (char ******)&DAT_00000005 && local_134 == (char ******)0x0)
        goto LAB_00cd1244;
        local_58 = local_12c;
        ppppppcStack_54 = ppppppcStack_128;
        local_50 = iStack_124;
        if (iVar7 == 2) {
LAB_00cd1678:
          uVar6 = 2;
          goto LAB_00cd122c;
        }
        unaff_r9 = ppppppcVar27 + 0x12;
        local_ac = unaff_r9;
        if (*(char *)(ppppppcVar27 + 0xc) == '\x06') goto LAB_00cd1678;
        local_48 = (char ******)CONCAT31(local_48._1_3_,*(char *)(ppppppcVar27 + 0xc));
        FUN_016dd1aa(uVar10,(char *)((int)ppppppcVar27 + 0x31),0x17);
        FUN_00c65aa8(&local_138,&local_48);
        ppppppcVar26 = local_138;
        if (local_130 == (char ******)&DAT_3b9aca00) {
          local_22c = local_138;
          goto LAB_00cd1244;
        }
        local_27c = local_130;
        local_278 = local_134;
        local_158 = local_12c;
        local_154 = ppppppcStack_128;
        local_150 = iStack_124;
        local_170 = local_78;
        ppppppcStack_16c = local_74;
        ppppppcStack_168 = local_70;
        ppppppcStack_164 = local_6c;
        ppppppcStack_160 = local_68;
        iStack_15c = iStack_64;
        local_148 = local_58;
        ppppppcStack_144 = ppppppcStack_54;
        iStack_140 = local_50;
        local_ec = local_58;
        ppppppcStack_e8 = ppppppcStack_54;
        iStack_e4 = local_50;
        local_d4 = local_12c;
        ppppppcStack_d0 = ppppppcStack_128;
        local_cc = iStack_124;
        local_f4 = ppppppcVar20;
        local_f8 = ppppppcVar16;
        local_f0 = local_22c;
        local_d8 = local_130;
        local_dc = local_134;
        local_e0 = local_138;
        local_c8 = local_78;
        ppppppcStack_c4 = local_74;
        ppppppcStack_c0 = local_70;
        ppppppcStack_bc = local_6c;
        ppppppcStack_b8 = local_68;
        iStack_b4 = iStack_64;
        if (iVar7 != 3) {
          local_22c = (char ******)FUN_00f2c2f0(iVar7,&DAT_0188738c,&DAT_018ab990);
          FUN_00d4ff2c(&local_f8);
          local_248 = (char ******)0x0;
          local_250 = (char ******)&DAT_00000005;
        }
        local_280 = ppppppcVar26;
      }
      FUN_00ce0380(unaff_r9,((uint)((int)ppppppcVar24 - (int)unaff_r9) >> 3) * -0x55555555);
      if (ppppppcVar19 != (char ******)0x0) {
        thunk_FUN_016d3fb4(ppppppcVar27);
      }
LAB_00cd13bc:
      unaff_r6 = ppppppcStack_160;
      if (local_250 == (char ******)&DAT_00000005 && local_248 == (char ******)0x0)
      goto LAB_00cd19f0;
      local_1e0 = local_148;
      local_1dc = ppppppcStack_144;
      local_1d8 = iStack_140;
      local_1f0 = local_158;
      local_1ec = local_154;
      local_1e8 = local_150;
      local_208 = local_170;
      ppppppcStack_204 = ppppppcStack_16c;
      ppppppcStack_200 = ppppppcStack_168;
      ppppppcStack_1fc = ppppppcStack_164;
      ppppppcStack_1f8 = ppppppcStack_160;
      iStack_1f4 = iStack_15c;
      if (((uint)local_250 & 7) == 5) goto LAB_00cd1ab8;
      if (local_250 == (char ******)&DAT_00000006) goto LAB_00cd19f0;
      local_1c4 = local_148;
      ppppppcStack_1c0 = ppppppcStack_144;
      local_1ac = local_158;
      ppppppcStack_1a8 = local_154;
      iStack_1a4 = local_150;
      local_1b0 = local_27c;
      local_1b4 = local_278;
      local_1b8 = local_280;
      local_1cc = local_248;
      local_1bc = iStack_140;
      local_1a0 = local_170;
      ppppppcStack_19c = ppppppcStack_16c;
      ppppppcStack_198 = ppppppcStack_168;
      ppppppcStack_194 = ppppppcStack_164;
      ppppppcStack_190 = ppppppcStack_160;
      iStack_18c = iStack_15c;
      local_1d0 = local_250;
      local_1c8 = local_22c;
      if (uVar8 == local_218) {
        FUN_00d64dc4(&local_218);
        local_254 = local_214;
      }
      FUN_016dd1aa(local_254 + uVar8 * 0x48,&local_1d0,0x48);
      local_210 = uVar8 + 1;
      unaff_r10 = local_22c;
      local_224 = pbVar14;
    }
    pbVar14 = pbVar4;
LAB_00cd1ab8:
    *param_1 = local_218;
    param_1[1] = local_214;
    param_1[2] = local_210;
    if (local_218 != 0x80000000) {
      local_f8 = (char ******)*param_1;
      local_f4 = (char ******)param_1[1];
      local_f0 = (char ******)param_1[2];
      if (pbVar4 != pbVar14) {
        uVar8 = FUN_00f2c2f0(uVar15,&DAT_0188738c,&DAT_018ab990);
        *param_1 = 0x80000000;
        param_1[1] = uVar8;
        FUN_00d4fce4(&local_f8);
      }
    }
LAB_00cd1ae4:
    FUN_00ce0380(pbVar14,((uint)((int)pbVar4 - (int)pbVar14) >> 3) * -0x55555555);
    if (iVar3 != 0) {
      thunk_FUN_016d3fb4(pbVar9);
    }
  }
  else {
    uVar8 = FUN_00f36124(param_2,&uStack_25,&DAT_01873da8);
    *param_1 = 0x80000000;
    param_1[1] = uVar8;
  }
  if (*param_2 != '\x04') {
    FUN_00c01f94(param_2);
  }
  return;
code_r0x00cd0f40:
  local_260 = local_70;
  local_58 = local_6c;
  ppppppcStack_54 = local_68;
  local_50 = iStack_64;
  local_268 = local_74;
  local_288 = local_78;
  local_a4 = local_6c;
  local_a0 = local_68;
  iStack_9c = iStack_64;
  unaff_r10 = local_78;
  goto LAB_00cd0d00;
}

