// FUN_0094bac4 @ 0094bac4 size=4104 calls_out=19 calls_in=1
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements

/* WARNING: Removing unreachable block (ram,0x0094c0f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0094bac4(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  byte **ppbVar23;
  int *piVar24;
  uint uVar25;
  undefined4 uVar26;
  byte *pbVar27;
  byte *pbVar28;
  int iVar29;
  undefined4 uVar30;
  byte *pbVar31;
  byte *pbVar32;
  undefined4 uVar33;
  bool bVar34;
  bool bVar35;
  byte *local_204;
  byte *local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  byte *local_1d0;
  int *local_1a8;
  int *local_198;
  byte *local_188;
  byte *local_184;
  byte *local_180;
  byte *local_17c;
  byte *local_178;
  byte *local_174;
  byte *local_170;
  byte *local_16c;
  int local_168;
  byte *local_164;
  int local_160;
  int *local_158;
  byte *local_14c;
  uint local_148;
  int local_144;
  uint local_140;
  byte *local_138;
  byte *local_134;
  byte *local_130;
  byte *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  byte *local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_108;
  undefined4 *local_104;
  int local_100;
  byte *local_f8;
  byte *local_f4;
  byte *local_f0;
  byte *local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  int local_e0;
  undefined4 *local_dc;
  int local_d8;
  byte *local_d0;
  byte *local_cc;
  byte *local_c8;
  byte *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  byte *local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  byte *local_a0;
  byte *local_9c;
  byte *local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  byte *local_84;
  byte *local_80;
  byte *local_7c;
  byte *local_78;
  undefined4 *local_74;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  byte *local_5c;
  byte *local_58;
  byte *local_54;
  byte *local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (*param_2 != -0x7fffffec) {
    FUN_008f73e8(&local_58,param_2,&local_78,&DAT_01867bf8);
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
    param_1[3] = local_4c;
    param_1[4] = local_48;
    param_1[5] = local_44;
    param_1[6] = local_40;
    param_1[7] = local_3c;
    param_1[8] = local_38;
    param_1[9] = local_34;
    param_1[10] = local_30;
    param_1[0xb] = uStack_2c;
    return;
  }
  uVar25 = param_2[3];
  piVar8 = (int *)param_2[2];
  iVar17 = param_2[1];
  uVar16 = 0x5555;
  if (uVar25 < 0x5555) {
    uVar16 = uVar25;
  }
  piVar9 = piVar8 + uVar25 * 4;
  local_144 = 8;
  local_14c = (byte *)0x0;
  local_148 = 0;
  if (uVar25 != 0) {
    local_144 = thunk_FUN_016d4a50(uVar16 * 0x30);
    local_148 = uVar16;
    if (local_144 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar16 * 0x30);
    }
  }
  uVar25 = uVar25 << 4;
  puVar10 = (undefined4 *)((uint)&local_78 | 4);
  puVar11 = (undefined4 *)((uint)&local_88 | 4);
  puVar21 = (undefined4 *)((uint)&local_f8 | 4);
  piVar12 = (int *)((uint)&local_108 | 4);
  local_140 = 0;
  local_158 = piVar8;
  local_1a8 = piVar8;
LAB_0094bc58:
  local_1a8 = local_1a8 + 4;
  uVar25 = uVar25 - 0x10;
  if (local_158 != piVar9) {
    local_198 = local_158 + 4;
    iVar29 = *local_158;
    if (iVar29 == -0x7fffffeb) goto LAB_0094c668;
    local_14c = local_14c + 1;
    iVar19 = local_158[2];
    iVar14 = local_158[3];
    *piVar12 = local_158[1];
    piVar12[1] = iVar19;
    piVar12[2] = iVar14;
    local_108 = iVar29;
    if (iVar29 < 0) {
      FUN_008f73e8(&local_58,&local_108,&local_78,&DAT_01867568);
      local_1ec = local_3c;
      local_1f0 = local_40;
      local_1e4 = local_30;
      local_1e8 = uStack_2c;
      local_16c = local_58;
      local_170 = local_54;
      local_174 = local_4c;
      local_188 = local_48;
      local_180 = local_50;
      local_1f8 = local_38;
      local_1e0 = local_34;
      local_204 = local_44;
    }
    else {
      local_f8 = (byte *)0x80000015;
      local_dc = local_104 + local_100 * 8;
      local_a0 = (byte *)0x80000001;
      local_e4 = local_104;
      local_e8 = local_104;
      local_d8 = 0;
      local_8c = 0;
      local_90 = 8;
      local_94 = 0;
      local_e0 = iVar29;
      if (local_100 == 0) {
        local_160 = 0;
        bVar35 = true;
        local_168 = 8;
LAB_0094c300:
        local_68 = &DAT_80000000;
      }
      else {
        puVar13 = local_104 + 4;
        iVar29 = local_100 << 5;
        local_164 = (byte *)0x80000001;
        local_178 = local_9c;
        iVar14 = 1;
        local_160 = 0;
        local_17c = local_98;
        local_168 = 8;
LAB_0094bd78:
        do {
          pbVar28 = local_7c;
          pbVar32 = local_80;
          pbVar20 = local_84;
          uVar16 = puVar13[-4];
          local_e4 = puVar13 + 4;
          if (uVar16 == 0x80000015) break;
          local_f8 = (byte *)*puVar13;
          uVar22 = puVar13[-1];
          uVar33 = puVar13[-3];
          puVar11[1] = puVar13[-2];
          puVar11[2] = uVar22;
          *puVar11 = uVar33;
          uVar18 = 0x15;
          if ((int)uVar16 < 0) {
            uVar18 = uVar16 ^ 0x80000000;
          }
          local_f4 = (byte *)puVar13[1];
          local_f0 = (byte *)puVar13[2];
          local_ec = (byte *)puVar13[3];
          local_d8 = iVar14;
          local_88 = uVar16;
          local_58 = local_f8;
          local_54 = local_f4;
          local_50 = local_f0;
          local_4c = local_ec;
          if (0xe < uVar18 - 1) {
switchD_0094bdfc_caseD_2:
            FUN_008f73e8(&local_58,&local_88,&local_78,&DAT_01867118);
LAB_0094bfa0:
            if (local_58 == &SUB_00000002) goto LAB_0094bfb8;
            local_98 = local_17c;
            local_9c = local_178;
            local_a0 = local_164;
LAB_0094c51c:
            bVar35 = true;
            local_1e0 = local_34;
            local_180 = local_50;
            local_204 = local_44;
            local_1f8 = local_38;
            local_1f0 = local_40;
            local_1ec = local_3c;
            local_1e8 = uStack_2c;
            local_1e4 = local_30;
            local_188 = local_48;
            local_174 = local_4c;
            local_170 = local_54;
            local_16c = local_58;
            goto LAB_0094c6a0;
          }
          uVar16 = (&switchD_0094bdfc::switchdataD_0094be00)[uVar18 - 1];
          switch(uVar18) {
          case 1:
            local_50 = (byte *)0x80000001;
            local_4c = (byte *)CONCAT31((int3)((uint)local_ec >> 8),(char)local_84);
            break;
          default:
            goto switchD_0094bdfc_caseD_2;
          case 4:
            local_48 = local_80;
            local_44 = local_7c;
            local_50 = &DAT_80000004;
            break;
          case 0xc:
            FUN_0090f90c(&local_58,local_80,local_7c);
            if (pbVar20 != (byte *)0x0) {
LAB_0094bf98:
              thunk_FUN_016d3fb4(pbVar32);
            }
            goto LAB_0094bfa0;
          case 0xd:
            if ((local_80 == &DAT_00000004) && (*(int *)local_84 == 0x6c6f6f70)) {
              local_50 = (byte *)0x80000015;
            }
            else {
              local_4c = local_84;
              local_50 = &DAT_8000000d;
              local_48 = local_80;
            }
            break;
          case 0xe:
            if (local_7c == &DAT_00000004) {
              bVar1 = *local_80;
              bVar35 = bVar1 != 0x70;
              if (!bVar35) {
                bVar1 = local_80[1];
              }
              pbVar27 = local_84;
              if (bVar35 || bVar1 != 0x6f) {
LAB_0094beec:
                local_1d0 = (byte *)thunk_FUN_016d4a50(local_7c,pbVar27);
                if (local_1d0 == (byte *)0x0) {
                  uVar22 = 1;
                  local_1d0 = pbVar28;
LAB_0094caf8:
                  local_98 = local_17c;
                  local_a0 = local_164;
                  local_9c = local_178;
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(uVar22,local_1d0);
                }
                pbVar27 = pbVar28;
                goto LAB_0094bf04;
              }
              bVar1 = local_80[2];
              bVar35 = bVar1 == 0x6f;
              if (bVar35) {
                bVar1 = local_80[3];
              }
              if (!bVar35 || bVar1 != 0x6c) goto LAB_0094beec;
              local_50 = (byte *)0x80000015;
            }
            else {
              uVar22 = 0;
              if ((int)local_7c < 0) goto LAB_0094caf8;
              pbVar27 = local_1d0;
              if (local_7c != (byte *)0x0) goto LAB_0094beec;
              pbVar27 = (byte *)0x0;
              local_1d0 = &DAT_00000001;
LAB_0094bf04:
              FUN_016dd1aa(local_1d0,pbVar32,pbVar28);
              local_44 = pbVar28;
              local_50 = (byte *)0x8000000e;
              local_48 = local_1d0;
              local_4c = pbVar27;
            }
            local_58 = &SUB_00000002;
            if (pbVar20 != (byte *)0x0) goto LAB_0094bf98;
            goto LAB_0094bfb8;
          case 0xf:
            bVar35 = local_80 == &DAT_00000004;
            if (bVar35) {
              uVar16 = (uint)*local_84;
            }
            bVar34 = bVar35 && uVar16 == 0x70;
            if (bVar35 && uVar16 == 0x70) {
              bVar34 = local_84[1] == 0x6f;
            }
            if ((!bVar34) || (local_84[2] != 0x6f)) {
LAB_0094be94:
              local_4c = local_84;
              local_50 = &DAT_8000000f;
              pbVar20 = local_80;
              ppbVar23 = &local_48;
            }
            else {
              pbVar20 = (byte *)0x80000015;
              ppbVar23 = &local_50;
              if (local_84[3] != 0x6c) goto LAB_0094be94;
            }
            *ppbVar23 = pbVar20;
          }
          local_58 = &SUB_00000002;
          FUN_008f7448(&local_88);
LAB_0094bfb8:
          pbVar32 = local_48;
          puVar15 = local_74;
          pbVar20 = local_f8;
          if (local_50 != (byte *)0x80000015) {
            if (local_50 == (byte *)0x80000016) break;
            bVar35 = local_f8 == (byte *)0x80000015;
            local_f8 = (byte *)0x80000015;
            local_68 = local_50;
            local_64 = local_4c;
            local_5c = local_44;
            if (bVar35) {
              local_98 = local_17c;
              local_a0 = local_164;
              local_9c = local_178;
              local_60 = local_48;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                           ,0x2c,&DAT_01887244);
            }
            local_48 = pbVar20;
            local_40 = puVar21[1];
            local_3c = puVar21[2];
            local_60 = pbVar32;
            local_58 = local_50;
            local_54 = local_4c;
            local_4c = local_44;
            pbVar20 = (byte *)*puVar21;
            if (local_160 == local_94) {
              local_50 = pbVar32;
              local_4c = local_44;
              local_44 = (byte *)*puVar21;
              FUN_009f4b90(&local_94);
              local_168 = local_90;
              pbVar32 = local_50;
              pbVar20 = local_44;
            }
            local_44 = pbVar20;
            local_50 = pbVar32;
            puVar15 = (undefined4 *)(local_168 + local_160 * 0x20);
            local_160 = local_160 + 1;
            *puVar15 = local_58;
            puVar15[1] = local_54;
            puVar15[2] = local_50;
            puVar15[3] = local_4c;
            puVar15[4] = local_48;
            puVar15[5] = local_44;
            puVar15[6] = local_40;
            puVar15[7] = local_3c;
            puVar13 = puVar13 + 8;
            iVar14 = iVar14 + 1;
            iVar29 = iVar29 + -0x20;
            local_8c = local_160;
            if (iVar29 == 0) break;
            goto LAB_0094bd78;
          }
          if (local_164 != (byte *)0x80000001) {
            local_98 = local_17c;
            local_a0 = local_164;
            local_9c = local_178;
            FUN_009244cc(&local_58,&DAT_00567dd8,4);
            goto LAB_0094c51c;
          }
          local_f8 = (byte *)0x80000015;
          if (pbVar20 == (byte *)0x80000015) {
            local_98 = local_17c;
            local_a0 = (byte *)0x80000001;
            local_9c = local_178;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                         ,0x2c,&DAT_01887244);
          }
          local_16c = &SUB_00000002;
          local_164 = &DAT_80000000;
          local_78 = pbVar20;
          uVar22 = puVar21[1];
          uVar33 = puVar21[2];
          *puVar10 = *puVar21;
          puVar10[1] = uVar22;
          puVar10[2] = uVar33;
          uVar16 = 0x15;
          if ((int)pbVar20 < 0) {
            uVar16 = (uint)pbVar20 ^ 0x80000000;
          }
          if (uVar16 == 0x10) {
LAB_0094c1b4:
            if (pbVar20 != (byte *)0x80000011) {
              FUN_008f7448(&local_78);
            }
            local_170 = local_164;
            if (local_16c != &SUB_00000002) {
LAB_0094c45c:
              local_164 = (byte *)0x80000001;
              local_98 = local_17c;
              local_9c = local_178;
              bVar35 = true;
              local_188 = local_200;
              local_a0 = (byte *)0x80000001;
              local_174 = local_184;
              goto LAB_0094c6a0;
            }
          }
          else {
            if (uVar16 == 0x11) {
              local_68 = (byte *)*local_74;
              local_64 = (byte *)local_74[1];
              local_60 = (byte *)local_74[2];
              local_5c = (byte *)local_74[3];
              FUN_0094d594(&local_58,&local_68);
              local_164 = local_54;
              if (local_58 == &SUB_00000002) {
                local_16c = &SUB_00000002;
              }
              else {
                local_1e0 = local_34;
                local_1f8 = local_38;
                local_1e4 = local_30;
                local_1e8 = uStack_2c;
                local_200 = local_48;
                local_204 = local_44;
                local_1ec = local_3c;
                local_1f0 = local_40;
                local_16c = local_58;
              }
              local_180 = local_50;
              local_184 = local_4c;
              thunk_FUN_016d3fb4(puVar15);
              goto LAB_0094c1b4;
            }
            if (uVar16 == 0x12) goto LAB_0094c1b4;
            FUN_0094d594(&local_58,&local_78);
            local_164 = local_54;
            if (local_58 != &SUB_00000002) {
              local_1e0 = local_34;
              local_1f8 = local_38;
              local_1e4 = local_30;
              local_1e8 = uStack_2c;
              local_180 = local_50;
              local_184 = local_4c;
              local_200 = local_48;
              local_204 = local_44;
              local_1ec = local_3c;
              local_1f0 = local_40;
              local_16c = local_58;
              local_170 = local_54;
              if (local_58 == &SUB_00000002) goto LAB_0094c1d4;
              goto LAB_0094c45c;
            }
            local_180 = local_50;
            local_184 = local_4c;
          }
LAB_0094c1d4:
          local_178 = local_180;
          local_17c = local_184;
          puVar13 = puVar13 + 8;
          iVar14 = iVar14 + 1;
          iVar29 = iVar29 + -0x20;
        } while (iVar29 != 0);
        local_98 = local_17c;
        local_9c = local_178;
        local_a0 = local_164;
        bVar35 = local_164 == (byte *)0x80000001;
        if (local_164 == (byte *)0x80000001) goto LAB_0094c300;
        local_68 = local_164;
        local_64 = local_178;
        local_60 = local_17c;
      }
      local_164 = local_a0;
      FUN_0092e104(&local_58,local_168,local_160);
      uVar6 = local_34;
      uVar4 = local_38;
      uVar33 = local_3c;
      uVar22 = local_40;
      pbVar2 = local_44;
      pbVar31 = local_48;
      pbVar27 = local_4c;
      pbVar28 = local_50;
      pbVar32 = local_64;
      pbVar20 = local_68;
      if (local_58 == &SUB_00000002) {
        uVar26 = *(undefined4 *)((uint)&local_68 | 4);
        uVar30 = ((undefined4 *)((uint)&local_68 | 4))[1];
        FUN_00953170(local_168,local_160);
        if (local_94 != 0) {
          thunk_FUN_016d3fb4(local_168);
        }
        local_b0 = pbVar20;
        local_b4 = uVar6;
        local_c0 = uVar22;
        local_c4 = pbVar2;
        local_c8 = pbVar31;
        local_b8 = uVar4;
        local_bc = uVar33;
        local_cc = pbVar27;
        local_d0 = pbVar28;
        local_ac = uVar26;
        uStack_a8 = uVar30;
        FUN_008f78f0(&local_58,&local_f8);
        uVar7 = local_34;
        uVar5 = local_38;
        pbVar3 = local_44;
        pbVar32 = local_50;
        uVar16 = local_140;
        if (local_58 == &SUB_00000002) {
          if (pbVar28 != (byte *)0x3) goto code_r0x0094c404;
          goto LAB_0094c668;
        }
        local_16c = local_58;
        local_170 = local_54;
        local_174 = local_4c;
        local_188 = local_48;
        local_1e4 = local_30;
        local_1e8 = uStack_2c;
        local_1ec = local_3c;
        local_1f0 = local_40;
        FUN_008f7a78(&local_d0);
        local_180 = pbVar32;
        local_1f8 = uVar5;
        local_1e0 = uVar7;
        local_204 = pbVar3;
      }
      else {
        local_16c = local_58;
        local_1f8 = local_38;
        local_1ec = local_3c;
        local_1f0 = local_40;
        local_1e4 = local_30;
        local_1e8 = uStack_2c;
        local_170 = local_54;
        local_174 = local_4c;
        local_188 = local_48;
        if (local_68 != &DAT_80000000) {
          if (local_60 != (byte *)0x0) {
            pbVar31 = local_64 + 0x10;
            pbVar27 = local_60;
            do {
              if (*(int *)(pbVar31 + -0x10) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(pbVar31 + -0xc));
              }
              if (*(int *)(pbVar31 + -4) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)pbVar31);
              }
              if ((*(uint *)(pbVar31 + 8) & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(pbVar31 + 0xc));
              }
              pbVar31 = pbVar31 + 0x28;
              pbVar27 = pbVar27 + -1;
            } while (pbVar27 != (byte *)0x0);
          }
          if (pbVar20 != (byte *)0x0) {
            thunk_FUN_016d3fb4(pbVar32);
          }
        }
        local_1e0 = uVar6;
        local_180 = pbVar28;
        local_204 = pbVar2;
LAB_0094c6a0:
        FUN_00953170(local_168,local_160);
        if (local_94 != 0) {
          thunk_FUN_016d3fb4(local_168);
          local_164 = local_a0;
        }
        pbVar20 = local_9c;
        if (bVar35 && -0x7fffffff < (int)local_164) {
          if (local_98 != (byte *)0x0) {
            pbVar28 = local_9c + 0x10;
            pbVar32 = local_98;
            do {
              if (*(int *)(pbVar28 + -0x10) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(pbVar28 + -0xc));
              }
              if (*(int *)(pbVar28 + -4) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)pbVar28);
              }
              if ((*(uint *)(pbVar28 + 8) & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(pbVar28 + 0xc));
              }
              pbVar28 = pbVar28 + 0x28;
              pbVar32 = pbVar32 + -1;
            } while (pbVar32 != (byte *)0x0);
          }
          if (local_164 != (byte *)0x0) {
            thunk_FUN_016d3fb4(pbVar20);
          }
        }
        FUN_00927214(&local_e8);
        if (local_f8 != (byte *)0x80000015) {
          FUN_008f7448(&local_f8);
        }
      }
    }
    iVar29 = local_144;
    *param_1 = local_16c;
    param_1[1] = local_170;
    param_1[2] = local_180;
    param_1[3] = local_174;
    param_1[4] = local_188;
    param_1[6] = local_1f0;
    param_1[5] = local_204;
    param_1[7] = local_1ec;
    param_1[8] = local_1f8;
    param_1[9] = local_1e0;
    param_1[10] = local_1e4;
    param_1[0xb] = local_1e8;
    FUN_0094abc0(local_144,local_140);
    if (local_148 != 0) {
      thunk_FUN_016d3fb4(iVar29);
    }
    if (local_16c == &SUB_00000002) goto LAB_0094c814;
    iVar29 = (uVar25 >> 4) + 1;
    while (iVar29 = iVar29 + -1, iVar29 != 0) {
      FUN_008f7448(local_1a8);
      local_1a8 = local_1a8 + 4;
    }
    if (iVar17 == 0) goto LAB_0094c8cc;
    goto LAB_0094c8c8;
  }
  local_198 = piVar9;
LAB_0094c668:
  *param_1 = 2;
  param_1[1] = local_148;
  param_1[2] = local_144;
  param_1[3] = local_140;
LAB_0094c814:
  iVar14 = param_1[1];
  uVar22 = param_1[3];
  iVar29 = ((uint)((int)piVar9 - (int)local_198) >> 4) + 1;
  piVar24 = (int *)param_1[2];
  piVar12 = local_198;
  while (iVar29 = iVar29 + -1, iVar29 != 0) {
    FUN_008f7448(piVar12);
    piVar12 = piVar12 + 4;
  }
  if (iVar17 != 0) {
    thunk_FUN_016d3fb4(piVar8);
  }
  if (piVar9 != local_198) {
    local_d0 = local_14c;
    FUN_00f3cf48(&local_58,local_14c + ((uint)((int)piVar9 - (int)local_198) >> 4),&local_d0,
                 &DAT_01887234);
    if (local_58 != &SUB_00000002) {
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = local_50;
      param_1[3] = local_4c;
      param_1[4] = local_48;
      param_1[5] = local_44;
      param_1[6] = local_40;
      param_1[7] = local_3c;
      param_1[8] = local_38;
      param_1[9] = local_34;
      param_1[10] = local_30;
      param_1[0xb] = uStack_2c;
      FUN_0094abc0(piVar24,uVar22);
      if (iVar14 != 0) {
        piVar8 = piVar24;
LAB_0094c8c8:
        thunk_FUN_016d3fb4(piVar8);
      }
      goto LAB_0094c8cc;
    }
  }
  *param_1 = 2;
LAB_0094c8cc:
  if (*param_2 == -0x7fffffec) {
    return;
  }
  FUN_008f7448(param_2);
  return;
code_r0x0094c404:
  local_128 = uVar22;
  local_12c = pbVar2;
  local_130 = pbVar31;
  local_118 = pbVar20;
  local_11c = uVar6;
  local_120 = uVar4;
  local_124 = uVar33;
  local_134 = pbVar27;
  local_138 = pbVar28;
  local_114 = uVar26;
  uStack_110 = uVar30;
  if (local_140 == local_148) {
    FUN_009331d8(&local_148);
  }
  puVar13 = (undefined4 *)(local_144 + uVar16 * 0x30);
  *puVar13 = local_138;
  puVar13[1] = local_134;
  puVar13[2] = local_130;
  puVar13[3] = local_12c;
  puVar13[4] = local_128;
  puVar13[5] = local_124;
  puVar13[6] = local_120;
  puVar13[7] = local_11c;
  puVar13[8] = local_118;
  puVar13[9] = local_114;
  puVar13[10] = uStack_110;
  puVar13[0xb] = uStack_10c;
  local_140 = uVar16 + 1;
  local_158 = local_198;
  goto LAB_0094bc58;
}

