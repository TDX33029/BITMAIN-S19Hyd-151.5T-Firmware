// FUN_01335298 @ 01335298 size=3408 calls_out=26 calls_in=2
// strings: end of string not reached

void FUN_01335298(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint **ppuVar14;
  int extraout_r3;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  undefined4 uVar20;
  uint **ppuVar21;
  uint *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint **ppuVar26;
  uint **ppuVar27;
  uint uVar28;
  uint **ppuVar29;
  bool bVar30;
  undefined8 uVar31;
  uint *local_168;
  uint **local_164;
  uint **local_160;
  uint **local_15c;
  uint **local_158;
  uint **local_154;
  uint **local_150;
  uint **ppuStack_14c;
  uint **local_148;
  uint **ppuStack_144;
  uint **ppuStack_140;
  uint **local_13c;
  uint **local_138;
  uint **local_134;
  uint **local_130;
  uint **local_12c;
  uint **ppuStack_128;
  undefined1 local_124;
  char local_123;
  uint **local_120;
  uint **local_11c;
  uint **local_118;
  uint **local_114;
  uint **ppuStack_110;
  uint **local_10c;
  uint **ppuStack_108;
  uint **ppuStack_104;
  uint **ppuStack_100;
  uint **ppuStack_fc;
  uint **ppuStack_f8;
  uint **local_f0;
  uint **local_ec;
  uint **local_e8;
  uint **local_e4;
  uint **local_e0;
  uint **local_dc;
  uint **local_d8;
  uint **ppuStack_d4;
  undefined4 uStack_d0;
  uint **local_c8;
  uint **ppuStack_c4;
  uint **ppuStack_c0;
  uint **local_b8;
  uint **ppuStack_b4;
  uint **ppuStack_b0;
  uint **local_ac;
  uint **ppuStack_a8;
  uint **ppuStack_a4;
  uint *local_a0;
  uint **local_9c;
  uint **local_98;
  uint **local_94;
  uint *local_90;
  uint **local_8c;
  uint **local_88;
  uint **local_84;
  uint **local_80;
  uint **ppuStack_7c;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined2 uStack_76;
  uint **local_74;
  uint **local_70;
  uint **local_6c;
  uint **local_68;
  uint **local_64;
  undefined4 local_60;
  uint **local_5c;
  undefined1 local_58;
  uint **local_50;
  uint **local_4c;
  uint **local_48;
  uint **local_44;
  uint **local_40;
  uint **local_3c;
  uint **local_38;
  uint **local_34;
  uint **local_30;
  uint **local_2c;
  uint **ppuStack_28;
  
  puVar8 = param_2 + 4;
  puVar17 = (uint *)param_2[5];
  ppuVar27 = (uint **)param_2[6];
  bVar2 = *(byte *)((int)param_2 + 0x21);
  bVar3 = *(byte *)(param_2 + 0xc);
  bVar4 = *(byte *)((int)param_2 + 0x23);
  bVar5 = *(byte *)((int)param_2 + 0x26);
  uVar31 = thunk_FUN_01bee35a(puVar8,0x2c0,param_3,*(undefined1 *)((int)param_2 + 0x22));
  puVar13 = (uint *)((int)uVar31 + (int)((ulonglong)uVar31 >> 0x20));
  if ((char)puVar13[4] == '\0') {
    FUN_019ae6ac(&local_50);
    puVar13[3] = (uint)local_44;
    *puVar13 = (uint)local_50;
    puVar13[1] = (uint)local_4c;
    puVar13[2] = (uint)local_48;
    *(undefined1 *)(puVar13 + 4) = 1;
  }
  uVar28 = *puVar13;
  local_74 = (uint **)puVar13[1];
  local_6c = (uint **)puVar13[3];
  *puVar13 = uVar28 + 1;
  puVar13[1] = (uint)((int)local_74 + (uint)(0xfffffffe < uVar28));
  local_9c = (uint **)&SUB_00000004;
  local_68 = (uint **)(((uint)bVar2 | extraout_r3 << 1 | (uint)bVar5 << 4 | (uint)bVar4 << 2 |
                       (uint)bVar3 << 6) & 0xff | 0x20);
  puVar19 = puVar13 + 2;
  local_70 = (uint **)*puVar19;
  local_94 = (uint **)0x0;
  local_98 = (uint **)0x0;
  local_a0 = (uint *)0x0;
  local_88 = (uint **)&DAT_0056d238;
  local_84 = (uint **)0x0;
  local_80 = (uint **)0x0;
  ppuStack_7c = (uint **)0x0;
  local_64 = (uint **)0x0;
  local_60 = (uint **)0x0;
  local_78 = (undefined1)uVar28;
  uStack_77 = (undefined1)(uVar28 >> 8);
  uStack_76 = (undefined2)(uVar28 >> 0x10);
  local_90 = puVar17;
  local_8c = ppuVar27;
  FUN_0132bb68(&local_50,&local_a0,0,0);
  ppuVar14 = local_4c;
  if (local_50 == (uint **)0x0) {
    local_e0 = local_38;
    local_f0 = local_48;
    local_ec = local_44;
    local_e8 = local_40;
    local_e4 = local_3c;
    if (local_4c < ppuVar27) {
      ppuVar27 = (uint **)thunk_FUN_01be5118(0x19);
      if (ppuVar27 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x19);
      }
      ppuVar29 = (uint **)&DAT_00000019;
      FUN_01bed4e2(ppuVar27,"end of string not reached",0x19);
      FUN_0132bfa0(&local_f0);
      ppuVar21 = (uint **)0x0;
      ppuVar26 = (uint **)&DAT_00000019;
      goto LAB_01335428;
    }
    if (local_60._2_1_ != '\0') {
      local_60._0_3_ = (uint3)(ushort)local_60;
      FUN_0132c084(&local_a0,&local_f0);
    }
    ppuVar27 = local_ec;
    local_38 = local_f0;
    local_34 = local_ec;
    local_30 = local_e8;
    local_2c = local_e4;
    ppuStack_28 = local_e0;
    local_118 = (uint **)CONCAT22(uStack_76,CONCAT11(uStack_77,local_78));
    local_50 = local_80;
    local_4c = ppuStack_7c;
    local_44 = local_74;
    local_40 = local_70;
    local_3c = local_6c;
    local_120 = local_80;
    local_11c = ppuStack_7c;
    local_114 = local_74;
    ppuStack_110 = local_70;
    local_10c = local_6c;
    ppuStack_108 = local_f0;
    ppuStack_104 = local_ec;
    ppuStack_100 = local_e8;
    ppuStack_fc = local_e4;
    ppuStack_f8 = local_e0;
    local_48 = local_118;
    if (local_a0 != (uint *)0x80000000) {
      local_150 = local_80;
      ppuStack_14c = ppuStack_7c;
      ppuStack_144 = local_74;
      ppuStack_140 = local_70;
      local_13c = local_6c;
      local_138 = local_f0;
      local_134 = local_ec;
      local_130 = local_e8;
      local_12c = local_e4;
      ppuStack_128 = local_e0;
      uVar28 = 0;
      local_124 = local_60._1_1_;
      local_160 = local_98;
      local_15c = local_94;
      local_158 = local_88;
      local_123 = local_60._3_1_;
      local_154 = local_84;
      local_164 = local_9c;
      local_168 = local_a0;
      local_148 = local_118;
      if (local_60._3_1_ == '\0') {
        uVar11 = 9;
        if ((int)local_f0 < 0) {
          uVar11 = (uint)local_f0 ^ 0x80000000;
        }
        if (uVar11 == 4) {
          bVar30 = local_e4 == (uint **)0x0;
          ppuVar21 = local_f0;
          ppuVar14 = local_6c;
          if (!bVar30) {
            ppuVar14 = local_e8 + (int)local_e4 * 5;
            ppuVar21 = ppuVar14 + -5;
            bVar30 = ppuVar21 == (uint **)0x0;
          }
          if (!bVar30) {
            puVar9 = *ppuVar21;
            bVar30 = puVar9 == (uint *)0x80000007;
            if (bVar30) {
              puVar9 = (uint *)(uint)*(byte *)(ppuVar14 + -3);
            }
            if (bVar30 && puVar9 == (uint *)0x0) {
              ppuVar21 = (uint **)((int)local_e4 + -1);
              ppuVar26 = (uint **)ppuVar14[-4];
              local_118 = (uint **)ppuVar14[-3];
              local_114 = (uint **)ppuVar14[-2];
              ppuStack_110 = (uint **)ppuVar14[-1];
              local_120 = (uint **)0x80000007;
              local_f0 = local_ec;
              local_ec = local_e8;
              local_12c = (uint **)0x0;
              local_130 = (uint **)0x4;
              local_134 = (uint **)0x0;
              local_11c = ppuVar26;
              if (((uint)local_118 & 0xff) != 0) {
                local_e8 = ppuVar21;
                FUN_0133e1c8();
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0x1336014);
                (*pcVar1)();
              }
              puVar10 = (undefined4 *)((uint)&local_a0 | 4);
              *puVar10 = ppuVar27;
              puVar10[1] = local_e8;
              puVar10[2] = ppuVar21;
              local_a0 = (uint *)&DAT_80000004;
              local_e8 = ppuVar21;
              ppuVar27 = (uint **)thunk_FUN_01be5118(0x14);
              if (ppuVar27 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0x14);
              }
              *ppuVar27 = local_a0;
              ppuVar27[1] = (uint *)local_9c;
              ppuVar27[2] = (uint *)local_98;
              ppuVar27[3] = (uint *)local_94;
              ppuVar27[4] = local_90;
              local_50 = (uint **)0x80000006;
              local_4c = ppuVar27;
              ppuVar27 = (uint **)thunk_FUN_01be5118(0x28);
              if (ppuVar27 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(4,0x28);
              }
              *ppuVar27 = (uint *)local_50;
              ppuVar27[1] = (uint *)local_4c;
              ppuVar27[2] = (uint *)local_48;
              ppuVar27[3] = (uint *)local_44;
              ppuVar27[4] = (uint *)local_40;
              puVar9 = ppuVar26[1];
              puVar16 = ppuVar26[2];
              puVar18 = ppuVar26[3];
              puVar22 = ppuVar26[4];
              ppuVar27[5] = *ppuVar26;
              ppuVar27[6] = puVar9;
              ppuVar27[7] = puVar16;
              ppuVar27[8] = puVar18;
              ppuVar27[9] = puVar22;
              FUN_0133e210(&local_138);
              local_12c = (uint **)0x2;
              local_134 = (uint **)0x2;
              local_138 = (uint **)&DAT_80000004;
              local_130 = ppuVar27;
              thunk_FUN_01be4678(ppuVar26);
              goto LAB_01335784;
            }
          }
        }
        else {
          ppuVar27 = local_f0;
          if (uVar11 == 7) {
            ppuVar27 = (uint **)((uint)local_e8 & 0xff);
          }
          if (uVar11 == 7 && ppuVar27 == (uint **)0x0) {
            local_a0 = (uint *)0x80000000;
            ppuVar27 = (uint **)thunk_FUN_01be5118(0x14);
            if (ppuVar27 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x14);
            }
            *ppuVar27 = local_a0;
            ppuVar27[1] = (uint *)local_9c;
            ppuVar27[2] = (uint *)local_98;
            ppuVar27[3] = (uint *)local_94;
            ppuVar27[4] = local_90;
            iVar15 = 0;
            local_50 = (uint **)0x80000006;
            local_a0 = (uint *)0x80000000;
            do {
              puVar9 = (&local_a0)[iVar15];
              (&local_a0)[iVar15] = local_134[iVar15];
              local_134[iVar15] = puVar9;
              iVar15 = iVar15 + 1;
            } while (iVar15 != 5);
            local_4c = ppuVar27;
            ppuVar27 = (uint **)thunk_FUN_01be5118(0x28);
            if (ppuVar27 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x28);
            }
            *ppuVar27 = (uint *)local_50;
            ppuVar27[1] = (uint *)local_4c;
            ppuVar27[2] = (uint *)local_48;
            ppuVar27[3] = (uint *)local_44;
            ppuVar27[4] = (uint *)local_40;
            ppuVar27[5] = local_a0;
            ppuVar27[6] = (uint *)local_9c;
            ppuVar27[7] = (uint *)local_98;
            ppuVar27[8] = (uint *)local_94;
            ppuVar27[9] = local_90;
            FUN_0133e210(&local_138);
            local_12c = (uint **)0x2;
            local_134 = (uint **)0x2;
            local_138 = (uint **)&DAT_80000004;
            local_130 = ppuVar27;
LAB_01335784:
            uVar28 = 1;
          }
        }
      }
      if ((char)puVar13[4] == '\0') {
        FUN_019ae6ac(&local_a0);
        *puVar13 = (uint)local_a0;
        puVar13[1] = (uint)local_9c;
        *puVar19 = (uint)local_98;
        puVar13[3] = (uint)local_94;
        *(undefined1 *)(puVar13 + 4) = 1;
      }
      local_40 = (uint **)*puVar13;
      local_3c = (uint **)puVar13[1];
      local_30 = &local_168;
      *puVar13 = (uint)((int)local_40 + 1);
      puVar13[1] = (uint)((int)local_3c + (uint)((uint **)0xfffffffe < local_40));
      local_38 = (uint **)*puVar19;
      local_34 = (uint **)puVar13[3];
      local_50 = (uint **)&DAT_0056d238;
      local_4c = (uint **)0x0;
      local_48 = (uint **)0x0;
      local_44 = (uint **)0x0;
      local_2c = (uint **)(uVar28 ^ 1);
      FUN_0133ca50(&local_120,&local_50,&local_138,0);
      if (local_30[3] == (uint *)0x0) {
        ppuVar27 = (uint **)local_30[1];
        ppuVar21 = ppuVar27 + (int)local_30[2];
        ppuVar14 = ppuVar27;
        if (local_30[2] == (uint *)0x0) {
          puVar13 = (uint *)0x0;
          goto LAB_0133589c;
        }
        ppuVar27 = ppuVar27 + 1;
      }
      else {
        puVar13 = local_30[2];
        if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_00450d12,0x13,&DAT_01ce6824);
        }
        ppuVar14 = (uint **)local_30[1];
        if (((uint)*ppuVar14 & 1) != 0) {
          local_a0 = (uint *)0x7;
          local_9c = (uint **)0x0;
          ppuVar27 = (uint **)thunk_FUN_01be5118(0x48);
          if (ppuVar27 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x48);
          }
