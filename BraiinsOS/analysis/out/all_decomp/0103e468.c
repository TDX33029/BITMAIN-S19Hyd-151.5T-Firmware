// FUN_0103e468 @ 0103e468 size=2868 calls_out=12 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0103e468(int *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined1 uVar6;
  byte *pbVar7;
  code *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 uVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte bVar19;
  byte *pbVar20;
  bool bVar21;
  undefined2 local_170;
  undefined2 local_16e;
  byte *local_16c;
  byte *local_168;
  byte *pbStack_160;
  byte *pbStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  uint local_14c;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  byte *local_128;
  byte *local_124;
  byte *local_120;
  byte *local_11c;
  byte *local_118;
  byte *local_114;
  byte *local_110;
  byte *local_10c;
  byte *local_108;
  undefined1 auStack_104 [28];
  code *local_e8;
  byte *pbStack_e4;
  byte *pbStack_e0;
  byte *local_d8;
  byte *local_d4;
  byte *local_d0;
  uint local_cc;
  code *local_c8;
  byte *pbStack_c4;
  byte *pbStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  byte *pbStack_b0;
  byte *local_a8;
  byte *local_a4;
  byte *local_a0;
  code *local_98;
  byte *pbStack_94;
  byte *pbStack_90;
  undefined4 local_88;
  code *local_84;
  byte *local_80;
  byte *local_7c;
  byte *local_78;
  byte *local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  byte *pbStack_3c;
  ushort local_38;
  undefined2 uStack_36;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 local_2e;
  undefined2 uStack_2c;
  
  pbVar7 = param_2 + (int)param_3;
  if (param_3 == (byte *)0x0) {
    pbVar18 = param_2;
LAB_0103e51c:
    uVar17 = 2;
    local_170 = 2;
LAB_0103e524:
    local_120 = &DAT_00000004;
    local_11c = (byte *)0x0;
    local_124 = (byte *)0x0;
    local_128 = &DAT_80000000;
    puVar9 = (undefined4 *)((uint)&local_128 | 4);
    if (pbVar18 != pbVar7) {
      do {
        pbVar4 = local_108;
        pbVar16 = local_110;
        pbVar3 = local_114;
        pbVar2 = local_118;
        pbVar1 = local_11c;
        pbVar13 = local_120;
        pbVar20 = local_124;
        pbVar14 = local_128;
        uVar10 = 2;
        if ((int)local_128 < 0) {
          uVar10 = (uint)local_128 ^ 0x80000000;
        }
        if (uVar10 != 0) {
          if (uVar10 != 1) {
            bVar19 = *pbVar18;
            uVar10 = (uint)bVar19;
            local_d8 = local_11c;
            local_d4 = local_118;
            local_d0 = local_114;
            local_a8 = local_110;
            local_a4 = local_10c;
            local_a0 = local_108;
            if (uVar10 == 0x3b) {
              local_7c = local_11c;
              local_78 = local_118;
              local_74 = local_114;
              local_80 = local_120;
              local_84 = (code *)local_124;
              local_88 = (byte **)local_128;
              if (local_108 == local_110) {
                FUN_0104e588(&local_a8);
              }
              pbVar14 = local_a4 + (int)pbVar4 * 0x18;
              *(byte ***)pbVar14 = local_88;
              *(code **)(pbVar14 + 4) = local_84;
              *(byte **)(pbVar14 + 8) = local_80;
              *(byte **)(pbVar14 + 0xc) = local_7c;
              *(byte **)(pbVar14 + 0x10) = local_78;
              *(byte **)(pbVar14 + 0x14) = local_74;
              local_a0 = pbVar4 + 1;
              *puVar9 = local_a8;
              puVar9[1] = local_a4;
              puVar9[2] = local_a0;
              goto LAB_0103e5bc;
            }
            uVar11 = uVar10 - 0x21;
            bVar21 = 0x19 < uVar11;
            if (bVar21) {
              uVar11 = uVar10 - 0x3c;
            }
            if (!bVar21 || uVar11 < 0x43) {
              if (local_11c == local_114) {
                FUN_0104e980(&local_d8,local_114,1,1,1);
              }
              local_d4[(int)local_d0] = bVar19;
              local_114 = pbVar3 + 1;
              local_11c = local_d8;
              local_118 = local_d4;
              local_128 = pbVar14;
              local_124 = pbVar20;
              local_120 = pbVar13;
              local_d0 = local_114;
              goto LAB_0103e5c4;
            }
            local_84 = FUN_00faaf34;
            local_88 = (byte **)&local_cc;
            local_cc = uVar10;
            FUN_00600d2c(&local_c8,&DAT_0056ad92,&local_88);
            local_88._2_2_ = SUB42((uint *)local_88,2);
            local_88._0_2_ = SUB42((uint *)local_88,0);
            local_2e = SUB42(pbStack_c0,0);
            uStack_2c = (undefined2)((uint)pbStack_c0 >> 0x10);
            uStack_32 = SUB42(pbStack_c4,0);
            uStack_30 = (undefined2)((uint)pbStack_c4 >> 0x10);
            uStack_36 = SUB42(local_c8,0);
            local_34 = (undefined2)((uint)local_c8 >> 0x10);
            local_88 = (byte **)CONCAT22(local_38,0x11);
            local_84 = local_c8;
            local_80 = pbStack_c4;
            local_7c = pbStack_c0;
            iVar12 = thunk_FUN_016d4a50(0x44);
            if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x44);
            }
            FUN_016dd1aa(iVar12,&local_88,0x44);
            pbVar7 = local_a4;
            *param_1 = iVar12;
            pbVar13 = local_a4 + 0x10;
            param_1[0x11] = -0x80000000;
            for (pbVar18 = local_a0; pbVar18 != (byte *)0x0; pbVar18 = pbVar18 + -1) {
              if (*(int *)(pbVar13 + -0x10) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(pbVar13 + -0xc));
              }
              if (*(int *)(pbVar13 + -4) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)pbVar13);
              }
              pbVar13 = pbVar13 + 0x18;
            }
            if (local_a8 != (byte *)0x0) {
              thunk_FUN_016d3fb4(pbVar7);
            }
            if (local_d8 != (byte *)0x0) {
              thunk_FUN_016d3fb4(local_d4);
            }
            if (pbVar14 == (byte *)0x0) goto LAB_0103eee0;
            pbVar13 = pbVar20;
            goto LAB_0103ee74;
          }
          bVar19 = *pbVar18;
          pbVar20 = (byte *)(uint)bVar19;
          local_a8 = (byte *)*puVar9;
          local_a4 = (byte *)puVar9[1];
          pbVar14 = (byte *)puVar9[2];
          local_a0 = pbVar14;
          if (pbVar20 == &DAT_0000003d) {
            local_110 = local_118;
            local_10c = local_114;
            local_108 = pbVar16;
            local_11c = (byte *)0x0;
            local_114 = (byte *)0x0;
            local_118 = &DAT_00000001;
            local_128 = (byte *)*puVar9;
            local_124 = (byte *)puVar9[1];
            local_120 = (byte *)puVar9[2];
            goto LAB_0103e5c4;
          }
          pbVar13 = pbVar20 + -0x30;
          bVar21 = &DAT_00000009 < pbVar13;
          if (bVar21) {
            pbVar13 = (byte *)(((uint)pbVar20 & 0xdf) - 0x41);
          }
          if (bVar21 && &DAT_00000019 < pbVar13) {
            if (pbVar20 == &DAT_0000002d && (char)local_10c == '\0') goto LAB_0103e83c;
          }
          else {
            if (pbVar20 != &DAT_0000003b) {
LAB_0103e83c:
              uVar10 = 2;
              if ((uint)(int)(char)bVar19 < 0x80000000) {
                uVar10 = 1;
              }
              if ((uint)((int)local_a8 - (int)pbVar14) < uVar10) {
                FUN_0104e980(&local_a8,pbVar14,uVar10,1,1);
                local_a0 = local_a4 + (int)local_a0;
              }
              else {
                local_a0 = local_a4 + (int)pbVar14;
              }
              if (0x7fffffff < (uint)(int)(char)bVar19) {
                local_a0[1] = bVar19 & 0xbf;
                bVar19 = bVar19 >> 6 | 0xc0;
              }
              *local_a0 = bVar19;
              local_a0 = pbVar14 + uVar10;
              *puVar9 = local_a8;
              puVar9[1] = local_a4;
              puVar9[2] = local_a0;
              uVar6 = 0;
              goto LAB_0103e8a4;
            }
            pbVar20 = &DAT_0000003b;
          }
          local_84 = FUN_00faaf34;
          local_88 = &local_d8;
          local_d8 = pbVar20;
          FUN_00600d2c(&local_e8,&DAT_0056d6c2,&local_88);
          local_88._2_2_ = SUB42(local_88,2);
          local_88._0_2_ = SUB42(local_88,0);
          local_2e = SUB42(pbStack_e0,0);
          uStack_2c = (undefined2)((uint)pbStack_e0 >> 0x10);
          uStack_32 = SUB42(pbStack_e4,0);
          uStack_30 = (undefined2)((uint)pbStack_e4 >> 0x10);
          uStack_36 = SUB42(local_e8,0);
          local_34 = (undefined2)((uint)local_e8 >> 0x10);
          local_88 = (byte **)CONCAT22(local_38,0x11);
          local_84 = local_e8;
          local_80 = pbStack_e4;
          local_7c = pbStack_e0;
          iVar12 = thunk_FUN_016d4a50(0x44);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x44);
          }
          FUN_016dd1aa(iVar12,&local_88,0x44);
          *param_1 = iVar12;
          pbVar7 = pbVar3 + 0x10;
          param_1[0x11] = -0x80000000;
          for (; pbVar16 != (byte *)0x0; pbVar16 = pbVar16 + -1) {
            if (*(int *)(pbVar7 + -0x10) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(pbVar7 + -0xc));
            }
            if (*(int *)(pbVar7 + -4) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)pbVar7);
            }
            pbVar7 = pbVar7 + 0x18;
          }
          if (pbVar2 != (byte *)0x0) {
            thunk_FUN_016d3fb4(pbVar3);
          }
          if (local_a8 == (byte *)0x0) goto LAB_0103eee0;
          pbVar7 = local_a4;
          goto LAB_0103eedc;
        }
        bVar19 = *pbVar18;
        uVar10 = (uint)bVar19;
        if ((uVar10 == 9) || (uVar10 == 0x20 || uVar10 == 0x3b)) {
LAB_0103e5bc:
          local_128 = &DAT_80000000;
        }
        else {
          if ((9 < uVar10 - 0x30) && (0x19 < (uVar10 & 0xdf) - 0x41)) {
            local_38 = (ushort)bVar19;
            uStack_36 = 0;
            local_84 = FUN_00faaf34;
            local_88 = (byte **)&local_38;
            FUN_00600d2c(auStack_104,&DAT_0056d6c2,&local_88);
            iVar12 = FUN_0104f004(auStack_104);
            param_1[0x11] = -0x80000000;
            *param_1 = iVar12;
            FUN_0105689c(pbVar13,pbVar1);
            if (pbVar20 != (byte *)0x0) goto LAB_0103ee74;
            goto LAB_0103ee78;
          }
          uVar15 = 2;
          if ((uint)(int)(char)bVar19 < 0x80000000) {
            uVar15 = 1;
          }
          local_80 = (byte *)0x0;
          local_84 = (code *)&DAT_00000001;
          local_88 = (byte **)0x0;
          FUN_0104e980(&local_88,0,uVar15,1,1);
          if (0x7fffffff < (uint)(int)(char)bVar19) {
            (local_84 + (int)local_80)[1] = (code)(bVar19 & 0xbf);
            bVar19 = bVar19 >> 6 | 0xc0;
          }
          local_84[(int)local_80] = (code)bVar19;
          local_118 = pbVar20;
          uVar6 = 1;
          *puVar9 = local_88;
          puVar9[1] = local_84;
          puVar9[2] = uVar15;
          local_110 = pbVar1;
          local_114 = pbVar13;
LAB_0103e8a4:
          local_10c = (byte *)CONCAT31(local_10c._1_3_,uVar6);
          local_128 = (byte *)0x80000001;
        }
