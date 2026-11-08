// FUN_00f735b8 @ 00f735b8 size=9952 calls_out=47 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | boser::system_upgrade::upgrade | boser::system_upgrade::upgrade | boser::system_upgrade::upgrade | boser::system_upgrade::upgrade | boser::system_upgrade::upgrade

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f735b8(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int ******ppppppiVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puVar14;
  int *******pppppppiVar15;
  int *piVar16;
  uint uVar17;
  undefined4 *extraout_r2;
  int *******pppppppiVar18;
  int *******extraout_r3;
  int *******pppppppiVar19;
  int *******extraout_r3_00;
  int *******pppppppiVar20;
  int *******unaff_r5;
  int *******pppppppiVar21;
  undefined1 *puVar22;
  int ****ppppiVar23;
  int ******ppppppiVar24;
  undefined *puVar25;
  undefined4 *puVar26;
  undefined8 uVar27;
  int *******local_25c;
  undefined1 *local_250;
  undefined4 *local_24c;
  undefined1 *local_248;
  undefined4 local_244;
  int *******local_230;
  undefined1 *local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  char *local_1f8;
  int *******pppppppiStack_1f4;
  int *******pppppppiStack_1f0;
  undefined *puStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int *******local_1e0;
  int *******local_1dc;
  int *******local_1d8;
  int *local_1d0;
  uint local_1cc;
  int *******local_1c8;
  int *******local_1c4;
  char *local_1c0;
  int *******local_1bc;
  int *******local_1b8;
  undefined *local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int *******local_1a8;
  undefined1 *local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int *******local_170;
  int *******local_16c;
  int *******local_168;
  int *******local_160;
  int *******local_15c;
  char *local_158;
  int *******pppppppiStack_154;
  int *******local_150;
  int *******local_14c;
  int *******local_148;
  int *******local_144;
  int local_140;
  undefined4 local_13c;
  int *******local_120;
  int *******local_11c;
  char *local_118;
  int *******local_108;
  int *******local_104;
  int *******local_100;
  int *******local_fc;
  undefined4 local_f8;
  int *******local_c8;
  int *******local_c4;
  char *local_c0;
  int *******local_b0;
  int *******local_ac;
  int *******local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int *******local_98;
  int *******local_94;
  int *******local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *******local_70 [4];
  int *******local_60;
  undefined4 local_5c;
  int *******local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  int *******local_40;
  int *******local_3c;
  int *******local_38;
  int *******local_34;
  undefined4 local_30;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar27 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x4c)) {
  case 0:
    do {
      uVar17 = *(uint *)(*(int *)(param_1 + 0x48) + 8);
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x48) + 8;
      *(uint *)(param_1 + 0x54) = uVar17 >> 2;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
switchD_00f73608_caseD_3:
      iVar13 = FUN_019e0cbc(param_1 + 0x50,*param_2);
      if (iVar13 != 0) {
        uVar3 = 3;
        goto LAB_00f75f40;
      }
      FUN_019ede44(param_1 + 0x50);
      *(undefined1 *)(param_1 + 0x1a4) = 0;
      *(int *)(param_1 + 0x1a0) = param_1 + 0x18;
      iVar13 = param_1 + 0x18;
LAB_00f73a2c:
      if (3 < DAT_01d51b00) {
        local_1bc = (int *******)&DAT_0000001e;
        local_1c4 = (int *******)&DAT_0000001e;
        local_1b8 = (int *******)&DAT_01c195d4;
        local_1c0 = "boser::system_upgrade::upgrade";
        local_1c8 = (int *******)0x3ffb38;
        FUN_0193b350(&DAT_003f2cfe,0x27,4,&local_1c8);
      }
      *(undefined1 *)(param_1 + 0x119) = 0;
      *(int *)(param_1 + 0x110) = iVar13;
LAB_00f73a94:
      *(int *)(param_1 + 0x100) = iVar13;
      *(undefined1 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      piVar7 = *(int **)(*(int *)(iVar13 + 0xc) + 0x24);
      do {
        iVar13 = *piVar7;
        bVar6 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar6);
      *piVar7 = iVar13 + 1;
      if (iVar13 < 0) goto switchD_00f73608_caseD_1;
      *(int **)(param_1 + 0x104) = piVar7;
      piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 0x100) + 0xc) + 0x20);
      do {
        iVar13 = *piVar7;
        bVar6 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar6);
      *piVar7 = iVar13 + 1;
      if (iVar13 < 0) goto switchD_00f73608_caseD_1;
      *(undefined1 *)(param_1 + 0x116) = 1;
      *(int **)(param_1 + 0x108) = piVar7;
      FUN_00b7d6b4(&local_248,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x100) + 0xc) + 0x1c));
      if (local_248 == &DAT_80000016) {
        iVar13 = *(int *)(param_1 + 0x104);
        *(undefined1 *)(param_1 + 0x115) = 1;
        *(undefined4 *)(param_1 + 0x10c) = local_244;
        local_148 = (int *******)FUN_010955a4(*(undefined4 *)(param_1 + 0x100));
        iVar13 = iVar13 + 8;
        *(int *)(param_1 + 0x120) = iVar13;
        local_144 = (int *******)&DAT_01c1deac;
        *(int ********)(param_1 + 0x124) = local_148;
        *(undefined **)(param_1 + 0x128) = &DAT_01c1deac;
        *(undefined1 *)(param_1 + 0x134) = 0;
LAB_00f73b64:
        local_140 = iVar13 + 0x80;
        local_13c._0_2_ = (ushort)(byte)local_13c;
        puVar8 = (undefined4 *)thunk_FUN_01be5118(0x18);
        if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x18);
        }
        puVar25 = &DAT_01c02758;
        *puVar8 = local_150;
        puVar8[1] = local_14c;
        puVar8[2] = local_148;
        puVar8[3] = local_144;
        puVar8[4] = local_140;
        puVar8[5] = local_13c;
        *(undefined4 **)(param_1 + 300) = puVar8;
        *(undefined **)(param_1 + 0x130) = &DAT_01c02758;
        unaff_r5 = local_144;
