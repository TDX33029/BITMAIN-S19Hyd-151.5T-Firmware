// FUN_016cd7c4 @ 016cd7c4 size=2368 calls_out=17 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016cd7c4(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 uVar20;
  int *piVar21;
  int *piVar22;
  bool bVar23;
  int *local_188;
  int *local_184;
  int *local_17c;
  int *local_178;
  int local_174;
  int *local_170;
  undefined4 local_16c;
  int *local_168;
  int *local_164;
  int *local_160;
  int *local_15c;
  int *local_158;
  int *local_154;
  int *local_150;
  int *local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  int *local_13c;
  int *local_138;
  int *local_134;
  int *local_130;
  int *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108;
  undefined1 local_104;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined1 local_e9;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *local_bc;
  int *piStack_b8;
  int *piStack_b4;
  int *local_b0;
  int *local_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *local_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  int *local_88;
  int *local_84;
  uint *local_80;
  int *local_78;
  int *local_74;
  uint *puStack_70;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  
  local_ea = *(undefined1 *)((int)param_2 + 0x17);
  local_101 = *(undefined1 *)((int)param_2 + 0x1e);
  local_e9 = (undefined1)param_2[4];
  local_f0 = *(undefined4 *)((int)param_2 + 0x11);
  local_110 = 1;
  local_114 = 1;
  local_120 = 1;
  local_104 = (undefined1)param_2[7];
  uVar18 = *param_3;
  uVar20 = param_3[1];
  local_ec = *(undefined2 *)((int)param_2 + 0x15);
  local_16c = 0;
  local_170 = (int *)&SUB_00000004;
  local_174 = 0;
  local_f8 = 4;
  local_130 = (int *)&SUB_00000004;
  local_140 = (int *)&SUB_00000004;
  local_150 = (int *)&SUB_00000004;
  local_160 = (int *)&SUB_00000004;
  local_103 = *(undefined1 *)((int)param_2 + 0x1d);
  local_f4 = 0;
  local_fc = 0;
  local_100 = 0;
  local_10c = 0;
  local_118 = 0;
  local_11c = 0;
  local_124 = 0;
  local_128 = 0;
  local_12c = (int *)0x0;
  local_134 = (int *)0x0;
  local_138 = (int *)0x0;
  local_13c = (int *)0x0;
  local_144 = (int *)0x0;
  local_148 = (int *)0x0;
  local_14c = (int *)0x0;
  local_154 = (int *)0x0;
  local_158 = (int *)0x0;
  local_15c = (int *)0x0;
  local_164 = (int *)0x0;
  local_168 = (int *)0x0;
  local_108 = param_2[6];
  local_102 = local_104;
  FUN_016dd884(&local_68,&local_168,uVar18,uVar20);
  if (local_68 == (int *)&DAT_00000022) {
    local_74 = local_60;
    local_78 = local_64;
    FUN_016e6b80(&local_68,&local_100,uVar18,uVar20,&local_78);
    piVar4 = local_4c;
    piVar19 = local_50;
    piVar6 = local_54;
    piVar3 = local_58;
    piVar5 = local_5c;
    piVar22 = local_60;
    piVar21 = local_64;
    local_17c = local_64;
    if (local_68 == (int *)&DAT_80000000) {
      FUN_016f4f78(&local_78);
      piVar7 = (int *)&SUB_00000004;
      if (local_174 == 0) {
        FUN_015f5b48(&local_174);
        piVar7 = local_170;
      }
      *piVar7 = (int)piVar21;
      piVar7[1] = (int)piVar22;
      piVar7[2] = (int)piVar5;
      piVar7[3] = (int)piVar3;
      piVar7[4] = (int)piVar6;
      piVar7[5] = (int)piVar19;
      piVar7[6] = (int)piVar4;
      local_16c = 1;
      FUN_016ce1b4(&local_168);
      piVar7 = local_170;
      bVar2 = *(byte *)((int)param_2 + 0xb);
      bVar23 = (bVar2 & 1) != 0;
      if (bVar23) {
        bVar2 = *(byte *)((int)param_2 + 0xd);
      }
      local_cc = piVar4;
      local_d0 = piVar19;
      local_d4 = piVar6;
      local_d8 = piVar3;
      local_dc = piVar5;
      local_e0 = piVar22;
      local_e4 = piVar21;
      if (bVar23 && bVar2 != 2) {
        *param_1 = 0x29;
        goto LAB_016cdb60;
      }
      if (param_2[8] != 0) {
        puVar10 = &DAT_01d09c38;
        goto LAB_016ce0bc;
      }
      param_2[8] = 0xffffffff;
      FUN_01693d68(param_2 + 9);
      uVar8 = param_2[8];
      param_2[8] = uVar8 + 1;
      if (uVar8 != 0xffffffff) {
        puVar10 = &DAT_01d09c48;
        goto LAB_016ce0bc;
      }
      param_2[8] = 0xffffffff;
      uVar15 = *(undefined1 *)((int)param_2 + 9);
      if ((char)param_2[2] == '\0') {
        uVar15 = 10;
      }
      uVar8 = 0;
      if (*param_2 != 2) {
        uVar8 = *param_2;
      }
      uVar11 = param_2[1];
      param_2[0xc] = uVar11;
      *(byte *)((int)param_2 + 0x5d) = *(byte *)((int)param_2 + 0xb) & 1;
      *(undefined1 *)((int)param_2 + 0x5e) = uVar15;
      param_2[0xb] = uVar8;
      *(byte *)(param_2 + 0x17) =
           *(byte *)((int)param_2 + 10) == 2 | *(byte *)((int)param_2 + 10) & 1;
      if (((uVar8 & 1) == 0) || (param_2[0x16] + param_2[0xf] * 0x10 <= uVar11)) {
        iVar9 = 0x20;
        param_2[8] = 0;
        uVar8 = 2;
        if ((*(byte *)((int)param_2 + 0xb) & 1) == 0) {
          uVar8 = 1;
          iVar9 = 0x1c;
        }
        iVar13 = 0x18;
        do {
          if (iVar13 == 0x34) {
            FUN_016ce364(&local_168,param_2);
            if (local_168 == (int *)&DAT_0000002a) {
              local_178 = local_164;
              piVar21 = local_164;
              goto LAB_016cdc30;
            }
            param_1[3] = local_15c;
            param_1[4] = local_158;
            param_1[5] = local_154;
            param_1[6] = local_150;
            param_1[7] = local_14c;
            param_1[8] = local_148;
            param_1[9] = local_144;
            param_1[10] = local_140;
            param_1[0xb] = local_13c;
            param_1[0xc] = local_138;
            param_1[0xd] = local_134;
            param_1[0xe] = local_130;
            param_1[0xf] = local_12c;
            *param_1 = local_168;
            param_1[1] = local_164;
            param_1[2] = local_160;
            goto LAB_016cdb60;
          }
          piVar21 = (int *)((int)piVar7 + iVar13);
          iVar13 = iVar13 + 0x1c;
        } while ((uVar8 & *(uint *)(*piVar21 + iVar9)) != 0);
        local_c8 = (int *)CONCAT31(local_c8._1_3_,1);
        FUN_016ce3d0(&local_68,&local_c8);
        FUN_016ce6f4(&local_168,param_2,&local_68,0,0);
        piVar21 = local_160;
        if (local_168 != (int *)&DAT_0000002a) {
          param_1[3] = local_15c;
          param_1[4] = local_158;
          param_1[5] = local_154;
          param_1[6] = local_150;
          param_1[7] = local_14c;
          param_1[8] = local_148;
          param_1[9] = local_144;
          param_1[10] = local_140;
          param_1[0xb] = local_13c;
          param_1[0xc] = local_138;
          param_1[0xd] = local_134;
          param_1[0xe] = local_130;
          param_1[0xf] = local_12c;
          *param_1 = local_168;
          param_1[1] = local_164;
          param_1[2] = local_160;
          FUN_016ce25c(&local_68);
          goto LAB_016cdb60;
        }
        local_178 = local_164;
        FUN_016ce25c(&local_68);
LAB_016cdc30:
        local_88 = piVar7;
        local_84 = piVar7 + 7;
        local_80 = param_2;
        FUN_016ceefc(&local_168,&local_88);
        piVar5 = local_160;
        piVar22 = local_164;
        if (local_168 == (int *)&DAT_0000002b) {
          FUN_016cf04c(&local_c8,param_2);
          piVar22 = local_c8;
LAB_016cdf08:
          piVar19 = local_c4;
          if (piVar22 == (int *)&DAT_0000002a) {
LAB_016cdf14:
            FUN_016ced90(&local_168,param_2,piVar21,piVar19);
            if (local_168 != (int *)&DAT_0000002a) {
              puVar12 = (undefined4 *)((uint)&local_168 | 4);
              uVar18 = puVar12[1];
              uVar20 = puVar12[2];
              uVar16 = puVar12[3];
              uVar17 = puVar12[4];
              param_1[1] = *puVar12;
              param_1[2] = uVar18;
              param_1[3] = uVar20;
              param_1[4] = uVar16;
              param_1[5] = uVar17;
              uVar18 = puVar12[6];
              uVar20 = puVar12[7];
              uVar16 = puVar12[8];
              uVar17 = puVar12[9];
              param_1[6] = puVar12[5];
              param_1[7] = uVar18;
              param_1[8] = uVar20;
              param_1[9] = uVar16;
              param_1[10] = uVar17;
              uVar18 = puVar12[0xb];
              uVar20 = puVar12[0xc];
              uVar16 = puVar12[0xd];
              uVar17 = puVar12[0xe];
              param_1[0xb] = puVar12[10];
              param_1[0xc] = uVar18;
              param_1[0xd] = uVar20;
              param_1[0xe] = uVar16;
              param_1[0xf] = uVar17;
              *param_1 = local_168;
              goto LAB_016cdb60;
            }
            if (param_2[8] != 0) {
              puVar10 = &DAT_01d09c58;
LAB_016ce0bc:
              FUN_01306fc8(puVar10);
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x16ce0c0);
              (*pcVar1)();
            }
            param_2[8] = 0xffffffff;
            FUN_01691e64(&local_168,param_2 + 9,piVar19,local_178);
            if (local_168 == (int *)&DAT_0000002a) {
              uVar8 = param_2[8] + 1;
              *param_1 = 0x2a;
              param_1[1] = local_164;
            }
            else {
              param_1[2] = local_160;
              param_1[3] = local_15c;
              param_1[4] = local_158;
              param_1[5] = local_154;
              param_1[6] = local_150;
              param_1[7] = local_14c;
              param_1[8] = local_148;
              param_1[9] = local_144;
              param_1[10] = local_140;
              param_1[0xb] = local_13c;
              param_1[0xc] = local_138;
              param_1[0xd] = local_134;
              param_1[0xe] = local_130;
              param_1[0xf] = local_12c;
              uVar8 = param_2[8];
              *param_1 = local_168;
              param_1[1] = local_164;
              uVar8 = uVar8 + 1;
            }
            goto LAB_016cda78;
          }
        }
        else {
          if (local_168 != (int *)&DAT_0000002a) {
            local_bc = local_15c;
            piStack_b8 = local_158;
            piStack_b4 = local_154;
            local_b0 = local_150;
            local_ac = local_14c;
            piStack_a8 = local_148;
            piStack_a4 = local_144;
            piStack_a0 = local_140;
            local_9c = local_13c;
            piStack_98 = local_138;
            piStack_94 = local_134;
            piStack_90 = local_130;
            piStack_8c = local_12c;
            local_c0 = local_160;
            local_c4 = local_164;
            piVar22 = local_168;
            goto LAB_016cdf08;
          }
          FUN_016ceefc(&local_168);
          piVar6 = local_160;
          piVar3 = local_164;
          if (local_168 == (int *)&DAT_0000002b) {
            local_c4 = piVar22;
            local_c0 = piVar5;
            piVar22 = (int *)&DAT_0000002a;
            goto LAB_016cdf08;
          }
          if (local_168 != (int *)&DAT_0000002a) {
            local_bc = local_15c;
            piStack_b8 = local_158;
            piStack_b4 = local_154;
            local_b0 = local_150;
            local_ac = local_14c;
            piStack_a8 = local_148;
            piStack_a4 = local_144;
            piStack_a0 = local_140;
            local_9c = local_13c;
            piStack_98 = local_138;
            piStack_94 = local_134;
            piStack_90 = local_130;
            piStack_8c = local_12c;
            local_c4 = local_164;
            local_c0 = local_160;
            piVar22 = local_168;
            goto LAB_016cdf08;
          }
          FUN_016cf0f8(&local_168,param_2);
          piVar19 = local_164;
          if (local_168 == (int *)&DAT_0000002a) {
            FUN_016ce364(&local_168,param_2);
            piVar4 = local_164;
            if (local_168 == (int *)&DAT_0000002a) {
              FUN_016ced90(&local_168,param_2,piVar19,piVar22);
              if ((((local_168 == (int *)&DAT_0000002a) &&
                   (FUN_016ced90(&local_168,param_2,piVar5,piVar4),
                   local_168 == (int *)&DAT_0000002a)) &&
                  (FUN_016ced90(&local_168,param_2,piVar19,piVar3),
                  local_168 == (int *)&DAT_0000002a)) &&
                 (FUN_016ced90(&local_168,param_2,piVar6,piVar4), local_168 == (int *)&DAT_0000002a)
                 ) {
                local_78 = local_88;
                local_74 = local_84;
                puStack_70 = local_80;
                do {
                  FUN_016ceefc(&local_68,&local_78);
                  piVar22 = local_60;
                  if (local_68 == (int *)&DAT_0000002b) goto LAB_016cdf14;
                  if (local_68 != (int *)&DAT_0000002a) {
                    local_bc = local_5c;
                    piStack_b8 = local_58;
                    piStack_b4 = local_54;
                    local_b0 = local_50;
                    local_ac = local_4c;
                    piStack_a8 = local_48;
                    piStack_a4 = local_44;
                    piStack_a0 = local_40;
                    local_9c = local_3c;
                    piStack_98 = piStack_38;
                    piStack_94 = piStack_34;
                    piStack_90 = piStack_30;
                    piStack_8c = piStack_2c;
                    local_c0 = local_60;
                    local_c4 = local_64;
                    piVar22 = local_68;
                    goto LAB_016ce070;
                  }
                  FUN_016ced90(&local_168,param_2,piVar19);
                } while ((local_168 == (int *)&DAT_0000002a) &&
                        (FUN_016ced90(&local_168,param_2,piVar22,piVar4),
                        local_168 == (int *)&DAT_0000002a));
              }
              puVar12 = (undefined4 *)((uint)&local_168 | 4);
              uVar18 = puVar12[1];
              uVar20 = puVar12[2];
              uVar16 = puVar12[3];
              uVar17 = puVar12[4];
              puVar14 = (undefined4 *)((uint)&local_c8 | 4);
              *puVar14 = *puVar12;
              puVar14[1] = uVar18;
              puVar14[2] = uVar20;
              puVar14[3] = uVar16;
              puVar14[4] = uVar17;
              uVar18 = puVar12[6];
              uVar20 = puVar12[7];
              uVar16 = puVar12[8];
              uVar17 = puVar12[9];
              puVar14[5] = puVar12[5];
              puVar14[6] = uVar18;
              puVar14[7] = uVar20;
              puVar14[8] = uVar16;
              puVar14[9] = uVar17;
              uVar18 = puVar12[0xb];
              uVar20 = puVar12[0xc];
              uVar16 = puVar12[0xd];
              uVar17 = puVar12[0xe];
              puVar14[10] = puVar12[10];
              puVar14[0xb] = uVar18;
              puVar14[0xc] = uVar20;
              puVar14[0xd] = uVar16;
              puVar14[0xe] = uVar17;
              piVar22 = local_168;
            }
            else {
              local_c0 = local_160;
              local_bc = local_15c;
              piStack_b8 = local_158;
              piStack_b4 = local_154;
              local_b0 = local_150;
              local_ac = local_14c;
              piStack_a8 = local_148;
              piStack_a4 = local_144;
              piStack_a0 = local_140;
              local_9c = local_13c;
              piStack_98 = local_138;
              piStack_94 = local_134;
              piStack_90 = local_130;
              piStack_8c = local_12c;
              local_c4 = local_164;
              piVar22 = local_168;
            }
          }
          else {
            local_c0 = local_160;
            local_bc = local_15c;
            piStack_b8 = local_158;
            piStack_b4 = local_154;
            local_b0 = local_150;
            local_ac = local_14c;
            piStack_a8 = local_148;
            piStack_a4 = local_144;
            piStack_a0 = local_140;
            local_9c = local_13c;
            piStack_98 = local_138;
            piStack_94 = local_134;
            piStack_90 = local_130;
            piStack_8c = local_12c;
            local_c4 = local_164;
            piVar22 = local_168;
          }
        }
LAB_016ce070:
        param_1[3] = local_bc;
        param_1[4] = piStack_b8;
        param_1[5] = piStack_b4;
        param_1[6] = local_b0;
        param_1[7] = local_ac;
        param_1[8] = piStack_a8;
        param_1[9] = piStack_a4;
        param_1[10] = piStack_a0;
        param_1[0xb] = local_9c;
        param_1[0xc] = piStack_98;
        param_1[0xd] = piStack_94;
        param_1[0xe] = piStack_90;
        param_1[0xf] = piStack_8c;
        *param_1 = piVar22;
        param_1[1] = local_c4;
        param_1[2] = local_c0;
      }
      else {
        *param_1 = 0x27;
        param_1[1] = uVar11;
        uVar8 = 0;
LAB_016cda78:
        param_2[8] = uVar8;
      }
      goto LAB_016cdb60;
    }
    FUN_016f4f78(&local_78);
    local_188 = local_60;
    local_184 = local_54;
    local_40 = local_44;
    local_44 = local_48;
    local_54 = local_58;
    local_48 = local_4c;
    local_64 = local_68;
    local_68 = (int *)&DAT_00000022;
  }
  else {
    local_188 = local_5c;
    local_17c = local_60;
    local_184 = local_50;
    local_c8 = local_3c;
    local_c4 = piStack_38;
    local_c0 = piStack_34;
    local_bc = piStack_30;
    piStack_b8 = piStack_2c;
    local_5c = local_58;
    local_50 = local_4c;
  }
  param_1[9] = local_44;
  param_1[10] = local_40;
  param_1[8] = local_48;
  param_1[0xb] = local_c8;
  param_1[0xc] = local_c4;
  param_1[0xd] = local_c0;
  param_1[0xe] = local_bc;
  param_1[0xf] = piStack_b8;
  param_1[2] = local_17c;
  param_1[3] = local_188;
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[4] = local_5c;
  param_1[5] = local_54;
  param_1[6] = local_184;
  param_1[7] = local_50;
  FUN_016ce1b4(&local_168);
LAB_016cdb60:
  FUN_01334e1c(&local_174);
  return;
}