LAB_0103e5c4:
        pbVar20 = local_108;
        pbVar14 = local_128;
        pbVar18 = pbVar18 + 1;
      } while (pbVar18 != pbVar7);
      if ((int)local_128 < 0) {
        if (((uint)local_128 & 0x7fffffff) == 0) {
          goto LAB_0103e988;
        }
        if (((uint)local_128 & 0x7fffffff) == 1) {
          local_a8 = (byte *)*puVar9;
          local_a4 = (byte *)puVar9[1];
          local_a0 = (byte *)puVar9[2];
          local_88 = &local_a8;
          local_84 = (code *)&DAT_006043a8;
          FUN_00600d2c(&local_98,&DAT_0058a901,&local_88);
          local_88._2_2_ = SUB42(local_88,2);
          local_88._0_2_ = SUB42(local_88,0);
          local_2e = SUB42(pbStack_90,0);
          uStack_2c = (undefined2)((uint)pbStack_90 >> 0x10);
          uStack_32 = SUB42(pbStack_94,0);
          uStack_30 = (undefined2)((uint)pbStack_94 >> 0x10);
          uStack_36 = SUB42(local_98,0);
          local_34 = (undefined2)((uint)local_98 >> 0x10);
          local_88 = (byte **)CONCAT22(local_38,0x11);
          local_84 = local_98;
          local_80 = pbStack_94;
          local_7c = pbStack_90;
          iVar12 = thunk_FUN_016d4a50(0x44);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x44);
          }
          FUN_016dd1aa(iVar12,&local_88,0x44);
          param_1[0x11] = -0x80000000;
          *param_1 = iVar12;
          if (local_a8 != (byte *)0x0) {
            pbVar13 = local_a4;
LAB_0103ee74:
            thunk_FUN_016d3fb4(pbVar13);
          }