LAB_00f73bb4:
        local_24c = (undefined4 *)(param_1 + 0x50);
        local_25c = (int *******)(param_1 + 0x120);
        (**(code **)(puVar25 + 0xc))(&local_1c8,puVar8,param_2);
        pppppppiVar21 = local_1c4;
        pppppppiVar20 = local_1c8;
        if (local_1c8 == (int *******)&DAT_00000006 && local_1c4 == (int *******)0x0) {
          uVar3 = 3;
          *(undefined1 *)(param_1 + 0x134) = 3;
LAB_00f75da4:
          *(undefined1 *)(param_1 + 0x119) = uVar3;
          bVar6 = true;
          goto LAB_00f75e10;
        }
        FUN_01139b38(*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x130));
        *(undefined1 *)(param_1 + 0x134) = 1;
        local_1f8 = local_1c0;
        pppppppiStack_1f4 = local_1bc;
        pppppppiStack_1f0 = local_1b8;
        puStack_1ec = local_1b4;
        uStack_1e8 = local_1b0;
        uStack_1e4 = local_1ac;
        local_230 = local_1a8;
        local_22c = local_1a4;
        uStack_228 = local_1a0;
        uStack_224 = local_19c;
        local_220 = local_198;
        uStack_21c = uStack_194;
        uStack_218 = uStack_190;
        uStack_214 = uStack_18c;
        uStack_210 = uStack_188;
        local_20c = local_184;
        uStack_208 = uStack_180;
        uStack_204 = uStack_17c;
        uStack_200 = uStack_178;
        uStack_1fc = uStack_174;
        FUN_00f2ddc8(local_25c);
        if (pppppppiVar20 == (int *******)&DAT_00000005 && pppppppiVar21 == (int *******)0x0) {
          unaff_r5 = (int *******)FUN_00eacd78(&local_1f8);
LAB_00f74078:
          piVar7 = *(int **)(param_1 + 0x10c);
          *(undefined1 *)(param_1 + 0x118) = 0;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(piVar7 + 2) = 0;
          DataMemoryBarrier(0xb);
          do {
            iVar13 = *piVar7;
            bVar6 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar6);
          *piVar7 = iVar13 + -1;
          if (iVar13 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a38efc(*(undefined4 *)(param_1 + 0x10c));
          }
          goto LAB_00f740c4;
        }
        *(undefined1 *)(param_1 + 0x118) = 1;
        *local_24c = pppppppiVar20;
        *(int ********)(param_1 + 0x54) = pppppppiVar21;
        *(char **)(param_1 + 0x58) = local_1f8;
        *(int ********)(param_1 + 0x5c) = pppppppiStack_1f4;
        *(int ********)(param_1 + 0x60) = pppppppiStack_1f0;
        *(undefined **)(param_1 + 100) = puStack_1ec;
        *(undefined4 *)(param_1 + 0x68) = uStack_1e8;
        *(undefined4 *)(param_1 + 0x6c) = uStack_1e4;
        *(int ********)(param_1 + 0x70) = local_230;
        *(undefined1 **)(param_1 + 0x74) = local_22c;
        *(undefined4 *)(param_1 + 0x78) = uStack_228;
        *(undefined4 *)(param_1 + 0x7c) = uStack_224;
        *(undefined4 *)(param_1 + 0x80) = local_220;
        *(undefined4 *)(param_1 + 0x84) = uStack_21c;
        *(undefined4 *)(param_1 + 0x88) = uStack_218;
        *(undefined4 *)(param_1 + 0x8c) = uStack_214;
        *(undefined4 *)(param_1 + 0x90) = uStack_210;
        *(undefined4 *)(param_1 + 0x94) = local_20c;
        *(undefined4 *)(param_1 + 0x98) = uStack_208;
        *(undefined4 *)(param_1 + 0x9c) = uStack_204;
        *(undefined4 *)(param_1 + 0xa0) = uStack_200;
        *(undefined4 *)(param_1 + 0xa4) = uStack_1fc;
        if (pppppppiVar20 == (int *******)&SUB_00000004 && pppppppiVar21 == (int *******)0x0) {
          if ((DAT_01d50f88 < 2) &&
             (((DAT_01d4c608 - 1 < 2 ||
               ((DAT_01d4c608 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c600), cVar5 != '\0')))) &&
              (iVar13 = FUN_01aaa278(DAT_01d4c600), iVar13 != 0)))) {
            if (*(int ********)(DAT_01d4c600 + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19684);
            }
            local_3c = (int *******)&local_b0;
            local_1c0 = *(char **)(DAT_01d4c600 + 0x24);
            local_1bc = *(int ********)(DAT_01d4c600 + 0x28);
            local_90 = (int *******)(DAT_01d4c600 + 0x1c);
            local_1c8 = (int *******)*local_90;
            local_40 = (int *******)&local_1c8;
            local_98 = (int *******)&local_40;
            local_1b8 = (int *******)0x0;
            local_94 = (int *******)&DAT_00000001;
            local_38 = (int *******)&DAT_01d2ea4c;
            local_ac = (int *******)&DAT_0000003d;
            local_b0 = (int *******)&DAT_003f2da6;
            local_1c4 = *(int ********)(DAT_01d4c600 + 0x20);
            FUN_01aaaecc(DAT_01d4c600,&local_98);
            iVar13 = DAT_01d4c600;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_104 = *(int ********)(DAT_01d4c600 + 0x14);
              local_100 = *(int ********)(DAT_01d4c600 + 0x18);
              local_108 = (int *******)&SUB_00000004;
              DataMemoryBarrier(0xb);
              ppppiVar23 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                ppppiVar23 = (int ****)&DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar9 = (*(code *)ppppiVar23[3])(pcVar2,&local_108);
              if (iVar9 != 0) {
                local_150 = local_108;
                local_14c = local_104;
                local_148 = local_100;
                FUN_01aaa328(iVar13,pcVar2,ppppiVar23[4],&local_150,&local_98);
              }
            }
            unaff_r5 = (int *******)0x0;
          }
          else {
            iVar13 = DAT_01d4c600;
            unaff_r5 = (int *******)0x0;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_1dc = *(int ********)(DAT_01d4c600 + 0x14);
              local_1d8 = *(int ********)(DAT_01d4c600 + 0x18);
              local_1e0 = (int *******)&SUB_00000004;
              DataMemoryBarrier(0xb);
              ppppiVar23 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                ppppiVar23 = (int ****)&DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar9 = (*(code *)ppppiVar23[3])(pcVar2,&local_1e0);
              if (iVar9 != 0) {
                if (*(int ********)(DAT_01d4c600 + 0x20) == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19684);
                }
                local_104 = (int *******)&local_98;
                local_1c0 = *(char **)(DAT_01d4c600 + 0x24);
                local_1bc = *(int ********)(DAT_01d4c600 + 0x28);
                local_108 = (int *******)&local_1c8;
                local_40 = (int *******)&local_108;
                unaff_r5 = (int *******)0x0;
                local_3c = (int *******)&DAT_00000001;
                local_94 = (int *******)&DAT_0000003d;
                local_1b8 = (int *******)0x0;
                local_100 = (int *******)&DAT_01d2ea4c;
                local_98 = (int *******)&DAT_003f2da6;
                local_150 = local_1e0;
                local_14c = local_1dc;
                local_148 = local_1d8;
                local_1c8 = *(int ********)(DAT_01d4c600 + 0x1c);
                local_1c4 = *(int ********)(DAT_01d4c600 + 0x20);
                local_38 = (int *******)(DAT_01d4c600 + 0x1c);
                FUN_01aaa328(iVar13,pcVar2,ppppiVar23[4],&local_150,&local_40);
              }
            }
          }
          goto LAB_00f74078;
        }
        *(undefined1 *)(param_1 + 0x118) = 0;
        pppppppiVar20 = (int *******)(param_1 + 0xa8);
        *(undefined1 *)(param_1 + 0x114) = 1;
        FUN_01bed4e2(pppppppiVar20,local_24c,0x58);
        if (*(int *)(param_1 + 0xa8) == 3 && *(int *)(param_1 + 0xac) == 0) {
          (**(code **)(*(int *)(param_1 + 0xb4) + 0x10))(&local_1c8,*(undefined4 *)(param_1 + 0xb0))
          ;
          if (local_1c8 != (int *******)&DAT_00000007) {
            puVar26 = (undefined4 *)((uint)&local_1c8 | 4);
            local_98 = (int *******)*puVar26;
            local_94 = (int *******)puVar26[1];
            pppppppiVar21 = (int *******)puVar26[2];
            uStack_8c = puVar26[3];
            uStack_88 = puVar26[4];
            puVar8 = (undefined4 *)((uint)&local_150 | 4);
            local_150 = local_1c8;
            ppppppiVar10 = *pppppppiVar20;
            iVar13 = *(int *)(param_1 + 0xac);
            *puVar8 = local_98;
            puVar8[1] = local_94;
            puVar8[2] = pppppppiVar21;
            puVar8[3] = uStack_8c;
            puVar8[4] = uStack_88;
            local_90 = pppppppiVar21;
            if (ppppppiVar10 == (int ******)&DAT_00000003 && iVar13 == 0) {
              *puVar26 = local_98;
              puVar26[1] = local_94;
              puVar26[2] = pppppppiVar21;
              puVar26[3] = uStack_8c;
              puVar26[4] = uStack_88;
              local_b0 = local_98;
              local_ac = local_94;
              local_a8 = pppppppiVar21;
              uStack_a4 = uStack_8c;
              uStack_a0 = uStack_88;
              unaff_r5 = (int *******)FUN_00eacd78(&local_1c8);
              FUN_00d38310(pppppppiVar20);
              *(undefined1 *)(param_1 + 0x114) = 0;
              goto LAB_00f74078;
            }
            if (((DAT_01d50f88 < 4) &&
                ((DAT_01d4c29c - 1 < 2 ||
                 ((DAT_01d4c29c != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c294), cVar5 != '\0')))))) &&
               (iVar13 = FUN_01aaa278(DAT_01d4c294), iVar13 != 0)) {
              pppppppiVar15 = *(int ********)(DAT_01d4c294 + 0x20);
              puVar8 = extraout_r2;
              pppppppiVar19 = extraout_r3;
              if (pppppppiVar15 != (int *******)0x0) {
                pppppppiVar20 = *(int ********)(DAT_01d4c294 + 0x24);
                pppppppiVar21 = *(int ********)(DAT_01d4c294 + 0x28);
                puVar8 = (undefined4 *)(DAT_01d4c294 + 0x1c);
                pppppppiVar19 = (int *******)*puVar8;
                local_30 = 0;
                local_5c = 0x89;
                local_60 = (int *******)0x3ed2e8;
                local_40 = pppppppiVar19;
                local_3c = pppppppiVar15;
                local_38 = pppppppiVar20;
                local_34 = pppppppiVar21;
              }
              if (pppppppiVar15 < (int *******)0x2) {
LAB_00f741cc:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c12638);
              }
              local_1b8 = (int *******)local_70;
              local_1bc = (int *******)&local_108;
              local_1c4 = (int *******)&local_60;
              local_1c8 = (int *******)&local_40;
              local_50 = (int *******)&local_1c8;
              local_4c = 2;
              local_70[0] = (int *******)&local_150;
              local_f8 = 1;
              local_1b4 = &DAT_01c12648;
              local_1c0 = "";
              local_108 = pppppppiVar19;
              local_104 = pppppppiVar15;
              local_100 = pppppppiVar20;
              local_fc = pppppppiVar21;
              local_48 = puVar8;
              FUN_01aaaecc(DAT_01d4c294,&local_50);
              iVar13 = DAT_01d4c294;
              if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                local_11c = *(int ********)(DAT_01d4c294 + 0x14);
                local_118 = *(char **)(DAT_01d4c294 + 0x18);
                local_120 = (int *******)0x2;
                DataMemoryBarrier(0xb);
                ppppiVar23 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  ppppiVar23 = (int ****)&DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar9 = (*(code *)ppppiVar23[3])(pcVar2,&local_120);
                if (iVar9 != 0) {
                  local_c8 = local_120;
                  local_c4 = local_11c;
                  local_c0 = local_118;
                  FUN_01aaa328(iVar13,pcVar2,ppppiVar23[4],&local_c8,&local_50);
                }
              }
            }
            else {
              iVar13 = DAT_01d4c294;
              if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
                local_15c = *(int ********)(DAT_01d4c294 + 0x14);
                local_158 = *(char **)(DAT_01d4c294 + 0x18);
                local_160 = (int *******)0x2;
                pppppppiVar20 = (int *******)&DAT_01cfc5e0;
                DataMemoryBarrier(0xb);
                pppppppiVar21 = (int *******)DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pppppppiVar21 = pppppppiVar20;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar9 = (*(code *)pppppppiVar21[3])(pcVar2,&local_160);
                if (iVar9 != 0) {
                  pppppppiVar15 = *(int ********)(DAT_01d4c294 + 0x1c);
                  pppppppiVar18 = *(int ********)(DAT_01d4c294 + 0x20);
                  pppppppiVar19 = extraout_r3_00;
                  if (pppppppiVar18 != (int *******)0x0) {
                    pppppppiVar20 = *(int ********)(DAT_01d4c294 + 0x24);
                    pppppppiVar19 = *(int ********)(DAT_01d4c294 + 0x28);
                    local_30 = 0;
                    local_4c = 0x89;
                    local_50 = (int *******)0x3ed2e8;
                    local_40 = pppppppiVar15;
                    local_3c = pppppppiVar18;
                    local_38 = pppppppiVar20;
                    local_34 = pppppppiVar19;
                  }
                  if (pppppppiVar18 < (int *******)0x2) goto LAB_00f741cc;
                  local_1b8 = (int *******)&local_60;
                  local_1bc = (int *******)&local_108;
                  local_1c4 = (int *******)&local_50;
                  local_1c8 = (int *******)&local_40;
                  local_120 = (int *******)&local_1c8;
                  local_11c = (int *******)0x2;
                  local_60 = (int *******)&local_150;
                  local_f8 = 1;
                  local_1b4 = &DAT_01c12648;
                  local_1c0 = "";
                  local_c8 = local_160;
                  local_c4 = local_15c;
                  local_c0 = local_158;
                  local_118 = (char *)(DAT_01d4c294 + 0x1c);
                  local_108 = pppppppiVar15;
                  local_104 = pppppppiVar18;
                  local_100 = pppppppiVar20;
                  local_fc = pppppppiVar19;
                  FUN_01aaa328(iVar13,pcVar2,pppppppiVar21[4],&local_c8,&local_120);
                }
              }
            }
            FUN_00b33ef4(&local_150);
          }
        }
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x104) + 8;
        *(undefined1 *)(param_1 + 0x160) = 0;
