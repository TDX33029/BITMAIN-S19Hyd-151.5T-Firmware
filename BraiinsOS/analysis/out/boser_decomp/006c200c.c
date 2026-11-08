// FUN_006c200c @ 006c200c size=2304 calls_out=13 calls_in=1
// strings: assertion failed: edge.height == self.node.height - 1

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006c200c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *unaff_r10;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  int *piVar19;
  undefined8 uVar20;
  int local_1fc;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  uint local_1e4;
  int *local_1e0;
  int local_1dc [2];
  int *local_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int local_19c;
  int *piStack_198;
  int local_194;
  int iStack_190;
  int *local_18c;
  int local_188;
  int iStack_184;
  int *piStack_180;
  int local_17c;
  int local_178;
  int *piStack_174;
  int iStack_170;
  int iStack_16c;
  int *piStack_168;
  int local_160;
  int local_15c;
  int *local_158;
  int iStack_154;
  int local_150;
  int *local_14c;
  int iStack_148;
  int iStack_144;
  int *local_140;
  int iStack_13c;
  int local_138;
  int *piStack_134;
  int iStack_130;
  int iStack_12c;
  int *piStack_128;
  int local_124;
  int local_120;
  int iStack_11c;
  int local_118;
  int local_114;
  int *local_110;
  int iStack_10c;
  int iStack_108;
  int *piStack_104;
  int local_100;
  int iStack_fc;
  int *piStack_f8;
  int iStack_f4;
  int iStack_f0;
  int *piStack_ec;
  int local_e8;
  int local_e4;
  int *local_e0;
  int local_dc;
  int iStack_d8;
  int *local_d4;
  int local_d0;
  int local_cc;
  int *piStack_c8;
  int iStack_c4;
  int local_c0;
  int *local_bc;
  int iStack_b8;
  int iStack_b4;
  int *piStack_b0;
  int iStack_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int *local_90;
  int iStack_8c;
  int local_88;
  int *local_84;
  int local_80;
  int iStack_7c;
  int *piStack_78;
  int iStack_74;
  int local_70;
  int *piStack_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  int iStack_5c;
  int local_58;
  int *piStack_54;
  int iStack_50;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  int local_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  
  local_1f0 = *param_2;
  if (local_1f0 != 0) {
    uVar15 = param_3[2];
    iVar11 = param_2[1];
    iVar3 = param_3[1];
    do {
      iVar12 = local_1f0 + 0x214;
      uVar1 = *(ushort *)(local_1f0 + 0x29a);
      unaff_r10 = (int *)&DAT_ffffffff;
      iVar13 = (int)(uint)uVar1 * 0xc;
      do {
        if (iVar13 == 0) {
          unaff_r10 = (int *)(uint)uVar1;
          goto LAB_006c20c8;
        }
        uVar10 = *(uint *)(iVar12 + 8);
        uVar6 = uVar10;
        if (uVar15 < uVar10) {
          uVar6 = uVar15;
        }
        iVar4 = FUN_01bed842(iVar3,*(undefined4 *)(iVar12 + 4),uVar6);
        if (iVar4 == 0) {
          iVar4 = uVar15 - uVar10;
        }
        iVar13 = iVar13 + -0xc;
        unaff_r10 = (int *)((int)unaff_r10 + 1);
        iVar12 = iVar12 + 0xc;
      } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
      if (0 < iVar4 == iVar4 < 0) {
        FUN_019bb7e0(*param_3,iVar3);
        goto LAB_006c211c;
      }
LAB_006c20c8:
      if (iVar11 == 0) goto LAB_006c2264;
      iVar11 = iVar11 + -1;
      local_1f0 = *(int *)(local_1f0 + (int)unaff_r10 * 4 + 0x2a0);
    } while( true );
  }
  local_1f0 = param_3[1];
  iVar11 = 0;
  local_1ec = *param_3;
  uVar15 = param_3[2];
