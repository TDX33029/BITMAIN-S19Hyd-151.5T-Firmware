// FUN_0061e9f8 @ 0061e9f8 size=6156 calls_out=21 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0061f174) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0061e9f8(undefined4 *param_1,uint *param_2,char *param_3,uint *param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint *extraout_r1_02;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  uint *extraout_r2;
  uint *extraout_r2_00;
  uint *extraout_r2_01;
  uint *extraout_r2_02;
  uint *extraout_r2_03;
  uint *extraout_r2_04;
  uint *extraout_r2_05;
  uint *extraout_r2_06;
  uint *extraout_r2_07;
  uint *extraout_r2_08;
  uint *extraout_r3;
  uint *extraout_r3_00;
  uint *extraout_r3_01;
  uint *extraout_r3_02;
  uint *extraout_r3_03;
  uint *extraout_r3_04;
  uint *extraout_r3_05;
  uint *extraout_r3_06;
  uint *extraout_r3_07;
  uint *extraout_r3_08;
  uint *extraout_r3_09;
  uint *extraout_r3_10;
  uint *extraout_r3_11;
  uint *extraout_r3_12;
  uint *extraout_r3_13;
  uint *extraout_r3_14;
  int *unaff_r4;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  int *piVar27;
  uint *puVar28;
  uint uVar29;
  undefined4 uVar30;
  byte *pbVar31;
  uint *puVar32;
  uint uVar33;
  uint *puVar34;
  bool bVar35;
  uint uVar36;
  uint *puVar37;
  uint *puVar38;
  uint *local_144;
  uint *local_140;
  uint *local_13c;
  uint *local_138;
  uint *local_134;
  uint *local_130;
  uint *local_12c;
  uint *local_128;
  uint *local_11c;
  uint *local_118;
  uint *local_114;
  uint *local_108;
  uint local_104;
  uint *local_fc;
  uint *local_f4;
  uint *local_e4;
  uint *local_e0;
  uint *local_dc;
  int *local_d8;
  uint *local_cc;
  uint *local_c8;
  uint local_b8;
  uint *local_b4;
  uint local_b0;
  uint *local_ac;
  uint *local_a8;
  uint *local_a4;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  uint *local_94;
  int local_90;
  byte *local_88;
  byte *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  byte local_70;
  undefined1 local_6f [3];
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  byte *local_48;
  byte *local_44;
  uint *local_40;
  uint *puStack_3c;
  uint *puStack_38;
  int local_34;
  uint *local_30;
  uint *local_2c;
  char local_28;
  
  cVar1 = *param_3;
  if (cVar1 != 'O') {
    cVar2 = param_3[7];
    uVar30 = *(undefined4 *)(param_3 + 1);
    uVar12 = *(undefined4 *)(param_3 + 0xc);
    uVar5 = *(undefined2 *)(param_3 + 5);
    param_1[4] = *(undefined4 *)(param_3 + 8);
    *(char *)(param_1 + 2) = cVar1;
    *(undefined2 *)((int)param_1 + 0xd) = uVar5;
    *(char *)((int)param_1 + 0xf) = cVar2;
    param_1[5] = uVar12;
    *(undefined4 *)((int)param_1 + 9) = uVar30;
    *param_1 = 1;
    return;
  }
  uVar20 = param_2[2];
  iVar8 = *(int *)(param_3 + 8);
  puVar24 = *(uint **)(param_3 + 0xc);
  cVar1 = param_3[4];
  if (*(int *)(uVar20 + 0x130) == 2) {
    local_a0 = (uint *)puVar24[0x34];
    local_9c = (uint *)puVar24[0x35];
    puVar37 = (uint *)0x0;
    puVar28 = (uint *)&DAT_00000008;
    local_98 = puVar24 + 0x2e;
    local_94 = (uint *)(puVar24[0x40] + 8);
    local_b0 = 0;
    local_b4 = (uint *)&DAT_00000008;
    local_b8 = 0;
    local_a4 = (uint *)0x0;
    local_a8 = (uint *)&DAT_00000008;
    local_ac = (uint *)0x0;
    local_90 = 0;
    if (local_9c != (uint *)0x0) {
      uVar9 = puVar24[0x42];
      local_108 = (uint *)&DAT_00000008;
      local_104 = 0;
      pbVar14 = (byte *)(uint)(byte)puVar24[0x36];
      local_f4 = (uint *)0x0;
      local_cc = (uint *)0x0;
      puVar26 = puVar24;
      puVar38 = (uint *)0x0;
      do {
        puVar32 = (uint *)0x0;
        iVar15 = 4;
        if (*(byte *)((int)local_98 + 0x21) == 8) {
          iVar15 = 0xc;
        }
        pbVar16 = (byte *)(iVar15 + local_98[9] + (int)local_a0);
        local_e4 = (uint *)(pbVar16 + -(local_98[7] + local_98[6]));
        uVar29 = 0;
        puVar25 = (uint *)0x0;
        puVar10 = local_a0;
        do {
          pbVar31 = pbVar16;
          local_e0 = puVar37;
          if (local_9c == (uint *)0x0) {
            local_d8 = (int *)&DAT_00000013;
            local_cc = (uint *)0x0;
            local_9c = (uint *)0x0;
            puVar28 = puVar10;
            local_a0 = puVar10;
            goto LAB_0061f42c;
          }
          local_a0 = (uint *)((int)puVar10 + 1);
          uVar18 = *puVar10;
          pbVar16 = (byte *)(uint)(byte)uVar18;
          local_9c = (uint *)((int)local_9c + -1);
          if ((uVar29 == 0x3f) && (&DAT_00000001 < pbVar16)) {
            local_d8 = (int *)&DAT_00000006;
            puVar10 = puVar26;
            puVar28 = local_a0;
            local_cc = puVar38;
            goto LAB_0061f42c;
          }
          uVar33 = uVar29 & 0x3f;
          uVar21 = (uint)pbVar16 & 0x7f;
          uVar36 = uVar33 - 0x20;
          uVar29 = uVar29 + 7;
          uVar19 = uVar21 << uVar33;
          if (-1 < (int)uVar36) {
            uVar19 = 0;
          }
          puVar25 = (uint *)(uVar19 | (uint)puVar25);
          uVar19 = uVar21 >> (0x20 - uVar33 & 0xff);
          if (-1 < (int)uVar36) {
            uVar19 = uVar21 << (uVar36 & 0xff);
          }
          puVar32 = (uint *)(uVar19 | (uint)puVar32);
          puVar10 = local_a0;
        } while (0x7fffffff < (uint)(int)(char)(byte)uVar18);
        if (puVar25 == (uint *)0x0 && puVar32 == (uint *)0x0) {
          local_90 = local_90 + -1;
          local_118 = (uint *)0x0;
LAB_0061ece0:
          puVar37 = local_e0;
          goto LAB_0061ed64;
        }
        if ((puVar32 != (uint *)0x0) || ((byte *)local_94[2] <= (byte *)((int)puVar25 + -1))) {
          puVar22 = (undefined4 *)local_94[3];
          if (puVar22 != (undefined4 *)0x0) {
            uVar29 = local_94[4];
            while( true ) {
              uVar19 = 0xffffffff;
              uVar18 = (uint)*(ushort *)((int)puVar22 + 0x4d6);
              iVar15 = uVar18 << 3;
              puVar13 = puVar22;
              do {
                if (iVar15 == 0) goto LAB_0061ec6c;
                puVar28 = (uint *)*puVar13;
                puVar26 = (uint *)puVar13[1];
                iVar15 = iVar15 + -8;
                uVar19 = uVar19 + 1;
                puVar13 = puVar13 + 2;
                uVar21 = (uint)(puVar26 <= puVar32 &&
                               (uint)(puVar25 <= puVar28) <= (uint)((int)puVar26 - (int)puVar32)) -
                         (uint)(puVar32 <= puVar26 &&
                               (uint)(puVar28 <= puVar25) <= (uint)((int)puVar32 - (int)puVar26));
              } while (uVar21 == 1);
              uVar18 = uVar19;
              if ((uVar21 & 0xff) == 0) break;
LAB_0061ec6c:
              if (uVar29 == 0) goto LAB_0061f4f8;
              uVar29 = uVar29 - 1;
              puVar22 = (undefined4 *)puVar22[uVar18 + 0x136];
            }
            local_118 = puVar22 + uVar19 * 0x1a + 0x16;
            goto LAB_0061ec90;
          }
LAB_0061f4f8:
          local_d8 = (int *)&DAT_00000012;
          puVar10 = puVar25;
          puVar28 = local_118;
          local_cc = puVar32;
LAB_0061f42c:
          pbVar14 = pbVar31;
          local_134 = puVar10;
LAB_0061f430:
          if (local_ac != (uint *)0x0) {
            thunk_FUN_016d3fb4(local_a8);
          }
          puVar37 = local_b4;
          if (local_b0 != 0) {
            puVar26 = local_b4 + 2;
            uVar9 = local_b0;
            do {
              if (puVar26[-2] == 0) {
                if (*puVar26 != 0) {
                  thunk_FUN_016d3fb4(puVar26[-1]);
                }
                if (puVar26[2] != 0) {
                  thunk_FUN_016d3fb4(puVar26[1]);
                }
              }
              puVar26 = puVar26 + 10;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          if (local_b8 != 0) {
            thunk_FUN_016d3fb4(puVar37);
          }
          uVar12 = 1;
          bVar6 = false;
          goto LAB_0061f5f8;
        }
        local_118 = (uint *)(((int)puVar25 + -1) * 0x68 + local_94[1]);
LAB_0061ec90:
        if (*(byte *)((int)local_118 + 0x62) == 1) {
          local_90 = local_90 + 1;
        }
        if ((ushort)local_118[0x18] == 0x2e) {
          if (*local_118 == 1) {
            puVar26 = (uint *)local_118[2];
            uVar29 = local_118[3];
          }
          else {
            uVar29 = local_118[1];
            if (5 < uVar29) goto LAB_006201b8;
            puVar26 = local_118 + 2;
          }
          if (uVar29 != 0) {
            iVar15 = uVar29 << 4;
            bVar35 = false;
            local_fc = (uint *)0x0;
            bVar7 = false;
            bVar6 = false;
            do {
              local_88 = (byte *)*puVar26;
              local_84 = (byte *)puVar26[1];
              local_80 = (uint *)puVar26[2];
              local_7c = (uint *)puVar26[3];
              FUN_006067fc(&local_60,&local_a0,local_98[8],&local_88);
              if (local_60 == (uint *)&DAT_0000002e && local_5c == (uint *)0x0) {
                puVar37 = local_58;
                local_cc = local_4c;
                puVar10 = local_50;
                puVar28 = local_54;
                goto LAB_0061f4dc;
              }
              uVar29 = (uint)local_50 & 0xffff;
              if (uVar29 == 0x55) {
                FUN_0060872c(&local_88,&local_60);
                FUN_00612130(&local_70,iVar8,puVar24);
                local_d8 = (int *)(uint)local_70;
                if (local_d8 == (int *)&DAT_0000004f) {
                  local_fc = local_6c;
                  local_11c = local_68;
                  goto LAB_0061ed8c;
                }
                local_cc = local_64;
                local_fc = (uint *)(uint)(ushort)local_6f._1_2_;
                pbVar31 = (byte *)(uint)local_6f[0];
                puVar10 = local_68;
                puVar28 = local_6c;
                goto LAB_0061f42c;
              }
              puVar28 = puVar37;
              if (uVar29 == 0x12) {
                FUN_0060872c(&local_88,&local_60);
                if (((uint)local_88 & 0x3f) == 0) {
                  local_130 = local_80;
                  bVar7 = true;
                  local_114 = local_7c;
                  goto LAB_0061ed8c;
                }
                if (local_88 == &DAT_00000007) {
                  bVar35 = true;
                  local_13c = local_80;
                  local_140 = local_7c;
                  goto LAB_0061ed8c;
                }
                if (local_88 != &DAT_0000000c) goto LAB_0061ed8c;
                puVar38 = *(uint **)(iVar8 + 8);
                if (*(uint *)(iVar8 + 0xc) < uVar9) {
LAB_0062000c:
                  local_d8 = (int *)&DAT_00000013;
                  local_f4 = (uint *)0x0;
                  local_138 = puVar38;
switchD_0061ef38_caseD_3:
                  local_cc = local_f4;
                  local_134 = local_138;
                  goto LAB_0061f430;
                }
                uVar29 = (uint)(ZEXT48(pbVar14) * ZEXT48(local_80));
                if ((int)(ZEXT48(pbVar14) * ZEXT48(local_80) >> 0x20) != 0) {
                  local_d8 = (int *)&DAT_00000038;
                  goto switchD_0061ef38_caseD_3;
                }
                uVar18 = *(uint *)(iVar8 + 0xc) - uVar9;
                puVar38 = (uint *)((int)puVar38 + uVar9);
                if (uVar18 < uVar29) goto LAB_0062000c;
                local_d8 = (int *)&DAT_00000019;
                if (&DAT_00000007 < pbVar14 + -1) goto switchD_0061ef38_caseD_3;
                puVar28 = (uint *)((int)puVar38 + uVar29);
                uVar19 = uVar18 - uVar29;
                switch(pbVar14) {
                case (byte *)0x1:
                  if (uVar18 == uVar29) {
LAB_00620154:
                    local_d8 = (int *)&DAT_00000013;
                    local_f4 = (uint *)0x0;
                    local_138 = puVar28;
                    goto switchD_0061ef38_caseD_3;
                  }
                  local_138 = (uint *)(uint)(byte)*puVar28;
                  break;
                case (byte *)0x2:
                  if (uVar19 < 2) goto LAB_00620154;
                  local_138 = (uint *)(uint)(ushort)*puVar28;
                  break;
                default:
                  goto switchD_0061ef38_caseD_3;
                case (byte *)0x4:
                  if (uVar19 < 4) goto LAB_00620154;
                  local_138 = (uint *)*puVar28;
                  break;
                case (byte *)0x8:
                  if (uVar19 < 8) goto LAB_00620154;
                  local_138 = (uint *)*puVar28;
                  local_114 = (uint *)puVar28[1];
                  goto LAB_0061f074;
                }
                local_114 = (uint *)0x0;
LAB_0061f074:
                bVar7 = true;
                local_130 = local_138;
                local_f4 = local_114;
              }
              else {
                if (uVar29 != 0x11) goto LAB_0061ed8c;
                FUN_0060872c(&local_88,&local_60);
                if (((uint)local_88 & 0x3f) == 0) {
                  local_12c = local_80;
                  local_128 = local_7c;
                  bVar6 = true;
                  goto LAB_0061ed8c;
                }
                if (local_88 != &DAT_0000000c) goto LAB_0061ed8c;
                puVar38 = *(uint **)(iVar8 + 8);
                if (*(uint *)(iVar8 + 0xc) < uVar9) {
LAB_0061ffe0:
                  local_d8 = (int *)&DAT_00000013;
                  local_cc = (uint *)0x0;
                  local_134 = puVar38;
switchD_0061ee7c_caseD_3:
                  goto LAB_0061f430;
                }
                uVar29 = (uint)(ZEXT48(pbVar14) * ZEXT48(local_80));
                if ((int)(ZEXT48(pbVar14) * ZEXT48(local_80) >> 0x20) != 0) {
                  local_d8 = (int *)&DAT_00000038;
                  goto switchD_0061ee7c_caseD_3;
                }
                uVar18 = *(uint *)(iVar8 + 0xc) - uVar9;
                puVar38 = (uint *)((int)puVar38 + uVar9);
                if (uVar18 < uVar29) goto LAB_0061ffe0;
                local_d8 = (int *)&DAT_00000019;
                if (&DAT_00000007 < pbVar14 + -1) goto switchD_0061ee7c_caseD_3;
                puVar28 = (uint *)((int)puVar38 + uVar29);
                uVar19 = uVar18 - uVar29;
                switch(pbVar14) {
                case (byte *)0x1:
                  if (uVar18 == uVar29) {
LAB_00620104:
                    local_d8 = (int *)&DAT_00000013;
                    local_cc = (uint *)0x0;
                    local_134 = puVar28;
                    goto switchD_0061ee7c_caseD_3;
                  }
                  local_134 = (uint *)(uint)(byte)*puVar28;
                  break;
                case (byte *)0x2:
                  if (uVar19 < 2) goto LAB_00620104;
                  local_134 = (uint *)(uint)(ushort)*puVar28;
                  break;
                default:
                  goto switchD_0061ee7c_caseD_3;
                case (byte *)0x4:
                  if (uVar19 < 4) goto LAB_00620104;
                  local_134 = (uint *)*puVar28;
                  break;
                case (byte *)0x8:
                  if (uVar19 < 8) goto LAB_00620104;
                  local_134 = (uint *)*puVar28;
                  local_128 = (uint *)puVar28[1];
                  goto LAB_0061f020;
                }
                local_128 = (uint *)0x0;
LAB_0061f020:
                bVar6 = true;
                local_12c = local_134;
                local_cc = local_128;
              }
LAB_0061ed8c:
              puVar26 = puVar26 + 4;
              iVar15 = iVar15 + -0x10;
            } while (iVar15 != 0);
            if (((uint)local_fc & 1) != 0) {
              iVar15 = 4;
              uVar29 = puVar24[0x36] >> 0x10;
              if (4 < uVar29) {
                iVar15 = 0xc;
              }
              puVar28 = *(uint **)(iVar8 + 0x58 + iVar15);
              puVar22 = (undefined4 *)(iVar8 + 0x58);
              if (4 < uVar29) {
                puVar22 = (undefined4 *)(iVar8 + 0x60);
              }
              if (puVar28 < local_11c) {
                local_74 = (uint *)0x0;
                local_fc = (uint *)0x0;
                pbVar31 = (byte *)0x0;
                local_d8 = (int *)&DAT_00000013;
                puVar10 = (uint *)*puVar22;
              }
              else {
                puVar37 = (uint *)puVar24[0x3f];
                local_60 = (uint *)puVar24[0x3e];
                local_58 = *(uint **)(iVar8 + 8);
                local_54 = *(uint **)(iVar8 + 0xc);
                local_50 = (uint *)puVar24[0x42];
                local_fc = (uint *)0x0;
                local_48 = (byte *)((int)*puVar22 + (int)local_11c);
                local_44 = (byte *)((int)puVar28 - (int)local_11c);
                local_40 = (uint *)CONCAT31(local_40._1_3_,4 < uVar29);
                local_5c = puVar37;
                local_4c = (uint *)puVar24[0x36];
                while( true ) {
                  FUN_00616550(&local_88,&local_60);
                  puVar10 = local_74;
                  puVar38 = local_78;
                  puVar26 = local_7c;
                  puVar28 = local_80;
                  if (!(local_88 != &SUB_00000002 || local_84 != (byte *)0x0)) break;
                  puVar34 = local_fc;
                  if (((uint)local_88 & 1) == 0) goto joined_r0x0061f3a8;
                  if (local_7c <= local_74 &&
                      (uint)(local_78 <= local_80) <= (uint)((int)local_7c - (int)local_74)) {
                    if (local_e0 == local_ac) {
                      FUN_0061cd58(&local_ac);
                      local_108 = local_a8;
                    }
                    local_a4 = (uint *)((int)local_e0 + 1);
                    puVar34 = local_108 + (int)local_e0 * 6;
                    *puVar34 = (uint)puVar28;
                    puVar34[4] = local_104;
                    puVar34[1] = (uint)puVar26;
                    puVar34[2] = (uint)puVar38;
                    puVar34[3] = (uint)puVar10;
                    local_fc = (uint *)&DAT_00000001;
                    local_e0 = local_a4;
                  }
                }
                local_fc = (uint *)((uint)local_80 >> 0x10);
                pbVar31 = (byte *)((uint)local_80 >> 8);
                local_d8 = (int *)((uint)local_80 & 0xff);
                puVar10 = local_78;
                local_144 = local_7c;
                if (local_d8 == (int *)&DAT_0000004f) {
                  puVar34 = (uint *)((uint)pbVar31 & 1);
joined_r0x0061f3a8:
                  local_144 = puVar37;
                  if (puVar34 == (uint *)0x0) goto LAB_0061ece0;
LAB_0061f220:
                  local_104 = local_b0;
                  local_60 = (uint *)&SUB_00000002;
                  local_40 = local_e4;
                  if (local_b0 == local_b8) {
                    FUN_0061ce1c(&local_b8);
                  }
                  puVar28 = local_b4 + local_104 * 10;
                  *puVar28 = (uint)local_60;
                  puVar28[1] = (uint)local_5c;
                  puVar28[2] = (uint)local_58;
                  puVar28[3] = (uint)local_54;
                  puVar28[4] = (uint)local_50;
                  puVar28[5] = (uint)local_4c;
                  puVar28[6] = (uint)local_48;
                  puVar28[7] = (uint)local_44;
                  puVar28[8] = (uint)local_40;
                  puVar28[9] = (uint)puStack_3c;
                  local_104 = local_104 + 1;
                  puVar37 = local_e0;
                  local_b0 = local_104;
                  goto LAB_0061ed64;
                }
              }
              puVar28 = local_144;
              local_cc = local_74;
              goto LAB_0061f42c;
            }
            if (bVar6) {
              if (bVar7) {
                if (local_128 <= local_114 &&
                    (uint)(local_130 <= local_12c) <= (uint)((int)local_128 - (int)local_114)) {
                  puVar28 = local_114;
                  puVar26 = local_130;
                  if (puVar37 == local_ac) {
                    FUN_0061cd58(&local_ac);
                    local_108 = local_a8;
                  }
LAB_0061f1f8:
                  local_e0 = (uint *)((int)puVar37 + 1);
                  puVar37 = local_108 + (int)puVar37 * 6;
                  *puVar37 = (uint)local_12c;
                  puVar37[3] = (uint)puVar28;
                  puVar37[1] = (uint)local_128;
                  puVar37[2] = (uint)puVar26;
                  puVar37[4] = local_104;
                  local_a4 = local_e0;
                  goto LAB_0061f220;
                }
              }
              else if (bVar35) {
                puVar26 = (uint *)((int)local_13c + (int)local_12c);
                puVar28 = (uint *)((byte *)((int)local_140 + (int)local_128) +
                                  CARRY4((uint)local_13c,(uint)local_12c));
                if (local_128 <= puVar28 &&
                    (uint)(puVar26 <= local_12c) <= (uint)((int)local_128 - (int)puVar28)) {
                  if (puVar37 == local_ac) {
                    FUN_0061cd58(&local_ac);
                    local_108 = local_a8;
                  }
                  goto LAB_0061f1f8;
                }
              }
            }
          }
        }
        else {
          if (*local_118 == 1) {
            puVar28 = (uint *)local_118[2];
            uVar29 = local_118[3];
          }
          else {
            uVar29 = local_118[1];
            if (5 < uVar29) {
LAB_006201b8:
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar29,5,&DAT_01882304);
            }
            puVar28 = local_118 + 2;
          }
          FUN_00607efc(&local_60,&local_a0,local_98[8],puVar28,uVar29);
          if ((char)local_60 != 'O') {
            puVar37 = local_60;
            local_cc = local_54;
            puVar10 = local_58;
            puVar28 = local_5c;
LAB_0061f4dc:
            local_fc = (uint *)((uint)puVar37 >> 0x10);
            pbVar31 = (byte *)((uint)puVar37 >> 8);
            local_d8 = (int *)((uint)puVar37 & 0xff);
            goto LAB_0061f42c;
          }
        }
LAB_0061ed64:
        puVar28 = local_a8;
        puVar26 = puVar25;
        puVar38 = puVar32;
      } while (local_9c != (uint *)0x0);
      if (&DAT_00000001 < puVar37) {
        if (&DAT_00000014 < puVar37) {
          FUN_006284d8(local_a8);
          goto LAB_0061f524;
        }
        FUN_006136a0(local_a8);
      }
    }
LAB_0061f524:
    local_134 = puVar37;
    uVar9 = local_b0;
    local_e0 = local_b4;
    if (local_b0 < local_b8) {
      if (local_b0 != 0) {
        iVar15 = local_b0 * 0x28;
        local_e0 = (uint *)thunk_FUN_016d4ea4(local_b4,iVar15);
        if (local_e0 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,iVar15);
        }
        goto LAB_0061f558;
      }
      thunk_FUN_016d3fb4();
      local_e0 = (uint *)&DAT_00000008;
      if (local_134 < local_ac) goto LAB_0061f568;
    }
    else {
LAB_0061f558:
      if (local_134 < local_ac) {
LAB_0061f568:
        if (local_134 == (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar28);
          puVar28 = (uint *)&DAT_00000008;
        }
        else {
          puVar28 = (uint *)thunk_FUN_016d4ea4(puVar28,(int)local_134 * 0x18);
          if (puVar28 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(8,(int)local_134 * 0x18);
          }
        }
      }
    }
    uVar12 = 0;
    pbVar14 = (byte *)(uVar9 >> 8);
    local_fc = (uint *)(uVar9 >> 0x10);
    local_d8 = (int *)(uVar9 & 0xff);
    bVar6 = true;
    local_cc = (uint *)0x0;
LAB_0061f5f8:
    param_4 = (uint *)(((int)pbVar14 << 8 & 0xffffU) + (int)local_fc * 0x10000 | (uint)local_d8);
    unaff_r4 = local_d8;
    if (*(int *)(uVar20 + 0x130) == 2) {
      *(undefined4 *)(uVar20 + 0x130) = uVar12;
      *(uint **)(uVar20 + 0x134) = local_e0;
      *(uint **)(uVar20 + 0x138) = param_4;
      *(uint **)(uVar20 + 0x13c) = puVar28;
      *(uint **)(uVar20 + 0x140) = local_134;
      *(uint **)(uVar20 + 0x144) = local_cc;
    }
    else if (bVar6) {
      if (param_4 != (uint *)0x0) {
        puVar17 = (undefined1 *)
                  ((int)local_fc * 0x10000 + ((int)pbVar14 << 8 & 0xffffU) + (int)local_d8);
        puVar37 = local_e0 + 2;
        do {
          if (puVar37[-2] == 0) {
            if (*puVar37 != 0) {
              thunk_FUN_016d3fb4(puVar37[-1]);
            }
            if (puVar37[2] != 0) {
              thunk_FUN_016d3fb4(puVar37[1]);
            }
          }
          puVar37 = puVar37 + 10;
          puVar17 = puVar17 + -1;
        } while (puVar17 != (undefined1 *)0x0);
        thunk_FUN_016d3fb4(local_e0);
        local_d8 = (int *)0x0;
        param_4 = extraout_r3;
      }
      unaff_r4 = local_d8;
      if (local_134 != (uint *)0x0) {
        thunk_FUN_016d3fb4(puVar28);
        param_4 = extraout_r3_00;
      }
    }
  }
  if (*(int *)(uVar20 + 0x130) == 0) {
    puVar28 = (uint *)(uVar20 + 0x134);
  }
  else {
    puVar28 = *(uint **)(uVar20 + 0x13c);
    if (*(char *)(uVar20 + 0x138) != 'O') {
      uVar3 = *(undefined1 *)(uVar20 + 0x13b);
      uVar5 = *(undefined2 *)(uVar20 + 0x139);
      uVar12 = *(undefined4 *)(uVar20 + 0x140);
      uVar30 = *(undefined4 *)(uVar20 + 0x144);
      *(char *)(param_1 + 2) = *(char *)(uVar20 + 0x138);
      param_1[3] = puVar28;
      param_1[4] = uVar12;
      param_1[5] = uVar30;
      *(undefined2 *)((int)param_1 + 9) = uVar5;
      *(undefined1 *)((int)param_1 + 0xb) = uVar3;
      *param_1 = 1;
      return;
    }
  }
  uVar9 = puVar28[3];
  puVar26 = (uint *)0x0;
  uVar29 = *param_2;
  puVar38 = (uint *)param_2[1];
  puVar37 = param_2;
  if (uVar9 != 0) {
    unaff_r4 = (int *)puVar28[2];
    puVar32 = puVar26;
    if (uVar9 != 1) {
      puVar32 = (uint *)0x0;
      do {
        puVar26 = (uint *)((int)puVar32 + (uVar9 >> 1));
        uVar9 = uVar9 - (uVar9 >> 1);
        puVar10 = (uint *)(unaff_r4 + (int)puVar26 * 6)[1];
        if (puVar38 <= puVar10 &&
            (uint)((uint)unaff_r4[(int)puVar26 * 6] <= uVar29) <=
            (uint)((int)puVar38 - (int)puVar10)) {
          puVar26 = puVar32;
        }
        puVar32 = puVar26;
      } while (1 < uVar9);
    }
    param_4 = (uint *)((int)puVar32 * 3);
    puVar26 = (uint *)0x0;
    puVar10 = (uint *)(unaff_r4 + (int)puVar32 * 6);
    if (((uint *)puVar10[1] < puVar38 ||
         (uint)((int)puVar38 - (int)puVar10[1]) < (uint)(*puVar10 <= uVar29)) &&
       (puVar37 = (uint *)puVar10[3],
       puVar38 <= puVar37 && (uint)(puVar10[2] <= uVar29) <= (uint)((int)puVar38 - (int)puVar37))) {
      uVar9 = unaff_r4[(int)puVar32 * 6 + 4];
      if (puVar28[1] <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar9,puVar28[1],&DAT_01857948);
      }
      unaff_r4 = (int *)(*puVar28 + uVar9 * 0x28);
      if (*unaff_r4 == 2) {
        param_4 = (uint *)&DAT_00000004;
        puVar10 = (uint *)unaff_r4[8];
        puVar37 = (uint *)&DAT_0000003b;
        puVar32 = (uint *)0x0;
        uVar9 = puVar24[0x35];
        if (*(byte *)((int)puVar24 + 0xd9) == 8) {
          param_4 = (uint *)&DAT_0000000c;
        }
        local_dc = (uint *)((int)param_4 + puVar24[0x37]);
        if (puVar10 < (uint *)((int)local_dc - uVar9)) {
          puVar28 = (uint *)0x0;
LAB_0061fd18:
          if (*unaff_r4 != 2) goto LAB_0061fd50;
          puVar24 = (uint *)((uint)puVar37 | (int)puVar28 << 8);
          iVar15 = 1;
          puVar10 = puVar26;
        }
        else {
          uVar18 = (int)puVar10 - (int)((int)local_dc - uVar9);
          puVar28 = (uint *)0x0;
          if (uVar9 <= uVar18) goto LAB_0061fd18;
          local_e0 = (uint *)param_2[3];
          local_80 = puVar24 + 0x2e;
          local_84 = (byte *)(uVar9 - uVar18);
          puVar37 = (uint *)puVar24[0x40];
          param_4 = (uint *)(puVar24[0x34] + ((uVar9 - (int)param_4) - puVar24[0x37]));
          local_7c = puVar37 + 2;
          puVar28 = (uint *)0x0;
          uVar9 = 0;
          puVar32 = (uint *)0x0;
          puVar26 = (uint *)0x0;
          local_88 = (byte *)(puVar24[0x34] + uVar18);
          local_78 = (uint *)0x0;
          do {
            if (puVar10 == local_dc) {
              puVar32 = (uint *)((int)param_4 + (int)puVar10);
              puVar37 = (uint *)&DAT_00000013;
              puVar26 = (uint *)0x0;
              local_e0 = puVar32;
              goto LAB_0061fd18;
            }
            local_84 = (byte *)(~(uint)puVar10 + (int)local_dc);
            bVar4 = *(byte *)((int)param_4 + (int)puVar10);
            puVar28 = (uint *)(uint)bVar4;
            local_88 = (byte *)((int)param_4 + (int)puVar10) + 1;
            if ((uVar9 == 0x3f) && (&DAT_00000001 < puVar28)) {
              puVar37 = (uint *)&DAT_00000006;
              puVar26 = (uint *)0x0;
              goto LAB_0061fd18;
            }
            uVar19 = uVar9 & 0x3f;
            uVar21 = (uint)puVar28 & 0x7f;
            uVar33 = uVar19 - 0x20;
            param_4 = (uint *)((int)param_4 + 1);
            uVar18 = uVar21 << uVar19;
            if (-1 < (int)uVar33) {
              uVar18 = 0;
            }
            puVar32 = (uint *)(uVar18 | (uint)puVar32);
            uVar18 = uVar21 >> (0x20 - uVar19 & 0xff);
            local_dc = (uint *)((int)local_dc + -1);
            if (-1 < (int)uVar33) {
              uVar18 = uVar21 << (uVar33 & 0xff);
            }
            puVar26 = (uint *)(uVar18 | (uint)puVar26);
            uVar9 = uVar9 + 7;
          } while (0x7fffffff < (uint)(int)(char)bVar4);
          if (puVar32 == (uint *)0x0 && puVar26 == (uint *)0x0) {
            local_78 = (uint *)0xffffffff;
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_01857988);
          }
          if (puVar26 != (uint *)0x0) {
LAB_0061f948:
            puVar22 = (undefined4 *)puVar37[5];
            puVar28 = puVar37;
            if (puVar22 != (undefined4 *)0x0) {
              local_dc = (uint *)puVar37[6];
              do {
                puVar37 = (uint *)0xffffffff;
                param_4 = (uint *)(uint)*(ushort *)((int)puVar22 + 0x4d6);
                iVar15 = (int)param_4 << 3;
                puVar13 = puVar22;
                do {
                  if (iVar15 == 0) goto LAB_0061f9cc;
                  puVar25 = (uint *)*puVar13;
                  puVar34 = (uint *)puVar13[1];
                  iVar15 = iVar15 + -8;
                  puVar37 = (uint *)((int)puVar37 + 1);
                  puVar13 = puVar13 + 2;
                  puVar28 = (uint *)(uint)(puVar34 <= puVar26 &&
                                          (uint)(puVar32 <= puVar25) <=
                                          (uint)((int)puVar34 - (int)puVar26));
                  uVar9 = (int)puVar28 -
                          (uint)(puVar26 <= puVar34 &&
                                (uint)(puVar25 <= puVar32) <= (uint)((int)puVar26 - (int)puVar34));
                } while (uVar9 == 1);
                param_4 = puVar37;
                if ((uVar9 & 0xff) == 0) {
                  piVar11 = puVar22 + (int)puVar37 * 0x1a + 0x16;
                  goto LAB_0061f9fc;
                }
LAB_0061f9cc:
                if (local_dc == (uint *)0x0) break;
                local_dc = (uint *)((int)local_dc + -1);
                puVar22 = (undefined4 *)puVar22[(int)((int)param_4 + 0x136)];
              } while( true );
            }
            puVar37 = (uint *)&DAT_00000012;
            goto LAB_0061fd18;
          }
          local_dc = (uint *)puVar37[4];
          if (local_dc <= (uint *)((int)puVar32 + -1)) goto LAB_0061f948;
          piVar11 = (int *)(((int)puVar32 + -1) * 0x68 + puVar37[3]);
          local_dc = puVar37;
LAB_0061f9fc:
          local_78 = (uint *)(uint)(*(char *)((int)piVar11 + 0x62) == '\x01');
          if (*piVar11 == 1) {
            piVar27 = (int *)piVar11[2];
            uVar9 = piVar11[3];
          }
          else {
            uVar9 = piVar11[1];
            if (5 < uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,uVar9,5,&DAT_01882304);
            }
            piVar27 = piVar11 + 2;
          }
          if (uVar9 == 0) {
            puVar37 = (uint *)0x0;
          }
          else {
            iVar15 = uVar9 << 4;
            puVar37 = (uint *)0x0;
            do {
              local_a0 = (uint *)*piVar27;
              local_9c = (uint *)piVar27[1];
              local_98 = (uint *)piVar27[2];
              local_94 = (uint *)piVar27[3];
              FUN_006067fc(&local_60,&local_88,local_80[8],&local_a0);
              if (local_60 == (uint *)&DAT_0000002e && local_5c == (uint *)0x0) {
                local_e0 = local_54;
                puVar28 = (uint *)((uint)local_58 >> 8);
                puVar37 = (uint *)((uint)local_58 & 0xff);
                local_dc = local_54;
                param_4 = extraout_r3_01;
                puVar26 = local_4c;
                puVar32 = local_50;
                goto LAB_0061fd18;
              }
              uVar9 = (uint)local_50 & 0xffff;
              if (uVar9 < 0x47) {
                if (uVar9 == 3) {
                  if (puVar37 == (uint *)0x0) {
                    FUN_0060872c(&local_a0,&local_60);
                    FUN_00611d9c(&local_70,iVar8,*(byte *)((int)puVar24 + 0xd9),puVar24[0x41],
                                 &local_a0);
                    if (local_70 == 0x4f) {
                      local_e4 = local_68;
                      puVar37 = local_6c;
                    }
                    else {
                      puVar37 = (uint *)0x0;
                    }
                    local_dc = local_e4;
                  }
                }
                else if (uVar9 == 0x31) goto LAB_0061fb20;
              }
              else if (uVar9 == 0x47) {
LAB_0061fb20:
                if (puVar37 == (uint *)0x0) {
                  FUN_0060872c(&local_a0,&local_60);
                  FUN_00629e48(&local_70,extraout_r1,local_a0,local_9c,local_98,cVar1,iVar8,puVar24,
                               local_e0,0x10);
                  puVar37 = (uint *)(uint)local_70;
                  if (puVar37 != (uint *)&DAT_0000004f) {
                    local_e0 = local_6c;
                    puVar28 = (uint *)(uint)(uint3)local_6f;
                    local_dc = (uint *)(uint)(ushort)local_6f._0_2_;
                    param_4 = extraout_r3_02;
                    puVar26 = local_64;
                    puVar32 = local_68;
                    goto LAB_0061fd18;
                  }
                  local_dc = local_68;
                  puVar37 = local_6c;
                }
              }
              else if (uVar9 == 0x2007 || uVar9 == 0x6e) {
                FUN_0060872c(&local_a0,&local_60);
                FUN_00611d9c(&local_70,iVar8,*(byte *)((int)puVar24 + 0xd9),puVar24[0x41],&local_a0)
                ;
                local_dc = local_dc;
                if (local_70 == 0x4f) {
                  local_dc = local_68;
                  puVar37 = local_6c;
                }
              }
              piVar27 = piVar27 + 4;
              iVar15 = iVar15 + -0x10;
            } while (iVar15 != 0);
          }
          local_48 = local_88;
          local_44 = local_84;
          local_40 = local_80;
          puStack_3c = local_7c;
          puStack_38 = local_78;
          local_50 = (uint *)&DAT_00000008;
          local_5c = (uint *)&DAT_00000008;
          local_4c = (uint *)0x0;
          local_54 = (uint *)0x0;
          local_58 = (uint *)0x0;
          local_60 = (uint *)0x0;
          local_34 = iVar8;
          local_30 = puVar24;
          local_2c = local_e0;
          local_28 = cVar1;
          FUN_00628934(&local_a0,&local_60,0,0);
          puVar26 = local_94;
          puVar32 = local_98;
          puVar28 = local_a0;
          param_4 = extraout_r3_03;
          if ((char)local_a0 != 'O') {
            local_e0 = local_9c;
            local_dc = extraout_r1_00;
            if (local_60 != (uint *)0x0) {
              thunk_FUN_016d3fb4(local_5c);
              local_dc = extraout_r1_01;
              param_4 = extraout_r3_05;
            }
            puVar37 = (uint *)((uint)puVar28 & 0xff);
            puVar28 = (uint *)((uint)puVar28 >> 8);
            if (local_54 != (uint *)0x0) {
              thunk_FUN_016d3fb4(local_50);
              local_dc = extraout_r1_02;
              param_4 = extraout_r3_06;
            }
            goto LAB_0061fd18;
          }
          puVar28 = extraout_r2;
          if (&DAT_00000001 < local_4c) {
            if (&DAT_00000014 < local_4c) {
              FUN_00628600(local_50);
              puVar28 = extraout_r2_08;
              param_4 = extraout_r3_14;
            }
            else {
              FUN_006139f4();
              puVar28 = extraout_r2_07;
              param_4 = extraout_r3_13;
            }
          }
          puVar24 = local_58;
          if (local_58 < local_60) {
            if (local_58 == (uint *)0x0) {
              thunk_FUN_016d3fb4(local_5c);
              local_c8 = (uint *)&DAT_00000008;
              puVar28 = extraout_r2_02;
              param_4 = extraout_r3_08;
            }
            else {
              iVar15 = (int)local_58 * 0x28;
              local_c8 = (uint *)thunk_FUN_016d4ea4(local_5c,iVar15);
              puVar28 = extraout_r2_00;
              param_4 = extraout_r3_04;
              if (local_c8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(8,iVar15);
              }
            }
          }
          else {
            local_c8 = local_5c;
          }
          puVar32 = local_4c;
          if (local_4c < local_54) {
            if (local_4c == (uint *)0x0) {
              thunk_FUN_016d3fb4(local_50);
              local_e0 = (uint *)&DAT_00000008;
              puVar28 = extraout_r2_04;
              param_4 = extraout_r3_10;
            }
            else {
              iVar15 = (int)local_4c * 0x18;
              local_e0 = (uint *)thunk_FUN_016d4ea4(local_50,iVar15);
              puVar28 = extraout_r2_03;
              param_4 = extraout_r3_09;
              if (local_e0 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(8,iVar15);
              }
            }
          }
          else {
            local_e0 = local_50;
          }
          if (*unaff_r4 != 2) {
            if (puVar24 != (uint *)0x0) {
              thunk_FUN_016d3fb4(local_c8);
              puVar28 = extraout_r2_05;
              param_4 = extraout_r3_11;
            }
            if (puVar32 != (uint *)0x0) {
              thunk_FUN_016d3fb4(local_e0);
              puVar28 = extraout_r2_06;
              param_4 = extraout_r3_12;
            }
            goto LAB_0061fd50;
          }
          iVar15 = 0;
          puVar28 = local_c8;
        }
        *unaff_r4 = iVar15;
        unaff_r4[1] = (int)puVar28;
        unaff_r4[2] = (int)puVar24;
        unaff_r4[3] = (int)local_e0;
        unaff_r4[4] = (int)puVar32;
        unaff_r4[5] = (int)puVar10;
        unaff_r4[6] = (int)puVar37;
        unaff_r4[7] = (int)local_dc;
      }