LAB_0103ee78:
          pbVar7 = local_114;
          if (pbVar14 == (byte *)0x80000001) {
            pbVar14 = local_114 + 0x10;
            for (pbVar18 = local_110; pbVar18 != (byte *)0x0; pbVar18 = pbVar18 + -1) {
              if (*(int *)(pbVar14 + -0x10) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(pbVar14 + -0xc));
              }
              if (*(int *)(pbVar14 + -4) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)pbVar14);
              }
              pbVar14 = pbVar14 + 0x18;
            }
            if (local_118 != (byte *)0x0) {
LAB_0103eedc:
              thunk_FUN_016d3fb4(pbVar7);
            }
          }
LAB_0103eee0:
          if (uVar17 != 2) {
            pbVar7 = (byte *)0x0;
            if (uVar17 != 0) {
              pbVar7 = local_16c;
            }
            if (uVar17 != 0 && pbVar7 != (byte *)0x0) {
              thunk_FUN_016d3fb4(local_168);
            }
            bVar21 = (local_14c & 0xffff) != 0;
            iVar12 = 0;
            if (bVar21) {
              iVar12 = local_148;
            }
            if (bVar21 && iVar12 != 0) {
              thunk_FUN_016d3fb4(local_144);
              local_88._2_2_ = SUB42((ushort *)local_88,2);
              local_88._0_2_ = SUB42((ushort *)local_88,0);
              return;
            }
          }
          return;
        }
      }
      local_88 = (byte **)local_128;
      local_84 = (code *)local_124;
      local_80 = local_120;
      local_7c = local_11c;
      local_78 = local_118;
      local_74 = local_114;
      local_38 = (ushort)local_110;
      uStack_36 = (undefined2)((uint)local_110 >> 0x10);
      local_34 = SUB42(local_10c,0);
      uStack_32 = (undefined2)((uint)local_10c >> 0x10);
      uStack_30 = SUB42(local_108,0);
      local_2e = (undefined2)((uint)local_108 >> 0x10);
      if (local_108 == local_110) {
        FUN_0104e588(&local_38);
      }
      puVar9 = (undefined4 *)(CONCAT22(uStack_32,local_34) + (int)pbVar20 * 0x18);
      *puVar9 = local_88;
      puVar9[1] = local_84;
      puVar9[2] = local_80;
      puVar9[3] = local_7c;
      puVar9[4] = local_78;
      puVar9[5] = local_74;
      pbStack_b0 = pbVar20 + 1;
      local_b8 = CONCAT22(uStack_36,local_38);
      uStack_b4 = CONCAT22(uStack_32,local_34);
      goto LAB_0103e994;
    }
  }
  else {
    bVar19 = *param_2;
    pbVar18 = param_2 + 1;
    if (bVar19 == 0x3b) goto LAB_0103e51c;
    pcVar8 = (code *)thunk_FUN_016d4a50(8);
    if (pcVar8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,8);
    }
    *pcVar8 = (code)bVar19;
    local_88 = (byte **)&DAT_00000008;
    pbVar18 = &DAT_00000001;
    local_84 = pcVar8;
    while( true ) {
      pcVar5 = local_84;
      local_80 = pbVar18;
      if (param_3 == pbVar18) break;
      bVar19 = param_2[(int)pbVar18];
      if (bVar19 == 0x3b) {
        param_3 = pbVar18;
        pbVar18 = param_2 + (int)pbVar18 + 1;
        goto LAB_0103ea04;
      }
      if ((byte **)pbVar18 == local_88) {
        FUN_0104e980(&local_88,pbVar18,1,1,1);
        pcVar8 = local_84;
      }
      pcVar8[(int)pbVar18] = (code)bVar19;
      pbVar18 = pbVar18 + 1;
    }
    pbVar18 = pbVar7;
    if (param_3 != (byte *)0x0) {
LAB_0103ea04:
      bVar21 = local_88 != (byte **)0x0;
      FUN_00fab1e0(&local_88,local_84,param_3);
      if (local_88 == (byte **)&DAT_00000001) {
        local_88 = (byte **)&DAT_00000025;
        pcVar8 = (code *)thunk_FUN_016d4a50(0x44);
        if (pcVar8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x44);
        }
        FUN_016dd1aa(pcVar8,&local_88,0x44);
LAB_0103eb54:
        param_1[0x11] = -0x80000000;
        *param_1 = (int)pcVar8;
        if (!bVar21) {
          return;
        }
        thunk_FUN_016d3fb4(pcVar5);
        return;
      }
      FUN_0103a4b0(&local_88);
      uVar17 = (uint)local_88 & 0xffff;
      if (uVar17 == 2) {
        pcVar8 = local_84;
        goto LAB_0103eb54;
      }
      local_16c = (byte *)local_84;
      local_168 = local_80;
      pbStack_160 = local_78;
      pbStack_15c = local_74;
      uStack_158 = uStack_70;
      local_154 = local_6c;
      uStack_150 = uStack_68;
      local_14c = uStack_64;
      local_148 = iStack_60;
      local_144 = uStack_5c;
      local_140 = local_58;
      uStack_13c = uStack_54;
      uStack_138 = uStack_50;
      uStack_134 = uStack_4c;
      uStack_130 = uStack_48;
      local_16e = local_88._2_2_;
      local_170 = (undefined2)local_88;
      if (bVar21) goto LAB_0103ebd0;
      goto LAB_0103e524;
    }
    uVar17 = 2;
    local_170 = 2;
    if (local_88 != (byte **)0x0) {
LAB_0103ebd0:
      thunk_FUN_016d3fb4(pcVar5);
      goto LAB_0103e524;
    }
    local_11c = (byte *)0x0;
    local_124 = (byte *)0x0;
    local_128 = &DAT_80000000;
    puVar9 = (undefined4 *)((uint)&local_128 | 4);
    local_120 = &DAT_00000004;
  }
LAB_0103e988:
  local_b8 = *puVar9;
  uStack_b4 = puVar9[1];
  pbStack_b0 = (byte *)puVar9[2];
LAB_0103e994:
  FUN_016dd1aa(&local_88,&local_170,0x44);
  local_44 = local_b8;
  uStack_40 = uStack_b4;
  pbStack_3c = pbStack_b0;
  FUN_016dd1aa(param_1,&local_88,0x50);
  return;
}