LAB_0133595c:
          FUN_01bed4e2(ppuVar27,&local_a0,0x48);
          FUN_0133da78(&local_120);
          ppuVar14 = (uint **)&DAT_00000010;
          ppuVar21 = (uint **)&DAT_80000000;
LAB_01335980:
          if ((local_4c != (uint **)0x0) &&
             (local_4c + (int)local_4c * 3 + 3 != (uint **)0xfffffffb)) {
            thunk_FUN_01be4678((int)local_50 - ((int)local_4c * 0xc + 0xc));
          }
          local_c8 = local_b8;
          ppuStack_c4 = ppuStack_b4;
          ppuStack_c0 = ppuStack_b0;
          if (ppuVar21 == (uint **)&DAT_80000000) {
            bVar30 = true;
            param_1[1] = ppuVar14;
            param_1[2] = ppuVar27;
            param_1[3] = local_b8;
            param_1[4] = ppuStack_b4;
            param_1[5] = ppuStack_b0;
            *param_1 = 3;
          }
          else {
            local_d8 = local_ac;
            ppuStack_d4 = ppuStack_a8;
            uStack_d0 = ppuStack_a4;
            ppuVar26 = uStack_d0;
            local_e4 = local_b8;
            local_e0 = ppuStack_b4;
            local_dc = ppuStack_b0;
            uStack_d0._1_1_ = (char)((uint)ppuStack_a4 >> 8);
            local_f0 = ppuVar21;
            local_ec = ppuVar14;
            local_e8 = ppuVar27;
            uStack_d0 = ppuVar26;
            if (uStack_d0._1_1_ == '\x01') {
              uVar28 = 9;
              if ((int)local_138 < 0) {
                uVar28 = (uint)local_138 ^ 0x80000000;
              }
              bVar30 = false;
              if (uVar28 == 4) {
                if (local_12c == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(0,0,&DAT_01ce67ac);
                }
                if (*local_130 == (uint *)0x80000002) {
                  cVar6 = *(char *)(local_130 + 1);
                  goto LAB_01335be4;
                }
              }
              else if (uVar28 == 2) {
                cVar6 = (char)local_134;
LAB_01335be4:
                bVar30 = cVar6 == '\0';
              }
              local_68 = (uint **)&SUB_00000004;
              local_74 = (uint **)0xf4240;
              local_78 = 1;
              local_84 = (uint **)0xfa;
              local_60 = (uint **)((int)ppuStack_b0 << 1);
              local_64 = (uint **)0x0;
              local_6c = (uint **)0x0;
              local_5c = (uint **)((uint)local_5c & 0xffffff00);
              local_70 = (uint **)((uint)local_70 & 0xffffff00);
              uStack_77 = 0;
              local_80 = (uint **)&DAT_0000000a;
              ppuStack_7c = (uint **)0x1000000;
              local_88 = (uint **)0x0;
              local_8c = (uint **)&DAT_00000001;
              local_90 = (uint *)0x0;
              local_98 = (uint **)0x0;
              local_a0 = (uint *)0x0;
              if (!bVar30) {
                local_48 = (uint **)&DAT_00000001;
                local_4c = (uint **)0x3;
                local_50 = (uint **)0x7;
                FUN_013387b0(&local_6c,&local_50);
                local_50 = (uint **)0x3;
                FUN_013387b0(&local_6c,&local_50);
                local_50 = (uint **)&DAT_00000008;
                local_4c = (uint **)0x0;
                FUN_013387b0(&local_6c,&local_50);
              }
              ppuVar27 = local_e0;
              if (local_e0 == (uint **)&DAT_00000001) {
                local_50 = (uint **)&DAT_00000009;
                local_4c = (uint **)0x0;
                FUN_013387b0(&local_6c,&local_50);
              }
              FUN_01338814(&local_50,&local_a0,&local_f0,0);
              ppuVar21 = local_40;
              ppuVar14 = local_50;
              if (local_50 == (uint **)&DAT_00000012) {
                if (ppuVar27 == (uint **)&DAT_00000001) {
                  local_50 = (uint **)0x9;
                  local_4c = (uint **)&DAT_00000001;
                  FUN_013387b0(&local_6c,&local_50);
                }
                local_50 = (uint **)0x2;
                FUN_013387b0(&local_6c,&local_50);
                ppuVar14 = (uint **)&DAT_00000012;
                local_120 = local_6c;
                local_11c = local_68;
                local_118 = local_64;
                ppuVar21 = local_60;
              }
              else {
                local_120 = local_4c;
                local_11c = local_48;
                local_118 = local_44;
                FUN_01338760(&local_6c);
              }
              FUN_0134bd64(local_90,local_8c);
              local_b8 = local_120;
              ppuStack_b4 = local_11c;
              ppuStack_b0 = local_118;
              if (ppuVar14 == (uint **)&DAT_00000012) {
                local_48 = local_120;
                local_44 = local_11c;
                local_40 = local_118;
                local_4c = (uint **)0x1;
                local_50 = (uint **)0x1;
                local_3c = ppuVar21;
                puVar10 = (undefined4 *)thunk_FUN_01be5118(0x18);
                if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(4,0x18);
                }
                *puVar10 = local_50;
                puVar10[1] = local_4c;
                puVar10[2] = local_48;
                puVar10[3] = local_44;
                puVar10[4] = local_40;
                puVar10[5] = local_3c;
                puVar12 = (undefined4 *)((uint)&local_a0 | 4);
                uVar20 = param_2[1];
                uVar23 = param_2[2];
                uVar24 = param_2[3];
                *puVar12 = *param_2;
                puVar12[1] = uVar20;
                puVar12[2] = uVar23;
                puVar12[3] = uVar24;
                uVar20 = param_2[5];
                uVar23 = param_2[6];
                uVar24 = param_2[7];
                puVar12[4] = param_2[4];
                puVar12[5] = uVar20;
                puVar12[6] = uVar23;
                puVar12[7] = uVar24;
                uVar20 = param_2[9];
                uVar23 = param_2[10];
                uVar24 = param_2[0xb];
                uVar25 = param_2[0xc];
                puVar12[8] = param_2[8];
                puVar12[9] = uVar20;
                puVar12[10] = uVar23;
                puVar12[0xb] = uVar24;
                puVar12[0xc] = uVar25;
                local_a0 = (uint *)0x2;
                local_64 = local_dc;
                local_48 = local_158;
                local_44 = local_154;
                local_40 = local_150;
                local_3c = ppuStack_14c;
                local_38 = local_148;
                local_34 = ppuStack_144;
                local_30 = ppuStack_140;
                local_2c = local_13c;
                local_4c = (uint **)0x1;
                local_50 = (uint **)0x1;
                local_68 = (uint **)puVar10;
                puVar10 = (undefined4 *)thunk_FUN_01be5118(0x28);
                if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(8,0x28);
                }
                *puVar10 = local_50;
                puVar10[1] = local_4c;
                puVar10[2] = local_48;
                puVar10[3] = local_44;
                puVar10[4] = local_40;
                puVar10[5] = local_3c;
                puVar10[6] = local_38;
                puVar10[7] = local_34;
                puVar10[8] = local_30;
                puVar10[9] = local_2c;
                FUN_01bed4e2(param_1,&local_a0,0x4c);
                param_1[0x13] = puVar10;
                FUN_0133634c(&local_f0);
                FUN_01336268(&local_138);
                FUN_0134aee0(local_168,local_164,4,4);
                return;
              }
              bVar30 = true;
              param_1[2] = local_120;
              param_1[3] = local_11c;
              param_1[4] = local_118;
              param_1[5] = ppuVar21;
              *param_1 = 3;
              param_1[1] = ppuVar14;
            }
            else {
              local_118 = (uint **)0x0;
              local_11c = (uint **)&DAT_00000001;
              local_120 = (uint **)0x0;
              FUN_01336388(&local_138,&local_120,0);
              FUN_01338394(&local_a0,local_11c,local_118,param_2);
              bVar30 = local_a0 != (uint *)0x12;
              if (bVar30) {
                *param_1 = 3;
                param_1[1] = local_a0;
                param_1[2] = local_9c;
                param_1[3] = local_98;
                param_1[4] = local_94;
                param_1[5] = local_90;
                FUN_0134bd64(local_120,local_11c);
              }
              else {
                local_90 = (uint *)*puVar8;
                local_8c = (uint **)param_2[5];
                local_88 = (uint **)param_2[6];
                local_84 = (uint **)param_2[7];
                local_80 = (uint **)param_2[8];
                ppuStack_7c = (uint **)param_2[9];
                uVar20 = param_2[10];
                local_78 = (undefined1)uVar20;
                uStack_77 = (undefined1)((uint)uVar20 >> 8);
                uStack_76 = (undefined2)((uint)uVar20 >> 0x10);
                local_a0 = (uint *)*param_2;
                local_94 = (uint **)param_2[3];
                local_74 = (uint **)param_2[0xb];
                local_6c = local_120;
                local_68 = local_11c;
                local_64 = local_118;
                local_58 = (undefined1)uVar28;
                local_70 = (uint **)CONCAT31(local_70._1_3_,bVar3);
                local_5c = local_98;
                local_60 = local_9c;
                local_48 = local_158;
                local_44 = local_154;
                local_40 = local_150;
                local_3c = ppuStack_14c;
                local_38 = local_148;
                local_34 = ppuStack_144;
                local_30 = ppuStack_140;
                local_2c = local_13c;
                local_4c = (uint **)&DAT_00000001;
                local_50 = (uint **)&DAT_00000001;
                local_9c = (uint **)param_2[1];
                local_98 = (uint **)param_2[2];
                puVar10 = (undefined4 *)thunk_FUN_01be5118(0x28);
                if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(8,0x28);
                }
                *puVar10 = local_50;
                puVar10[1] = local_4c;
                puVar10[2] = local_48;
                puVar10[3] = local_44;
                puVar10[4] = local_40;
                puVar10[5] = local_3c;
                puVar10[6] = local_38;
                puVar10[7] = local_34;
                puVar10[8] = local_30;
                puVar10[9] = local_2c;
                FUN_01bed4e2(param_1,&local_a0,0x4c);
                param_1[0x13] = puVar10;
              }
            }
            FUN_0133634c(&local_f0);
          }
          FUN_01336268(&local_138);
          FUN_0134aee0(local_168,local_164,4,4);
          if (!bVar30) {
            return;
          }
          FUN_0133b4f8(&local_158);
          goto LAB_0133545c;
        }
        ppuVar27 = ppuVar14;
        if (puVar13 != (uint *)0x0) {
          ppuVar27 = ppuVar14 + 1;
        }
        ppuVar21 = ppuVar14 + (int)puVar13;
      }
      puVar13 = *ppuVar14;