LAB_006c210c:
  if (local_1ec == -0x80000000) {
    unaff_r10 = param_2;
LAB_006c211c:
    piVar17 = (int *)(local_1f0 + (int)unaff_r10 * 0x30);
    iVar3 = piVar17[1];
    iVar11 = piVar17[2];
    iVar13 = piVar17[3];
    iVar12 = piVar17[4];
    iVar4 = piVar17[5];
    *param_1 = *piVar17;
    param_1[1] = iVar3;
    param_1[2] = iVar11;
    param_1[3] = iVar13;
    param_1[4] = iVar12;
    param_1[5] = iVar4;
    iVar3 = piVar17[7];
    iVar11 = piVar17[8];
    iVar13 = piVar17[9];
    iVar12 = piVar17[10];
    iVar4 = piVar17[0xb];
    param_1[6] = piVar17[6];
    param_1[7] = iVar3;
    param_1[8] = iVar11;
    param_1[9] = iVar13;
    param_1[10] = iVar12;
    param_1[0xb] = iVar4;
    iVar3 = param_4[1];
    iVar11 = param_4[2];
    iVar13 = param_4[3];
    iVar12 = param_4[4];
    iVar4 = param_4[5];
    *piVar17 = *param_4;
    piVar17[1] = iVar3;
    piVar17[2] = iVar11;
    piVar17[3] = iVar13;
    piVar17[4] = iVar12;
    piVar17[5] = iVar4;
    iVar3 = param_4[7];
    iVar11 = param_4[8];
    iVar13 = param_4[9];
    iVar12 = param_4[10];
    iVar4 = param_4[0xb];
    piVar17[6] = param_4[6];
    piVar17[7] = iVar3;
    piVar17[8] = iVar11;
    piVar17[9] = iVar13;
    piVar17[10] = iVar12;
    piVar17[0xb] = iVar4;
  }
  else {
    local_1dc[1] = 0;
    local_1e8 = local_1f0;
    local_1d0 = *param_4;
    iStack_1cc = param_4[1];
    iStack_1c8 = param_4[2];
    iStack_1c4 = param_4[3];
    iStack_1c0 = param_4[4];
    iStack_1bc = param_4[5];
    local_1b8 = param_4[6];
    iStack_1b4 = param_4[7];
    iStack_1b0 = param_4[8];
    iStack_1ac = param_4[9];
    iStack_1a8 = param_4[10];
    iStack_1a4 = param_4[0xb];
    local_1e4 = uVar15;
    local_1e0 = param_2;
    local_1dc[0] = iVar11;
    local_1d4 = unaff_r10;
    if (iVar11 == 0) {
      iVar3 = FUN_006c8e48();
      *(undefined2 *)(iVar3 + 0x29a) = 0;
      *param_2 = iVar3;
      *(undefined4 *)(iVar3 + 0x210) = 0;
      param_2[1] = 0;
      local_e8 = *param_4;
      local_e4 = param_4[1];
      local_e0 = (int *)param_4[2];
      local_dc = param_4[3];
      iStack_d8 = param_4[4];
      local_d4 = (int *)param_4[5];
      local_d0 = param_4[6];
      local_cc = param_4[7];
      piStack_c8 = (int *)param_4[8];
      iStack_c4 = param_4[9];
      local_c0 = param_4[10];
      local_bc = (int *)param_4[0xb];
      FUN_006b1f64(&local_98,iVar3,&local_1ec);
    }
    else {
      local_58 = *param_4;
      piStack_54 = (int *)param_4[1];
      iStack_50 = param_4[2];
      iStack_4c = param_4[3];
      piStack_48 = (int *)param_4[4];
      iStack_44 = param_4[5];
      local_40 = param_4[6];
      piStack_3c = (int *)param_4[7];
      iStack_38 = param_4[8];
      iStack_34 = param_4[9];
      piStack_30 = (int *)param_4[10];
      iStack_2c = param_4[0xb];
      puVar16 = (ushort *)(iVar11 + 0x29a);
      if (*puVar16 < 0xb) {
        FUN_006b23c0(&local_e8,local_1dc,&local_1ec,param_4);
      }
      else {
        uVar15 = 4;
        bVar2 = false;
        piVar17 = unaff_r10;
        if (&SUB_00000004 < unaff_r10) {
          if (unaff_r10 == (int *)&DAT_00000005) {
            uVar15 = 5;
          }
          else {
            if (unaff_r10 == (int *)&DAT_00000006) {
              uVar15 = 5;
              piVar17 = (int *)0x0;
            }
            else {
              piVar17 = (int *)((int)unaff_r10 + -7);
              uVar15 = 6;
            }
            bVar2 = true;
          }
        }
        local_1fc = FUN_006c8e48();
        *(undefined2 *)(local_1fc + 0x29a) = 0;
        *(undefined4 *)(local_1fc + 0x210) = 0;
        piVar5 = (int *)(iVar11 + 0x214 + uVar15 * 0xc);
        iVar3 = *piVar5;
        puVar18 = (undefined4 *)(iVar11 + uVar15 * 0x30);
        iVar13 = piVar5[1];
        iVar12 = piVar5[2];
        uVar6 = ~uVar15 + (uint)*puVar16;
        *(undefined2 *)(local_1fc + 0x29a) = (short)uVar6;
        local_1a0 = *puVar18;
        local_19c = puVar18[1];
        piStack_198 = (int *)puVar18[2];
        local_194 = puVar18[3];
        iStack_190 = puVar18[4];
        local_18c = (int *)puVar18[5];
        local_188 = puVar18[6];
        iStack_184 = puVar18[7];
        piStack_180 = (int *)puVar18[8];
        local_17c = puVar18[9];
        local_178 = puVar18[10];
        piStack_174 = (int *)puVar18[0xb];
        if (0xb < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar6,0xb,&DAT_01d2ff10);
        }
        FUN_01bed4e2(local_1fc + 0x214,iVar11 + 0x214 + (uVar15 + 1) * 0xc,uVar6 * 0xc);
        FUN_01bed4e2(local_1fc,iVar11 + (uVar15 + 1) * 0x30,uVar6 * 0x30);
        *puVar16 = (ushort)uVar15;
        puVar18 = (undefined4 *)((uint)&local_160 | 4);
        *puVar18 = local_1a0;
        puVar18[1] = local_19c;
        puVar18[2] = piStack_198;
        puVar18[3] = local_194;
        puVar18[4] = iStack_190;
        puVar18[5] = local_18c;
        puVar18[6] = local_188;
        puVar18[7] = iStack_184;
        puVar18[8] = piStack_180;
        puVar18[9] = local_17c;
        puVar18[10] = local_178;
        puVar18[0xb] = piStack_174;
        local_dc = local_160;
        iStack_d8 = local_15c;
        local_d4 = local_158;
        local_d0 = iStack_154;
        local_cc = local_150;
        piStack_c8 = local_14c;
        iStack_c4 = iStack_148;
        local_c0 = iStack_144;
        local_bc = local_140;
        iStack_b8 = iStack_13c;
        iStack_b4 = local_138;
        piStack_b0 = piStack_134;
        iStack_ac = iStack_130;
        local_9c = 0;
        local_a4 = 0;
        local_114 = 0;
        local_118 = local_1fc;
        if (!bVar2) {
          local_118 = iVar11;
        }
        local_110 = piVar17;
        local_e8 = iVar3;
        local_e4 = iVar13;
        local_e0 = (int *)iVar12;
        local_a8 = iVar11;
        local_a0 = local_1fc;
        FUN_006b23c0(&local_160,&local_118,&local_1ec,param_4);
        piVar17 = (int *)((uint)&local_e8 | 4);
        local_1a0 = *piVar17;
        local_19c = piVar17[1];
        piStack_198 = (int *)piVar17[2];
        local_194 = piVar17[3];
        iStack_190 = piVar17[4];
        local_18c = (int *)piVar17[5];
        local_188 = piVar17[6];
        iStack_184 = piVar17[7];
        piStack_180 = (int *)piVar17[8];
        local_17c = piVar17[9];
        local_178 = piVar17[10];
        piStack_174 = (int *)piVar17[0xb];
        iStack_170 = piVar17[0xc];
        iStack_16c = piVar17[0xd];
        piStack_168 = (int *)piVar17[0xe];
        if (iVar3 != -0x80000000) {
          iVar13 = *(int *)(iVar11 + 0x210);
          local_98 = local_1a0;
          local_94 = local_19c;
          local_90 = piStack_198;
          iStack_8c = local_194;
          local_88 = iStack_190;
          local_84 = local_18c;
          local_80 = local_188;
          iStack_7c = iStack_184;
          piStack_78 = piStack_180;
          iStack_74 = local_17c;
          local_70 = local_178;
          piStack_6c = piStack_174;
          iStack_68 = iStack_170;
          iStack_64 = iStack_16c;
          piStack_60 = piStack_168;
          if (iVar13 == 0) {
            iVar12 = 0;
            local_a4 = 0;
          }
          else {
            iVar4 = 0;
            iVar12 = 0;
            do {
              uVar15 = (uint)*(ushort *)(iVar11 + 0x298);
              local_120 = local_1a0;
              iStack_11c = local_19c;
              local_118 = local_194;
              local_114 = iStack_190;
              local_110 = local_18c;
              iStack_10c = local_188;
              iStack_108 = iStack_184;
              piStack_104 = piStack_180;
              local_100 = local_17c;
              iStack_fc = local_178;
              piStack_f8 = piStack_174;
              iStack_f4 = iStack_170;
              iStack_f0 = iStack_16c;
              piStack_ec = piStack_168;
              local_124 = iVar3;
              if (iVar12 != iVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec("assertion failed: edge.height == self.node.height - 1",0x35,
                             &DAT_01d2ff30);
              }
              puVar16 = (ushort *)(iVar13 + 0x29a);
              uVar1 = *puVar16;
              if (uVar1 < 0xb) {
                local_e8 = local_194;
                local_e4 = iStack_190;
                local_e0 = local_18c;
                local_dc = local_188;
                iStack_d8 = iStack_184;
                local_d4 = piStack_180;
                local_d0 = local_17c;
                local_cc = local_178;
                piStack_c8 = piStack_174;
                iStack_c4 = iStack_170;
                local_c0 = iStack_16c;
                local_bc = piStack_168;
                FUN_006b28ac(iVar13,uVar15,&local_124,&local_e8,local_1fc);
                goto LAB_006c2410;
              }
              uVar6 = 4;
              piVar5 = &local_a8;
              if (4 < uVar15) {
                if (uVar15 == 5) {
                  uVar6 = 5;
                }
                else {
                  if (uVar15 == 6) {
                    uVar15 = 0;
                    uVar6 = 5;
                  }
                  else {
                    uVar15 = uVar15 - 7;
                    uVar6 = 6;
                  }
                  piVar5 = &local_a0;
                }
              }
              iVar3 = FUN_006c8e08();
              puVar14 = (ushort *)(iVar3 + 0x29a);
              *puVar14 = 0;
              *(undefined4 *)(iVar3 + 0x210) = 0;
              piVar7 = (int *)(iVar13 + 0x214 + uVar6 * 0xc);
              iVar11 = *piVar7;
              piVar19 = (int *)(iVar13 + uVar6 * 0x30);
              iVar12 = piVar7[1];
              iVar8 = piVar7[2];
              uVar10 = ~uVar6 + (uint)*puVar16;
              *puVar14 = (ushort)uVar10;
              local_58 = *piVar19;
              piStack_54 = (int *)piVar19[1];
              iStack_50 = piVar19[2];
              iStack_4c = piVar19[3];
              piStack_48 = (int *)piVar19[4];
              iStack_44 = piVar19[5];
              local_40 = piVar19[6];
              piStack_3c = (int *)piVar19[7];
              iStack_38 = piVar19[8];
              iStack_34 = piVar19[9];
              piStack_30 = (int *)piVar19[10];
              iStack_2c = piVar19[0xb];
              if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,uVar10,0xb,&DAT_01d2ff10);
              }
              FUN_01bed4e2(iVar3 + 0x214,iVar13 + 0x214 + (uVar6 + 1) * 0xc,uVar10 * 0xc);
              FUN_01bed4e2(iVar3,iVar13 + (uVar6 + 1) * 0x30,uVar10 * 0x30);
              *puVar16 = (ushort)uVar6;
              local_88 = local_58;
              local_84 = piStack_54;
              local_80 = iStack_50;
              iStack_7c = iStack_4c;
              piStack_78 = piStack_48;
              iStack_74 = iStack_44;
              local_70 = local_40;
              piStack_6c = piStack_3c;
              iStack_68 = iStack_38;
              iStack_64 = iStack_34;
              piStack_60 = piStack_30;
              iStack_5c = iStack_2c;
              uVar10 = (uint)*puVar14;
              iVar9 = uVar10 + 1;
              local_98 = iVar11;
              local_94 = iVar12;
              local_90 = (int *)iVar8;
              if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,iVar9,0xc,&DAT_01d2ff20);
              }
              if (uVar1 - uVar6 != iVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
              }
              FUN_01bed4e2(iVar3 + 0x2a0,iVar13 + uVar6 * 4 + 0x2a4,iVar9 * 4);
              uVar6 = 0;
              do {
                iVar11 = *(int *)(iVar3 + 0x2a0 + uVar6 * 4);
                *(short *)(iVar11 + 0x298) = (short)uVar6;
                *(int *)(iVar11 + 0x210) = iVar3;
                if (uVar10 <= uVar6) break;
                uVar6 = uVar6 + 1;
              } while (uVar6 <= uVar10);
              local_e8 = local_98;
              local_e4 = local_94;
              local_e0 = local_90;
              local_dc = iStack_8c;
              iStack_d8 = local_88;
              local_d4 = local_84;
              local_d0 = local_80;
              local_cc = iStack_7c;
              piStack_c8 = piStack_78;
              iStack_c4 = iStack_74;
              local_c0 = local_70;
              local_bc = piStack_6c;
              iStack_b8 = iStack_68;
              iStack_b4 = iStack_64;
              piStack_b0 = piStack_60;
              iStack_ac = iStack_5c;
              local_98 = local_194;
              local_94 = iStack_190;
              local_90 = local_18c;
              iStack_8c = local_188;
              local_88 = iStack_184;
              local_84 = piStack_180;
              local_80 = local_17c;
              iStack_7c = local_178;
              piStack_78 = piStack_174;
              iStack_74 = iStack_170;
              local_70 = iStack_16c;
              piStack_6c = piStack_168;
              local_a8 = iVar13;
              local_a4 = iVar4 + 1;
              local_a0 = iVar3;
              local_9c = iVar4 + 1;
              FUN_006b28ac(*piVar5,uVar15,&local_124,&local_98,local_1fc);
              local_1a0 = *piVar17;
              local_19c = piVar17[1];
              piStack_198 = (int *)piVar17[2];
              local_194 = piVar17[3];
              iStack_190 = piVar17[4];
              local_18c = (int *)piVar17[5];
              local_188 = piVar17[6];
              iStack_184 = piVar17[7];
              piStack_180 = (int *)piVar17[8];
              local_17c = piVar17[9];
              local_178 = piVar17[10];
              piStack_174 = (int *)piVar17[0xb];
              iStack_170 = piVar17[0xc];
              iStack_16c = piVar17[0xd];
              piStack_168 = (int *)piVar17[0xe];
              if (local_e8 == -0x80000000) goto LAB_006c2410;
              local_1fc = local_a0;
              iVar13 = *(int *)(local_a8 + 0x210);
              iVar4 = local_a4;
              iVar3 = local_e8;
              iVar12 = local_9c;
              iVar11 = local_a8;
              local_160 = local_1a0;
              local_15c = local_19c;
              local_158 = piStack_198;
              iStack_154 = local_194;
              local_150 = iStack_190;
              local_14c = local_18c;
              iStack_148 = local_188;
              iStack_144 = iStack_184;
              local_140 = piStack_180;
              iStack_13c = local_17c;
              local_138 = local_178;
              piStack_134 = piStack_174;
              iStack_130 = iStack_170;
              iStack_12c = iStack_16c;
              piStack_128 = piStack_168;
            } while (iVar13 != 0);
          }
          *piVar17 = local_1a0;
          piVar17[1] = local_19c;
          piVar17[2] = (int)piStack_198;
          piVar17[3] = local_194;
          piVar17[4] = iStack_190;
          piVar17[5] = (int)local_18c;
          piVar17[6] = local_188;
          piVar17[7] = iStack_184;
          piVar17[8] = (int)piStack_180;
          piVar17[9] = local_17c;
          piVar17[10] = local_178;
          piVar17[0xb] = (int)piStack_174;
          piVar17[0xc] = iStack_170;
          piVar17[0xd] = iStack_16c;
          piVar17[0xe] = (int)piStack_168;
          local_a0 = local_1fc;
          local_e8 = iVar3;
          local_a8 = iVar11;
          local_9c = iVar12;
          if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fee0);
          }
          uVar20 = FUN_006b2358(*param_2,param_2[1]);
          local_158 = (int *)local_19c;
          local_15c = local_1a0;
          *(undefined8 *)param_2 = uVar20;
          local_98 = local_194;
          local_94 = iStack_190;
          local_90 = local_18c;
          iStack_8c = local_188;
          local_88 = iStack_184;
          local_84 = piStack_180;
          local_80 = local_17c;
          iStack_7c = local_178;
          piStack_78 = piStack_174;
          iStack_74 = iStack_170;
          local_70 = iStack_16c;
          piStack_6c = piStack_168;
          local_160 = iVar3;
          FUN_006b227c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),&local_160,&local_98,local_1fc,
                       iVar12);
        }
      }
    }
LAB_006c2410:
    param_2[2] = param_2[2] + 1;
    param_1[4] = -0x7ffffff9;
  }
  return;
LAB_006c2264:
  local_1ec = *param_3;
  iVar11 = local_1f0;
  local_1f0 = iVar3;
  goto LAB_006c210c;
}

