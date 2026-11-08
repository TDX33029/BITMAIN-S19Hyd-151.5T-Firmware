// FUN_01058c64 @ 01058c64 size=2432 calls_out=10 calls_in=1
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff6c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01058c64(uint *param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined2 extraout_r1;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  short *psVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ushort uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int *piVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  uint local_1b4;
  ushort *local_188;
  uint local_184;
  ushort *local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_168;
  uint local_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  undefined4 local_154;
  uint uStack_150;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  ushort local_128;
  undefined2 local_126;
  uint local_124;
  undefined4 local_120;
  int iStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 local_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined2 local_e4;
  undefined2 local_e2;
  undefined2 local_e0;
  undefined2 local_de;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 local_9c;
  uint uStack_98;
  uint local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  local_ac = (uint)local_ac._2_2_ << 0x10;
  local_188 = param_2;
  local_184 = param_3;
  if (1 < param_3) {
    if (param_3 == 2) goto LAB_01058cfc;
    bVar1 = (byte)param_2[1];
    uVar27 = (uint)bVar1;
    local_17c = param_3 - 3;
    local_180 = (ushort *)((int)param_2 + 3);
    uVar3 = *param_2;
    uVar25 = 4;
    uVar21 = (uVar27 & 0x7f) >> 3;
    if (uVar21 < 6) {
      uVar25 = *(uint *)(&DAT_0041f870 + uVar21 * 4);
    }
    if (local_17c == 0) goto LAB_01058cfc;
    bVar2 = *(byte *)local_180;
    uVar35 = (uint)bVar2;
    uVar13 = param_3 & 0x7ffffffe;
    uVar30 = uVar35 & 0xf;
    uVar20 = uVar30;
    if (10 < uVar30) {
      uVar20 = 0x14;
    }
    if ((uVar13 != 4 && uVar13 != 6) && (uVar13 != 8 && uVar13 != 10)) {
      uVar24 = param_2[2];
      local_17c = param_3 - 0xc;
      uVar6 = (uint)uVar24 << 0x18 | (uint)(uVar24 >> 8) << 0x10;
      local_180 = param_2 + 6;
      uVar13 = uVar6 >> 0x10;
      uVar12 = param_2[3];
      uVar29 = param_2[4];
      uVar4 = param_2[5];
      if (uVar24 == 0) {
        uVar14 = 4;
        local_170 = 0;
        local_174 = 4;
        local_178 = 0;
      }
      else {
        uVar14 = thunk_FUN_016d4a50(uVar13 * 0x4c);
        if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar13 * 0x4c);
        }
        local_170 = 0;
        uVar19 = uVar21;
        local_178 = uVar13;
        local_174 = uVar14;
        do {
          uVar32 = local_170;
          FUN_010393a0(&local_70,&local_188);
          uVar16 = local_6c;
          uVar31 = local_17c;
          puVar7 = local_180;
          uVar24 = (ushort)local_70;
          uVar26 = local_70 & 0xffff;
          if (uVar26 == 2) {
LAB_010591bc:
            *param_1 = 0x80000000;
            param_1[1] = local_6c;
            goto LAB_010594a0;
          }
          uVar8 = local_70._2_2_;
          local_b0 = local_68;
          local_ac = local_64;
          uStack_a8 = local_60;
          uStack_a4 = local_5c;
          uStack_a0 = local_58;
          local_9c = local_54;
          uStack_98 = local_50;
          local_94 = local_4c;
          local_90 = local_48;
          local_8c = uStack_44;
          local_88 = local_40;
          uStack_84 = uStack_3c;
          uStack_80 = uStack_38;
          uStack_7c = uStack_34;
          uStack_78 = uStack_30;
          local_b4 = local_6c;
          if (local_17c < 2) {
            local_70 = CONCAT22((short)local_1b4,(ushort)local_70);
            local_70 = local_70 & 0xffffff00;
            local_68 = 2;
            local_6c = FUN_0104f1e0(&local_70);
LAB_01059178:
            uVar21 = 0;
            if (uVar26 != 0) {
              uVar21 = uVar16;
            }
            if (uVar26 != 0 && uVar21 != 0) {
              thunk_FUN_016d3fb4(local_b0);
            }
            bVar36 = (local_94 & 0xffff) != 0;
            uVar21 = 0;
            if (bVar36) {
              uVar21 = local_90;
            }
            if (bVar36 && uVar21 != 0) {
              thunk_FUN_016d3fb4(local_8c);
            }
            goto LAB_010591bc;
          }
          uVar22 = local_17c - 2;
          local_1b4 = ((uint)*local_180 << 0x18 | (uint)(*local_180 >> 8) << 0x10) >> 0x10;
          local_180 = local_180 + 1;
          local_17c = uVar22;
          uVar11 = FUN_0104319c(local_1b4);
          if (uVar22 < 2) {
            local_68 = 2;
            local_70 = CONCAT22((short)uVar19,(short)local_70) & 0xffffff00;
            local_6c = FUN_0104f1e0(&local_70);
            goto LAB_01059178;
          }
          local_17c = uVar31 - 4;
          uVar5 = puVar7[1];
          local_e4 = 6;
          local_180 = puVar7 + 2;
          uVar19 = (uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8);
          if (uVar19 < 4) {
            if (uVar19 == 1) {
              local_e4 = 0;
            }
            else if (uVar19 == 3) {
              local_e4 = 1;
            }
          }
          else if (uVar19 == 4) {
            local_e4 = 2;
          }
          else if (uVar19 == 0xfe) {
            local_e4 = 3;
          }
          else if (uVar19 == 0xff) {
            local_e4 = 4;
          }
          local_160 = uStack_a8;
          uStack_15c = uStack_a4;
          uStack_158 = uStack_a0;
          local_154 = local_9c;
          uStack_150 = uStack_98;
          local_140 = local_88;
          uStack_13c = uStack_84;
          uStack_138 = uStack_80;
          uStack_134 = uStack_7c;
          uStack_130 = uStack_78;
          iStack_11c = local_ac;
          uStack_118 = uStack_a8;
          uStack_114 = uStack_a4;
          uStack_110 = uStack_a0;
          local_10c = local_9c;
          uStack_108 = uStack_98;
          uStack_104 = local_94;
          uStack_100 = local_90;
          uStack_fc = local_8c;
          local_f8 = local_88;
          uStack_f4 = uStack_84;
          uStack_f0 = uStack_80;
          uStack_ec = uStack_7c;
          uStack_e8 = uStack_78;
          local_124 = uVar16;
          local_126 = uVar8;
          local_e2 = (undefined2)uVar19;
          local_128 = uVar24;
          local_e0 = uVar11;
          local_de = extraout_r1;
          if (uVar32 == local_178) {
            FUN_0104e648(&local_178);
            uVar14 = local_174;
          }
          uVar31 = uVar32 + 1;
          FUN_016dd1aa(uVar32 * 0x4c + uVar14,&local_128,0x4c);
          local_170 = uVar31;
        } while (uVar31 != uVar13);
      }
      uVar32 = local_170;
      uVar24 = uVar12 << 8 | uVar12 >> 8;
      FUN_01056974(&local_70,&local_188,uVar24,0);
      uVar17 = local_48;
      uVar22 = local_4c;
      uVar26 = local_50;
      uVar16 = local_60;
      iVar18 = local_64;
      uVar31 = local_68;
      uVar19 = local_6c;
      uVar13 = local_70;
      if (local_70 == 0x80000000) {
        *param_1 = 0x80000000;
        param_1[1] = local_6c;
      }
      else {
        uVar29 = uVar29 << 8 | uVar29 >> 8;
        uVar12 = uVar4 << 8 | uVar4 >> 8;
        local_d0 = local_68;
        local_d4 = local_6c;
        local_d8 = local_70;
        if (local_64 != -0x80000000) {
          if (local_5c != 0) {
            piVar33 = (int *)(local_60 + 8);
            uVar34 = local_5c;
            do {
              bVar36 = (char)piVar33[-1] != '\0';
              iVar15 = 0;
              if (bVar36) {
                iVar15 = *piVar33;
              }
              if (bVar36 && iVar15 != 0) {
                thunk_FUN_016d3fb4(piVar33[1]);
              }
              piVar33 = piVar33 + 6;
              uVar34 = uVar34 - 1;
            } while (uVar34 != 0);
          }
          if (iVar18 != 0) {
            thunk_FUN_016d3fb4(uVar16);
          }
        }
        iVar18 = uVar17 + 1;
        uVar16 = uVar22;
        while (iVar18 = iVar18 + -1, iVar18 != 0) {
          FUN_0105439c(uVar16);
          uVar16 = uVar16 + 0xe8;
        }
        if (uVar26 != 0) {
          thunk_FUN_016d3fb4(uVar22);
        }
        FUN_01056974(&local_70,&local_188,uVar29,0);
        uVar10 = local_48;
        uVar9 = local_4c;
        uVar34 = local_50;
        uVar17 = local_60;
        iVar18 = local_64;
        uVar22 = local_68;
        uVar26 = local_6c;
        uVar16 = local_70;
        if (local_70 == 0x80000000) {
          *param_1 = 0x80000000;
          param_1[1] = local_6c;
        }
        else {
          local_c0 = local_68;
          local_c4 = local_6c;
          local_c8 = local_70;
          if (local_64 != -0x80000000) {
            if (local_5c != 0) {
              piVar33 = (int *)(local_60 + 8);
              uVar28 = local_5c;
              do {
                bVar36 = (char)piVar33[-1] != '\0';
                iVar15 = 0;
                if (bVar36) {
                  iVar15 = *piVar33;
                }
                if (bVar36 && iVar15 != 0) {
                  thunk_FUN_016d3fb4(piVar33[1]);
                }
                piVar33 = piVar33 + 6;
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
            }
            if (iVar18 != 0) {
              thunk_FUN_016d3fb4(uVar17);
            }
          }
          iVar18 = uVar10 + 1;
          uVar17 = uVar9;
          while( true ) {
            iVar18 = iVar18 + -1;
            if (iVar18 == 0) break;
            FUN_0105439c(uVar17);
            uVar17 = uVar17 + 0xe8;
          }
          if (uVar34 != 0) {
            thunk_FUN_016d3fb4(uVar9);
          }
          FUN_01056974(&local_70,&local_188,uVar12,1);
          if (local_70 != 0x80000000) {
            local_b8 = local_60;
            local_b4 = local_5c;
            local_ac = CONCAT22(local_ac._2_2_,(undefined2)local_54);
            local_b0 = local_58;
            local_160 = local_48;
            local_164 = local_4c;
            local_168 = local_50;
            if (local_64 == -0x80000000) {
              param_1[0xc] = local_50;
              param_1[0xd] = local_4c;
              param_1[0xe] = local_48;
              *(undefined2 *)(param_1 + 0x13) = (undefined2)local_54;
              param_1[0x11] = local_5c;
              param_1[0x12] = local_58;
              param_1[0x10] = local_60;
              *param_1 = local_178;
              param_1[1] = local_174;
              param_1[2] = local_170;
              param_1[3] = local_d8;
              param_1[4] = local_d4;
              param_1[5] = local_d0;
              param_1[6] = local_c8;
              param_1[7] = local_c4;
              param_1[8] = local_c0;
              *(char *)((int)param_1 + 0x66) = (char)((uVar35 & 0x1f) >> 4);
              *(char *)((int)param_1 + 0x65) = (char)((uVar35 & 0x3f) >> 5);
              *(byte *)(param_1 + 0x19) = bVar2 >> 7;
              *(byte *)((int)param_1 + 99) = bVar1 & 1;
              *(char *)((int)param_1 + 0x62) = (char)((uVar27 & 3) >> 1);
              *(char *)((int)param_1 + 0x61) = (char)((uVar27 & 7) >> 2);
              *(byte *)(param_1 + 0x18) = bVar1 >> 7;
              *(ushort *)((int)param_1 + 0x5e) = uVar12;
              *(ushort *)(param_1 + 0x17) = uVar29;
              *(ushort *)((int)param_1 + 0x5a) = uVar24;
              *(short *)(param_1 + 0x16) = (short)(uVar6 >> 0x10);
              param_1[0x15] =
                   uVar25 | uVar21 << 8 | ((uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8)) << 0x10;
              *(short *)((int)param_1 + 0x52) = (short)uVar30;
              *(short *)(param_1 + 0x14) = (short)uVar20;
              *(undefined1 *)((int)param_1 + 0x4f) = local_54._3_1_;
              *(undefined1 *)((int)param_1 + 0x4e) = local_54._2_1_;
              param_1[0xf] = 0x80000000;
              param_1[0xb] = local_68;
              param_1[10] = local_6c;
              param_1[9] = local_70;
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x010593ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_010593f0 + *(int *)(&UNK_010593f0 + uVar20 * 4)))
                      (uVar20,local_54._3_1_,0);
            return;
          }
          *param_1 = 0x80000000;
          param_1[1] = local_6c;
          iVar18 = uVar22 + 1;
          uVar21 = uVar26;
          while (iVar18 = iVar18 + -1, iVar18 != 0) {
            FUN_0105439c(uVar21);
            uVar21 = uVar21 + 0xe8;
          }
          if (uVar16 != 0) {
            thunk_FUN_016d3fb4(uVar26);
          }
        }
        iVar18 = uVar31 + 1;
        uVar21 = uVar19;
        while (iVar18 = iVar18 + -1, iVar18 != 0) {
          FUN_0105439c(uVar21);
          uVar21 = uVar21 + 0xe8;
        }
        if (uVar13 != 0) {
          thunk_FUN_016d3fb4(uVar19);
        }
      }
LAB_010594a0:
      if (uVar32 != 0) {
        psVar23 = (short *)(uVar14 + 0x24);
        do {
          iVar18 = 0;
          if (psVar23[-0x12] != 0) {
            iVar18 = *(int *)(psVar23 + -0x10);
          }
          if (psVar23[-0x12] != 0 && iVar18 != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(psVar23 + -0xe));
          }
          iVar18 = 0;
          if (*psVar23 != 0) {
            iVar18 = *(int *)(psVar23 + 2);
          }
          if (*psVar23 != 0 && iVar18 != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(psVar23 + 4));
          }
          psVar23 = psVar23 + 0x26;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
      if (local_178 == 0) {
        return;
      }
      thunk_FUN_016d3fb4(uVar14);
      return;
    }
  }
  local_120 = 2;
  local_124 = 0;
LAB_01058cfc:
  local_128 = local_128 & 0xff00;
  uVar21 = FUN_0104f1e0(&local_128);
  *param_1 = 0x80000000;
  param_1[1] = uVar21;
  return;
}