LAB_0133589c:
      iVar15 = 0;
      bVar30 = false;
      do {
        ppuVar26 = ppuVar27;
        if (puVar13 == (uint *)0x0) {
          do {
            if (ppuVar26 == ppuVar21 || ppuVar26 == (uint **)0x0) {
              if ((!bVar30) ||
                 ((ppuVar14 <= (uint **)((int)local_2c - (int)(uVar28 ^ 1)) &&
                  ((uVar28 & ppuVar14 == local_2c) == 0)))) {
                local_b8 = local_114;
                ppuStack_b4 = ppuStack_110;
                ppuStack_b0 = local_10c;
                local_ac = ppuStack_108;
                ppuStack_a8 = ppuStack_104;
                ppuStack_a4 = ppuStack_100;
                ppuVar14 = local_11c;
                ppuVar27 = local_118;
                ppuVar21 = local_120;
                goto LAB_01335980;
              }
              local_a0 = (uint *)0x7;
              local_9c = ppuVar14;
              ppuVar27 = (uint **)thunk_FUN_01be5118(0x48);
              if (ppuVar27 == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(8,0x48);
              }
              goto LAB_0133595c;
            }
            ppuVar27 = ppuVar26 + 1;
            puVar19 = *ppuVar26;
            iVar15 = iVar15 + 0x20;
            ppuVar26 = ppuVar27;
          } while (puVar19 == (uint *)0x0);
        }
        else {
          puVar19 = puVar13;
        }
        bVar30 = true;
        puVar13 = (uint *)((int)puVar19 - 1U & (uint)puVar19);
        bVar4 = (byte)puVar19;
        bVar5 = (byte)((uint)puVar19 >> 8);
        bVar7 = (byte)((uint)puVar19 >> 0x10);
        bVar2 = (byte)((uint)puVar19 >> 0x18);
        ppuVar14 = (uint **)(iVar15 + LZCOUNT((uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1)
                                                                << 1 | bVar4 >> 2 & 1) << 1 |
                                                              bVar4 >> 3 & 1) << 1 | bVar4 >> 4 & 1)
                                                             << 1 | bVar4 >> 5 & 1) << 1 |
                                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) <<
                                              0x18 | (uint)(byte)((((((((bVar5 & 1) << 1 |
                                                                       bVar5 >> 1 & 1) << 1 |
                                                                      bVar5 >> 2 & 1) << 1 |
                                                                     bVar5 >> 3 & 1) << 1 |
                                                                    bVar5 >> 4 & 1) << 1 |
                                                                   bVar5 >> 5 & 1) << 1 |
                                                                  bVar5 >> 6 & 1) << 1 | bVar5 >> 7)
                                                     << 0x10 |
                                              (uint)(byte)((((((((bVar7 & 1) << 1 | bVar7 >> 1 & 1)
                                                                << 1 | bVar7 >> 2 & 1) << 1 |
                                                              bVar7 >> 3 & 1) << 1 | bVar7 >> 4 & 1)
                                                             << 1 | bVar7 >> 5 & 1) << 1 |
                                                           bVar7 >> 6 & 1) << 1 | bVar7 >> 7) << 8 |
                                              (uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1)
                                                                << 1 | bVar2 >> 2 & 1) << 1 |
                                                              bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1)
                                                             << 1 | bVar2 >> 5 & 1) << 1 |
                                                           bVar2 >> 6 & 1) << 1 | bVar2 >> 7)));
      } while( true );
    }
    ppuVar21 = local_9c;
    ppuVar14 = local_84;
    ppuVar26 = local_98;
    ppuVar27 = local_94;
    ppuVar29 = local_88;
  }
  else {
    ppuVar21 = local_4c;
    ppuVar14 = local_3c;
    ppuVar26 = local_48;
    ppuVar27 = local_44;
    ppuVar29 = local_40;
LAB_01335428:
    FUN_0134aee0(local_a0,local_9c,4,4);
    FUN_0133b4f8(&local_88);
  }
  *param_1 = 3;
  param_1[1] = ppuVar21;
  param_1[2] = ppuVar26;
  param_1[3] = ppuVar27;
  param_1[4] = ppuVar29;
  param_1[5] = ppuVar14;
LAB_0133545c:
  FUN_0134bd64(*puVar8,puVar17);
  return;
}