switchD_00f736a8_caseD_0:
        uVar11 = *(undefined4 *)(param_1 + 0x120);
        *(undefined4 *)(param_1 + 0x124) = uVar11;
        *(undefined1 *)(param_1 + 0x15c) = 0;
LAB_00f744e0:
        *(undefined4 *)(param_1 + 0x128) = uVar11;
        *(undefined1 *)(param_1 + 0x158) = 0;
LAB_00f744f4:
        *(undefined1 *)(param_1 + 0x134) = 0;
        *(undefined4 *)(param_1 + 300) = uVar11;
LAB_00f74504:
        *(undefined4 *)(param_1 + 0x130) = uVar11;
LAB_00f74508:
        *(undefined1 *)(param_1 + 0x154) = 0;
        *(undefined4 *)(param_1 + 0x144) = 0;
        *(undefined4 *)(param_1 + 0x148) = 0;
        *(undefined4 *)(param_1 + 0x14c) = 1;
        *(undefined4 *)(param_1 + 0x150) = 1;
        *(undefined4 *)(param_1 + 0x138) = uVar11;
        *(undefined4 *)(param_1 + 0x13c) = 0;
switchD_00f737ec_caseD_4:
        local_25c = (int *******)(param_1 + 0x120);
        unaff_r5 = (int *******)(param_1 + 0x128);
        puVar8 = (undefined4 *)(param_1 + 0x138);
        bVar4 = FUN_019f9bc4(puVar8,param_2);
        if (bVar4 == 2) {
          uVar3 = 4;
          *(undefined1 *)(param_1 + 0x134) = 4;
          *(undefined1 *)(param_1 + 0x158) = 3;
          *(undefined1 *)(param_1 + 0x15c) = 3;
          *(undefined1 *)(param_1 + 0x160) = 3;
          goto LAB_00f75da4;
        }
        FUN_0193c3cc(puVar8);
        if ((bVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
        }
        ppppppiVar10 = *unaff_r5;
        *(undefined1 *)(param_1 + 0x134) = 1;
        *(undefined1 *)(param_1 + 0x15c) = 1;
        *(undefined1 *)(param_1 + 0x158) = 1;
        ppppppiVar24 = ppppppiVar10 + 10;
        if (*ppppppiVar24 != (int *****)&SUB_00000004 || ppppppiVar10[0xb] != (int *****)0x0) {
          FUN_00d38310(ppppppiVar24);
        }
        *ppppppiVar24 = (int *****)&SUB_00000004;
        ppppppiVar10[0xb] = (int *****)0x0;
        FUN_019f8c54(ppppppiVar10,1);
        *(undefined1 *)(param_1 + 0x160) = 1;
        FUN_00e1059c(local_25c);
        piVar12 = *(int **)(*(int *)(*(int *)(param_1 + 0x100) + 0xc) + 0x20);
        do {
          iVar13 = *piVar12;
          bVar6 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar6);
        *piVar12 = iVar13 + 1;
        if (iVar13 < 0) goto switchD_00f73608_caseD_1;
        piVar7 = (int *)piVar12[2];
        do {
          iVar13 = *piVar7;
          bVar6 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar6);
        *piVar7 = iVar13 + 1;
        if (iVar13 < 0) goto switchD_00f73608_caseD_1;
        piVar16 = piVar7 + 0x35;
        DataMemoryBarrier(0xb);
        uVar17 = piVar7[0x34] & 0xfffffffe;
        do {
          bVar6 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar6);
        *piVar16 = *piVar16 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar12;
          bVar6 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar6);
        *piVar12 = iVar13 + -1;
        if (iVar13 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0121cce0();
        }
        uVar11 = *(undefined4 *)(param_1 + 0x100);
        *(undefined1 *)(param_1 + 0x117) = 1;
        local_1d0 = piVar7;
        local_1cc = uVar17;
        FUN_01ae1a9c(&local_150);
        *(undefined1 *)(param_1 + 0x114) = 0;
        FUN_01bed4e2(&local_1c8,param_1 + 0xa8,0x58);
        *(undefined2 *)(param_1 + 0x115) = 0;
        FUN_0109784c(local_25c,uVar11,&local_150,&local_1c8,*(undefined4 *)(param_1 + 0x10c),
                     *(undefined4 *)(param_1 + 0x108));
        if (((DAT_01d50f88 < 3) &&
            ((DAT_01d4c614 - 1 < 2 ||
             ((DAT_01d4c614 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c60c), cVar5 != '\0')))))) &&
           (iVar13 = FUN_01aaa278(DAT_01d4c60c), iVar13 != 0)) {
          pppppppiVar20 = *(int ********)(DAT_01d4c60c + 0x20);
          if (pppppppiVar20 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19694);
          }
          local_100 = *(int ********)(DAT_01d4c60c + 0x24);
          local_fc = *(int ********)(DAT_01d4c60c + 0x28);
          local_108 = *(int ********)(DAT_01d4c60c + 0x1c);
          local_f8 = 0;
          local_c4 = (int *******)0x33;
          local_c8 = (int *******)&DAT_003f2dc4;
          local_104 = pppppppiVar20;
          if (pppppppiVar20 == (int *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19694);
          }
          local_1b8 = (int *******)&local_120;
          local_1bc = (int *******)&local_150;
          local_1c4 = (int *******)&local_c8;
          local_1c8 = (int *******)&local_108;
          local_140 = 1;
          local_ac = (int *******)0x2;
          local_1b4 = &DAT_01c19614;
          local_1c0 = "";
          local_120 = local_25c;
          local_150 = local_108;
          local_14c = pppppppiVar20;
          local_148 = local_100;
          local_144 = local_fc;
          local_b0 = (int *******)&local_1c8;
          local_a8 = (int *******)(DAT_01d4c60c + 0x1c);
          FUN_01aaaecc(DAT_01d4c60c,&local_b0);
          iVar13 = DAT_01d4c60c;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_94 = *(int ********)(DAT_01d4c60c + 0x14);
            local_90 = *(int ********)(DAT_01d4c60c + 0x18);
            local_98 = (int *******)&DAT_00000003;
            DataMemoryBarrier(0xb);
            ppppiVar23 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              ppppiVar23 = (int ****)&DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar9 = (*(code *)ppppiVar23[3])(pcVar2);
            if (iVar9 != 0) {
              local_40 = local_98;
              local_3c = local_94;
              local_38 = local_90;
              FUN_01aaa328(iVar13,pcVar2,ppppiVar23[4],&local_40,&local_b0);
            }
          }
        }
        else {
          iVar13 = DAT_01d4c60c;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_16c = *(int ********)(DAT_01d4c60c + 0x14);
            local_168 = *(int ********)(DAT_01d4c60c + 0x18);
            local_170 = (int *******)&DAT_00000003;
            DataMemoryBarrier(0xb);
            ppppiVar23 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              ppppiVar23 = (int ****)&DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar9 = (*(code *)ppppiVar23[3])(pcVar2);
            if (iVar9 != 0) {
              pppppppiVar20 = *(int ********)(DAT_01d4c60c + 0x1c);
              pppppppiVar21 = *(int ********)(DAT_01d4c60c + 0x20);
              if (pppppppiVar21 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19694);
              }
              local_100 = *(int ********)(DAT_01d4c60c + 0x24);
              local_fc = *(int ********)(DAT_01d4c60c + 0x28);
              local_f8 = 0;
              local_ac = (int *******)0x33;
              local_b0 = (int *******)&DAT_003f2dc4;
              local_108 = pppppppiVar20;
              local_104 = pppppppiVar21;
              if (pppppppiVar21 == (int *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19694);
              }
              local_1b8 = (int *******)&local_c8;
              local_1c4 = (int *******)&local_b0;
              local_1c8 = (int *******)&local_108;
              local_140 = 1;
              local_94 = (int *******)0x2;
              local_1b4 = &DAT_01c19614;
              local_c8 = local_25c;
              local_1c0 = "";
              local_40 = local_170;
              local_3c = local_16c;
              local_38 = local_168;
              local_1bc = (int *******)&local_150;
              local_150 = pppppppiVar20;
              local_14c = pppppppiVar21;
              local_148 = local_100;
              local_144 = local_fc;
              local_98 = (int *******)&local_1c8;
              local_90 = (int *******)(DAT_01d4c60c + 0x1c);
              FUN_01aaa328(iVar13,pcVar2,ppppiVar23[4],&local_40,&local_98);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x117) = 0;
        FUN_01bed864(&local_1c8,local_25c,0x10);
        local_160 = local_1c8;
        local_15c = local_1c4;
        local_158 = local_1c0;
        pppppppiStack_154 = local_1bc;
        *(int **)(param_1 + 0x130) = piVar7;
        *(uint *)(param_1 + 0x134) = uVar17;
        *puVar8 = local_1c8;
        *(int ********)(param_1 + 0x13c) = local_1c4;
        *(char **)(param_1 + 0x140) = local_1c0;
        *(int ********)(param_1 + 0x144) = local_1bc;
        *(undefined1 *)(param_1 + 0x19c) = 0;
        goto LAB_00f74af4;
      }
      FUN_00f2b248(&local_248);
      local_1c8 = (int *******)&DAT_00000007;
      unaff_r5 = (int *******)FUN_00eacd78(&local_1c8);
