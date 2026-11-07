// FUN_0136ef94 @ 0136ef94 size=2756 calls_out=20 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0136f59c) */
/* WARNING: Removing unreachable block (ram,0x0136f530) */

void FUN_0136ef94(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined1 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  undefined4 uVar17;
  int *piVar18;
  bool bVar19;
  int *local_17c;
  int *local_178;
  int *local_174;
  int local_16c;
  int *local_168;
  undefined4 local_164;
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
  int *local_128;
  int *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined1 local_e1;
  int *local_dc;
  int *local_d8;
  int *local_d4;
  int *local_d0;
  int *local_cc;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  int *piStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  int *local_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *local_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
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
  
  local_e1 = (undefined1)param_2[4];
  local_e8 = *(undefined4 *)((int)param_2 + 0x11);
  local_108 = 1;
  local_10c = 1;
  local_118 = 1;
  local_fc = (undefined1)param_2[7];
  uVar14 = *param_3;
  uVar17 = param_3[1];
  local_e2 = *(undefined1 *)((int)param_2 + 0x17);
  local_f9 = *(undefined1 *)((int)param_2 + 0x1e);
  local_e4 = *(undefined2 *)((int)param_2 + 0x15);
  local_164 = 0;
  local_168 = (int *)&DAT_00000004;
  local_16c = 0;
  local_f0 = 4;
  local_128 = (int *)&DAT_00000004;
  local_138 = (int *)&DAT_00000004;
  local_148 = (int *)&DAT_00000004;
  local_158 = (int *)&DAT_00000004;
  local_fb = *(undefined1 *)((int)param_2 + 0x1d);
  local_ec = 0;
  local_f4 = 0;
  local_f8 = 0;
  local_104 = 0;
  local_110 = 0;
  local_114 = 0;
  local_11c = 0;
  local_120 = 0;
  local_124 = (int *)0x0;
  local_12c = (int *)0x0;
  local_130 = (int *)0x0;
  local_134 = (int *)0x0;
  local_13c = (int *)0x0;
  local_140 = (int *)0x0;
  local_144 = (int *)0x0;
  local_14c = (int *)0x0;
  local_150 = (int *)0x0;
  local_154 = (int *)0x0;
  local_15c = (int *)0x0;
  local_160 = (int *)0x0;
  local_100 = param_2[6];
  local_fa = local_fc;
  FUN_013dec94(&local_68,&local_160,uVar14,uVar17);
  if (local_68 == (int *)&DAT_00000022) {
    local_74 = local_60;
    local_78 = local_64;
    FUN_013eb018(&local_68,&local_f8,uVar14,uVar17,&local_78);
    piVar4 = local_4c;
    piVar2 = local_50;
    piVar15 = local_54;
    piVar18 = local_58;
    piVar16 = local_5c;
    piVar12 = local_60;
    piVar13 = local_64;
    piVar5 = local_68;
    if (local_68 == (int *)&DAT_80000000) {
      FUN_013fbd64(&local_78);
      piVar5 = (int *)&DAT_00000004;
      if (local_16c == 0) {
        FUN_01401574(&local_16c);
        piVar5 = local_168;
      }
      *piVar5 = (int)piVar13;
      piVar5[1] = (int)piVar12;
      piVar5[2] = (int)piVar16;
      piVar5[3] = (int)piVar18;
      piVar5[4] = (int)piVar15;
      piVar5[5] = (int)piVar2;
      piVar5[6] = (int)piVar4;
      local_164 = 1;
      FUN_0136fbfc(&local_160);
      piVar5 = local_168;
      bVar1 = *(byte *)((int)param_2 + 0xb);
      local_c4 = piVar4;
      bVar19 = (bVar1 & 1) != 0;
      local_c8 = piVar2;
      if (bVar19) {
        bVar1 = *(byte *)((int)param_2 + 0xd);
      }
      local_cc = piVar15;
      local_d0 = piVar18;
      local_d4 = piVar16;
      local_d8 = piVar12;
      local_dc = piVar13;
      if (bVar19 && bVar1 != 2) {
        *param_1 = 0x29;
      }
      else {
        if (param_2[8] != 0) {
          puVar8 = &DAT_01892970;
          goto LAB_0136f9dc;
        }
        puVar10 = param_2 + 9;
        param_2[8] = 0xffffffff;
        FUN_013b6168(puVar10);
        uVar6 = param_2[8];
        param_2[8] = uVar6 + 1;
        if (uVar6 != 0xffffffff) {
          puVar8 = &DAT_01892960;
          goto LAB_0136f9dc;
        }
        uVar6 = param_2[1];
        uVar11 = *(undefined1 *)((int)param_2 + 9);
        if ((char)param_2[2] == '\0') {
          uVar11 = 10;
        }
        uVar7 = 0;
        if (*param_2 != 2) {
          uVar7 = *param_2;
        }
        param_2[8] = 0xffffffff;
        param_2[0xc] = uVar6;
        *(byte *)((int)param_2 + 0x5d) = *(byte *)((int)param_2 + 0xb) & 1;
        *(undefined1 *)((int)param_2 + 0x5e) = uVar11;
        param_2[0xb] = uVar7;
        *(byte *)(param_2 + 0x17) =
             *(byte *)((int)param_2 + 10) == 2 | *(byte *)((int)param_2 + 10) & 1;
        if (((uVar7 & 1) == 0) || (param_2[0x16] + param_2[0xf] * 0x10 <= uVar6)) {
          param_2[8] = 0;
          if ((*(byte *)((int)param_2 + 0xb) & 1) == 0) {
            if ((*(uint *)(piVar5[6] + 0x1c) & 1) != 0) goto LAB_0136f3a8;
LAB_0136f338:
            local_c0 = (int *)CONCAT31(local_c0._1_3_,1);
            FUN_0136fe68(&local_68,&local_c0);
            FUN_01370168(&local_160,param_2,&local_68,0,0);
            piVar12 = local_158;
            piVar13 = local_15c;
            if (local_160 != (int *)&DAT_0000002a) {
              param_1[3] = local_154;
              param_1[4] = local_150;
              param_1[5] = local_14c;
              param_1[6] = local_148;
              param_1[7] = local_144;
              param_1[8] = local_140;
              param_1[9] = local_13c;
              param_1[10] = local_138;
              param_1[0xb] = local_134;
              param_1[0xc] = local_130;
              param_1[0xd] = local_12c;
              param_1[0xe] = local_128;
              param_1[0xf] = local_124;
              *param_1 = local_160;
              param_1[1] = local_15c;
              param_1[2] = local_158;
              FUN_013e0514(&local_68);
              FUN_01370b64(&local_68);
              thunk_FUN_016d3fb4(local_50);
              goto LAB_0136f9a0;
            }
            FUN_013e0514(&local_68);
            FUN_01370b64(&local_68);
            thunk_FUN_016d3fb4(local_50);
LAB_0136f444:
            local_84 = piVar5 + 7;
            local_88 = piVar5;
            local_80 = param_2;
            FUN_01370c80(&local_160,&local_88);
            piVar18 = local_158;
            piVar16 = local_15c;
            if (local_160 == (int *)&DAT_0000002b) {
              if (param_2[8] != 0) {
                puVar8 = &DAT_01892980;
                goto LAB_0136f9dc;
              }
              piVar15 = (int *)param_2[0xf];
              param_2[8] = 0xffffffff;
              local_68 = (int *)&DAT_00000008;
              if (piVar15 == (int *)param_2[0xd]) {
                FUN_013c40f0();
              }
              *(undefined4 *)(param_2[0xe] + (int)piVar15 * 0x10) = 8;
              param_2[0xf] = (uint)((int)piVar15 + 1);
              if ((param_2[0xb] != 1) ||
                 ((int *)(param_2[0x16] + (int)((int)piVar15 + 1) * 0x10) <= (int *)param_2[0xc])) {
                param_2[8] = param_2[8] + 1;
                goto LAB_0136f5dc;
              }
              param_2[8] = param_2[8] + 1;
              piVar16 = (int *)param_2[0xc];
              piVar18 = (int *)&DAT_00000027;
            }
            else {
              local_17c = local_158;
              piVar15 = piVar16;
              if (local_160 == (int *)&DAT_0000002a) {
                FUN_01370c80(&local_160,&local_88);
                piVar4 = local_158;
                piVar2 = local_15c;
                if (local_160 == (int *)&DAT_0000002b) {
LAB_0136f5dc:
                  if (param_2[8] != 0) {
LAB_0136f9fc:
                    puVar8 = &DAT_01892940;
LAB_0136f9dc:
                    /* WARNING: Subroutine does not return */
                    FUN_00fb715c(puVar8);
                  }
LAB_0136f5e8:
                  param_2[8] = 0xffffffff;
                  FUN_013b6288(&local_160,puVar10,piVar12,piVar15);
                  uVar6 = param_2[8];
                  param_2[8] = uVar6 + 1;
                  if (local_160 != (int *)&DAT_0000002a) {
                    *param_1 = local_160;
                    param_1[1] = local_15c;
                    param_1[2] = local_158;
                    param_1[3] = local_154;
                    param_1[4] = local_150;
                    param_1[5] = local_14c;
                    param_1[6] = local_148;
                    param_1[7] = local_144;
                    param_1[8] = local_140;
                    param_1[9] = local_13c;
                    param_1[10] = local_138;
                    param_1[0xb] = local_134;
                    param_1[0xc] = local_130;
                    param_1[0xd] = local_12c;
                    param_1[0xe] = local_128;
                    param_1[0xf] = local_124;
                    goto LAB_0136f9a0;
                  }
                  if (uVar6 + 1 != 0) {
                    puVar8 = &DAT_01892950;
                    goto LAB_0136f9dc;
                  }
                  param_2[8] = 0xffffffff;
                  FUN_013b3b10(&local_160,puVar10,piVar15,piVar13);
                  if (local_160 != (int *)&DAT_0000002a) {
                    param_1[2] = local_158;
                    param_1[3] = local_154;
                    param_1[4] = local_150;
                    param_1[5] = local_14c;
                    param_1[6] = local_148;
                    param_1[7] = local_144;
                    param_1[8] = local_140;
                    param_1[9] = local_13c;
                    param_1[10] = local_138;
                    param_1[0xb] = local_134;
                    param_1[0xc] = local_130;
                    param_1[0xd] = local_12c;
                    param_1[0xe] = local_128;
                    param_1[0xf] = local_124;
                    uVar7 = param_2[8];
                    *param_1 = local_160;
                    param_1[1] = local_15c;
                    uVar7 = uVar7 + 1;
                    goto LAB_0136f8bc;
                  }
                  uVar7 = param_2[8];
                  *param_1 = 0x2a;
                  param_1[1] = local_15c;
                  goto LAB_0136f668;
                }
                if (local_160 == (int *)&DAT_0000002a) {
                  if (param_2[8] != 0) {
                    puVar8 = &DAT_018929d0;
                    goto LAB_0136f9dc;
                  }
                  param_2[8] = 0xffffffff;
                  FUN_013b64f8(&local_160,puVar10,0,4,0);
                  piVar15 = local_15c;
                  uVar6 = param_2[8];
                  param_2[8] = uVar6 + 1;
                  if (local_160 == (int *)&DAT_0000002a) {
                    if (uVar6 + 1 != 0) {
                      puVar8 = &DAT_018929a0;
                      goto LAB_0136f9dc;
                    }
                    param_2[8] = 0xffffffff;
                    FUN_013b63b4(&local_160,puVar10);
                    piVar3 = local_15c;
                    param_2[8] = param_2[8] + 1;
                    if ((((local_160 == (int *)&DAT_0000002a) &&
                         (FUN_01371010(&local_160,param_2,piVar15,piVar16),
                         local_160 == (int *)&DAT_0000002a)) &&
                        (FUN_01371010(&local_160,param_2,piVar18,piVar3),
                        local_160 == (int *)&DAT_0000002a)) &&
                       ((FUN_01371010(&local_160,param_2,piVar15,piVar2),
                        local_160 == (int *)&DAT_0000002a &&
                        (FUN_01371010(&local_160,param_2,piVar4,piVar3),
                        local_160 == (int *)&DAT_0000002a)))) {
                      local_78 = local_88;
                      local_74 = local_84;
                      puStack_70 = local_80;
                      do {
                        FUN_01370c80(&local_68,&local_78);
                        piVar16 = local_60;
                        if (local_68 == (int *)&DAT_0000002b) {
                          if (param_2[8] == 0) goto LAB_0136f5e8;
                          goto LAB_0136f9fc;
                        }
                        local_17c = local_60;
                        if (local_68 != (int *)&DAT_0000002a) {
                          local_c0 = local_5c;
                          piStack_bc = local_58;
                          piStack_b8 = local_54;
                          piStack_b4 = local_50;
                          local_b0 = local_4c;
                          piStack_ac = local_48;
                          piStack_a8 = local_44;
                          piStack_a4 = local_40;
                          local_a0 = local_3c;
                          piStack_9c = piStack_38;
                          piStack_98 = piStack_34;
                          piStack_94 = piStack_30;
                          piStack_90 = piStack_2c;
                          piVar16 = local_64;
                          piVar18 = local_68;
                          goto LAB_0136f96c;
                        }
                        FUN_01371010(&local_160,param_2,piVar15,local_64);
                      } while ((local_160 == (int *)&DAT_0000002a) &&
                              (FUN_01371010(&local_160,param_2,piVar16,piVar3),
                              local_160 == (int *)&DAT_0000002a));
                      local_17c = local_158;
                      local_c0 = local_154;
                      piStack_bc = local_150;
                      piStack_b8 = local_14c;
                      piStack_b4 = local_148;
                      local_b0 = local_144;
                      piStack_ac = local_140;
                      piStack_a8 = local_13c;
                      piStack_a4 = local_138;
                      local_a0 = local_134;
                      piStack_9c = local_130;
                      piStack_98 = local_12c;
                      piStack_94 = local_128;
                      piStack_90 = local_124;
                      piVar16 = local_15c;
                      piVar18 = local_160;
                      goto LAB_0136f96c;
                    }
                  }
                  local_b0 = local_144;
                  piStack_ac = local_140;
                  piStack_a8 = local_13c;
                  piStack_a4 = local_138;
                  local_a0 = local_134;
                  piStack_9c = local_130;
                  piStack_98 = local_12c;
                  piStack_94 = local_128;
                  piStack_90 = local_124;
                  piVar16 = local_15c;
                  piVar18 = local_160;
                  local_17c = local_158;
                  local_c0 = local_154;
                  piStack_bc = local_150;
                  piStack_b8 = local_14c;
                  piStack_b4 = local_148;
                }
                else {
                  local_c0 = local_154;
                  piStack_bc = local_150;
                  piStack_b8 = local_14c;
                  piStack_b4 = local_148;
                  local_b0 = local_144;
                  piStack_ac = local_140;
                  piStack_a8 = local_13c;
                  piStack_a4 = local_138;
                  local_a0 = local_134;
                  piStack_9c = local_130;
                  piStack_98 = local_12c;
                  piStack_94 = local_128;
                  piStack_90 = local_124;
                  local_17c = local_158;
                  piVar16 = local_15c;
                  piVar15 = local_15c;
                  piVar18 = local_160;
                  if (local_160 == (int *)&DAT_0000002a) goto LAB_0136f5dc;
                }
              }
              else {
                local_c0 = local_154;
                piStack_bc = local_150;
                piStack_b8 = local_14c;
                piStack_b4 = local_148;
                local_b0 = local_144;
                piStack_ac = local_140;
                piStack_a8 = local_13c;
                piStack_a4 = local_138;
                local_a0 = local_134;
                piStack_9c = local_130;
                piStack_98 = local_12c;
                piStack_94 = local_128;
                piStack_90 = local_124;
                piVar18 = local_160;
                if (local_160 == (int *)&DAT_0000002a) goto LAB_0136f5dc;
              }
            }
LAB_0136f96c:
            param_1[3] = local_c0;
            param_1[4] = piStack_bc;
            param_1[5] = piStack_b8;
            param_1[6] = piStack_b4;
            param_1[7] = local_b0;
            param_1[8] = piStack_ac;
            param_1[9] = piStack_a8;
            param_1[10] = piStack_a4;
            param_1[0xb] = local_a0;
            param_1[0xc] = piStack_9c;
            param_1[0xd] = piStack_98;
            param_1[0xe] = piStack_94;
            param_1[0xf] = piStack_90;
            *param_1 = piVar18;
            param_1[1] = piVar16;
            param_1[2] = local_17c;
            goto LAB_0136f9a0;
          }
          if ((*(byte *)(piVar5[6] + 0x20) & 2) == 0) goto LAB_0136f338;
LAB_0136f3a8:
          piVar12 = (int *)param_2[0xf];
          param_2[8] = 0xffffffff;
          local_15c = (int *)0x0;
          local_160 = (int *)0x0;
          if (piVar12 == (int *)param_2[0xd]) {
            FUN_013c40f0();
            uVar7 = param_2[0xb];
          }
          param_2[0xf] = (uint)((int)piVar12 + 1);
          puVar9 = (undefined4 *)(param_2[0xe] + (int)piVar12 * 0x10);
          *puVar9 = 0;
          puVar9[1] = 0;
          if (((uVar7 & 1) == 0) ||
             (uVar6 = param_2[0xc], param_2[0x16] + (int)((int)piVar12 + 1) * 0x10 <= uVar6)) {
            param_2[8] = param_2[8] + 1;
            piVar13 = piVar12;
            goto LAB_0136f444;
          }
          uVar7 = param_2[8];
          *param_1 = 0x27;
          param_1[1] = uVar6;
LAB_0136f668:
          uVar7 = uVar7 + 1;
        }
        else {
          *param_1 = 0x27;
          param_1[1] = uVar6;
          uVar7 = 0;
        }
LAB_0136f8bc:
        param_2[8] = uVar7;
      }
LAB_0136f9a0:
      FUN_0135fa60(piVar5,1);
      goto LAB_0136f9ac;
    }
    FUN_013fbd64(&local_78);
    local_178 = local_60;
    local_174 = local_64;
    local_17c = local_58;
    local_40 = local_44;
    local_44 = local_48;
    local_48 = local_4c;
    local_64 = piVar5;
    piVar5 = (int *)&DAT_00000022;
  }
  else {
    local_174 = local_60;
    local_178 = local_5c;
    local_17c = local_54;
    local_c0 = local_3c;
    piStack_bc = piStack_38;
    piStack_b8 = piStack_34;
    piStack_b4 = piStack_30;
    local_b0 = piStack_2c;
    local_54 = local_50;
    local_5c = local_58;
    piVar5 = local_68;
    local_50 = local_4c;
  }
  param_1[9] = local_44;
  param_1[10] = local_40;
  param_1[8] = local_48;
  param_1[0xb] = local_c0;
  param_1[0xc] = piStack_bc;
  param_1[0xd] = piStack_b8;
  param_1[0xe] = piStack_b4;
  param_1[0xf] = local_b0;
  param_1[2] = local_174;
  param_1[3] = local_178;
  *param_1 = piVar5;
  param_1[1] = local_64;
  param_1[4] = local_5c;
  param_1[5] = local_17c;
  param_1[6] = local_54;
  param_1[7] = local_50;
  FUN_0136fbfc(&local_160);
  FUN_0135fa60(4,0);
LAB_0136f9ac:
  if (local_16c != 0) {
    thunk_FUN_016d3fb4(local_168);
  }
  return;
}