LAB_0061fd50:
      if (*unaff_r4 == 0) {
        puVar26 = (uint *)(unaff_r4 + 1);
      }
      else {
        puVar26 = (uint *)unaff_r4[3];
        if ((char)unaff_r4[2] != 'O') {
          uVar5 = *(undefined2 *)((int)unaff_r4 + 9);
          uVar3 = *(undefined1 *)((int)unaff_r4 + 0xb);
          iVar8 = unaff_r4[5];
          iVar15 = unaff_r4[4];
          *(char *)(param_1 + 2) = (char)unaff_r4[2];
          param_1[3] = puVar26;
          param_1[4] = iVar15;
          param_1[5] = iVar8;
          *(undefined2 *)((int)param_1 + 9) = uVar5;
          *(undefined1 *)((int)param_1 + 0xb) = uVar3;
          *param_1 = 1;
          return;
        }
      }
    }
  }
  if (*(int *)(uVar20 + 0x10) != 0x2f || *(int *)(uVar20 + 0x14) != 0) {
    FUN_0061a1fc(&local_60,uVar20 + 0x118,iVar8,uVar20,(int *)(uVar20 + 0x10));
    if ((char)local_60 != 'O') {
      param_1[2] = local_60;
      param_1[3] = local_5c;
      param_1[4] = local_58;
      param_1[5] = local_54;
      *param_1 = 1;
      return;
    }
    uVar20 = local_5c[3];
    puVar28 = extraout_r2_01;
    param_4 = extraout_r3_07;
    if (uVar20 != 0) {
      iVar8 = 0;
      if (uVar20 != 1) {
        iVar8 = 0;
        do {
          iVar15 = iVar8 + (uVar20 >> 1);
          uVar20 = uVar20 - (uVar20 >> 1);
          iVar23 = local_5c[2] + iVar15 * 0x18;
          uVar9 = *(uint *)(iVar23 + 8);
          puVar24 = *(uint **)(iVar23 + 0xc);
          unaff_r4 = (int *)(uVar29 - uVar9);
          if (puVar38 <= puVar24 && (uint)(uVar9 <= uVar29) <= (uint)((int)puVar38 - (int)puVar24))
          {
            iVar15 = iVar8;
          }
          iVar8 = iVar15;
        } while (1 < uVar20);
      }
      piVar11 = (int *)(local_5c[2] + iVar8 * 0x18);
      param_4 = (uint *)piVar11[3];
      puVar28 = (uint *)((int)puVar38 - (int)((int)param_4 + (uint)((uint)piVar11[2] > uVar29)));
      if (param_4 < puVar38 ||
          (uint)((int)puVar38 - (int)param_4) < (uint)((uint)piVar11[2] <= uVar29)) {
        param_4 = (uint *)piVar11[5];
        puVar28 = (uint *)((int)puVar38 - (int)((int)param_4 + (uint)((uint)piVar11[4] > uVar29)));
        if ((puVar38 <= param_4 &&
             (uint)((uint)piVar11[4] <= uVar29) <= (uint)((int)puVar38 - (int)param_4)) &&
           (uVar20 = piVar11[1], uVar20 != 0)) {
          iVar8 = *piVar11;
          uVar9 = 0;
          if (uVar20 != 1) {
            uVar18 = uVar20;
            uVar19 = 0;
            do {
              uVar9 = uVar19 + (uVar18 >> 1);
              uVar18 = uVar18 - (uVar18 >> 1);
              puVar24 = (uint *)(iVar8 + uVar9 * 0x18);
              puVar28 = (uint *)puVar24[1];
              if (puVar38 <= puVar28 &&
                  (uint)(*puVar24 <= uVar29) <= (uint)((int)puVar38 - (int)puVar28)) {
                uVar9 = uVar19;
              }
              uVar19 = uVar9;
            } while (1 < uVar18);
          }
          puVar24 = (uint *)(iVar8 + uVar9 * 0x18);
          uVar18 = *puVar24;
          param_4 = (uint *)puVar24[1];
          unaff_r4 = (int *)(uVar18 ^ uVar29 | (uint)param_4 ^ (uint)puVar38);
          if (unaff_r4 != (int *)0x0) {
            puVar28 = (uint *)((int)param_4 - (int)((int)puVar38 + (uint)(uVar29 > uVar18)));
            if (param_4 <= puVar38 &&
                (uint)(uVar29 <= uVar18) <= (uint)((int)param_4 - (int)puVar38)) {
              uVar9 = uVar9 + 1;
            }
            if (uVar9 == 0) goto LAB_0061fdc8;
            uVar9 = uVar9 - 1;
          }
          if (uVar20 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar9,uVar20,&DAT_01856928);
          }
          iVar8 = iVar8 + uVar9 * 0x18;
          if (*(uint *)(iVar8 + 8) < local_5c[1]) {
            iVar15 = *local_5c + *(uint *)(iVar8 + 8) * 0xc;
            puVar28 = *(uint **)(iVar15 + 4);
            param_4 = *(uint **)(iVar15 + 8);
          }
          else {
            puVar28 = (uint *)0x0;
          }
          unaff_r4 = *(int **)(iVar8 + 0x10);
          puVar37 = *(uint **)(iVar8 + 0x14);
          uVar9 = (uint)(unaff_r4 != (int *)0x0);
          uVar20 = uVar9;
          goto LAB_0061fdcc;
        }
      }
    }
  }
LAB_0061fdc8:
  uVar9 = 0;
  uVar20 = 2;
LAB_0061fdcc:
  param_1[1] = puVar26;
  param_1[2] = uVar20;
  param_1[3] = unaff_r4;
  param_1[4] = uVar9;
  param_1[5] = puVar37;
  param_1[6] = puVar28;
  param_1[7] = param_4;
  *param_1 = 0;
  return;
}