LAB_00f740c4:
      piVar7 = *(int **)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x115) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar7;
        bVar6 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar6);
      *piVar7 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0121cce0(*(undefined4 *)(param_1 + 0x108));
      }
      piVar7 = *(int **)(param_1 + 0x104);
      *(undefined1 *)(param_1 + 0x116) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar7;
        bVar6 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar6);
      *piVar7 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177f84(*(undefined4 *)(param_1 + 0x104));
      }
LAB_00f75e00:
      local_250 = (undefined1 *)(param_1 + 0x119);
      *local_250 = 1;
      bVar6 = false;
LAB_00f75e10:
      local_24c = (undefined4 *)(param_1 + 0x50);
      if (bVar6) {
        *(undefined1 *)(param_1 + 0x1a4) = 3;
        uVar3 = 4;
LAB_00f75f40:
        *(undefined1 *)(param_1 + 0x4c) = uVar3;
        FUN_019ec558((int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
        return;
      }
      FUN_00f2db7c(local_24c);
      *(undefined1 *)(param_1 + 0x1a4) = 1;
      if (unaff_r5 != (int *******)0x0) {
        local_150 = unaff_r5;
        if (1 < DAT_01d51b00) {
          local_230 = (int *******)&local_150;
          local_22c = &LAB_00667a00;
          local_1b8 = (int *******)&DAT_01c195a4;
          local_1bc = (int *******)&DAT_0000001e;
          local_1c4 = (int *******)&DAT_0000001e;
          local_1c0 = "boser::system_upgrade::upgrade";
          local_1c8 = (int *******)0x3ffb38;
          FUN_0193b350(&DAT_00594430,&local_230,2,&local_1c8);
        }
        (*(code *)**local_150)(local_150);
      }
    } while( true );
  case 1:
switchD_00f73608_caseD_1:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf76520);
    (*pcVar1)();
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19594);
  case 3:
    goto switchD_00f73608_caseD_3;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x1a4)) {
    case 0:
      iVar13 = *(int *)(param_1 + 0x1a0);
      goto LAB_00f73a2c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c195e4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c195e4);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x119)) {
    case 0:
      iVar13 = *(int *)(param_1 + 0x110);
      goto LAB_00f73a94;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c19674);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c19674);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x134)) {
      case 0:
        iVar13 = *(int *)(param_1 + 0x120);
        local_148 = *(int ********)(param_1 + 0x124);
        local_144 = *(int ********)(param_1 + 0x128);
        goto LAB_00f73b64;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c19554);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c19554);
      case 3:
        puVar8 = *(undefined4 **)(param_1 + 300);
        puVar25 = *(undefined **)(param_1 + 0x130);
        goto LAB_00f73bb4;
      }
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x160)) {
      case 0:
        goto switchD_00f736a8_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c19544);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c19544);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x15c)) {
      case 0:
        uVar11 = *(undefined4 *)(param_1 + 0x124);
        goto LAB_00f744e0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c23280);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c23280);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x158)) {
      case 0:
        uVar11 = *(undefined4 *)(param_1 + 0x128);
        goto LAB_00f744f4;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c23290);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c23290);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x134)) {
      case 0:
        uVar11 = *(undefined4 *)(param_1 + 300);
        goto LAB_00f74504;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c232a0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c232a0);
      case 3:
        uVar11 = *(undefined4 *)(param_1 + 0x130);
        goto LAB_00f74508;
      case 4:
        goto switchD_00f737ec_caseD_4;
      }
    }
  }
  puVar14 = (undefined1 *)(param_1 + 0x19c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar14) {
  case 0:
    piVar7 = *(int **)(param_1 + 0x130);
    uVar17 = *(uint *)(param_1 + 0x134);
LAB_00f74af4:
    *(int **)(param_1 + 0x148) = piVar7;
    *(uint *)(param_1 + 0x14c) = uVar17;
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x13c);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x140);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x144);
LAB_00f74fdc:
    FUN_00a98170(piVar7 + 0x26);
    DataMemoryBarrier(0xb);
    *(uint *)(param_1 + 0x14c) = piVar7[0x34] & 0xfffffffe;
    iVar13 = 3;
    if ((uint)((uint)piVar7[0x28] < 3) <= (uint)-piVar7[0x29]) {
      iVar13 = piVar7[0x28] - 3;
    }
                    /* WARNING: Could not recover jumptable at 0x00f75020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00f75024 + *(int *)(&DAT_00f75024 + iVar13 * 4)))();
    return;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c195f4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c195f4);
  }
  puVar22 = (undefined1 *)(param_1 + 0x198);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*puVar22) {
  case 0:
    piVar7 = *(int **)(param_1 + 0x160);
    iVar13 = *piVar7;
    *(undefined1 *)(param_1 + 0x175) = 0;
    *(int *)(param_1 + 0x16c) = iVar13 + 8;
    *(int **)(param_1 + 0x170) = piVar7 + 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d28cb4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d28cb4);
  }
  bVar4 = FUN_00f76948(param_1 + 0x164,*param_2);
  if (bVar4 == 2) {
    *puVar22 = 3;
    *puVar14 = 3;
    bVar6 = true;
    unaff_r5 = (int *******)0x2;
  }
  else {
    if (*(char *)(param_1 + 0x175) == '\x04') {
      FUN_019ede44(param_1 + 0x178);
      *(undefined1 *)(param_1 + 0x174) = 0;
    }
    *puVar22 = 1;
    FUN_0101f424((undefined4 *)(param_1 + 0x160));
    if ((bVar4 & 1) == 0) {
      piVar7 = *(int **)(param_1 + 0x148);
      goto LAB_00f74fdc;
    }
    unaff_r5 = (int *******)FUN_012ecfd0(&DAT_003f2d11,0x30);
    FUN_00d38274(param_1 + 0x148);
    *puVar14 = 1;
    bVar6 = false;
  }
  if (bVar6) {
    uVar3 = 5;
    goto LAB_00f75da4;
  }
  FUN_00f2de40(param_1 + 0x130);
  piVar7 = *(int **)(param_1 + 0x104);
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined2 *)(param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x116) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar7;
    bVar6 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar6);
  *piVar7 = iVar13 + -1;
  if (iVar13 != 1) goto LAB_00f75e00;
  DataMemoryBarrier(0xb);
  FUN_01177f84(*(undefined4 *)(param_1 + 0x104));
  goto LAB_00f75e00;
}

