// FUN_01ae38ac @ 01ae38ac size=2148 calls_out=18 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01ae38ac(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *unaff_r6;
  int *unaff_r9;
  int *piVar10;
  int extraout_r12;
  int extraout_r12_00;
  int iVar11;
  int extraout_r12_01;
  int *piVar12;
  int iVar13;
  bool bVar14;
  int local_18c;
  int local_188;
  int *local_184;
  undefined3 local_180;
  undefined1 uStack_17d;
  undefined3 uStack_17c;
  int *local_178;
  int *local_174;
  int *local_170;
  int *piStack_16c;
  int *local_168;
  int *local_164;
  int local_160;
  int local_15c;
  int local_154;
  int *local_150;
  int *piStack_14c;
  int *local_148;
  int *piStack_144;
  int *local_140;
  int *piStack_13c;
  int iStack_138;
  int local_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int local_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int local_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  int *local_d0;
  int *piStack_cc;
  int *local_c8;
  int *piStack_c4;
  int *local_c0;
  int *piStack_bc;
  int iStack_b8;
  int local_b4;
  int *local_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int **local_98 [2];
  int *local_90;
  int *local_8c;
  int *local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *piStack_64;
  int *piStack_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar5 = *(uint *)(param_2 + 0x30);
  uVar2 = *(uint *)(param_2 + 0x58);
  if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d30110);
  }
  if (uVar5 - uVar2 == *(int *)(param_2 + 0x18)) {
    if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,uVar5,&DAT_01d30120);
    }
    piVar10 = (int *)(*(int *)(param_2 + 0x2c) + uVar2 * 0x20);
    if (*piVar10 != -0x7ffffffd) {
      FUN_01ae4b70(&local_130,piVar10);
      if (local_130 == 2) {
        unaff_r9 = (int *)&DAT_00000008;
        piVar8 = (int *)0x0;
        piVar6 = (int *)0x0;
      }
      else {
        unaff_r9 = (int *)FUN_01298504(0xa0,8);
        if (unaff_r9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(8,0xa0);
        }
        iVar13 = 0x28;
        *unaff_r9 = local_130;
        unaff_r9[1] = iStack_12c;
        unaff_r9[2] = iStack_128;
        unaff_r9[3] = iStack_124;
        unaff_r9[4] = iStack_120;
        unaff_r9[5] = local_11c;
        unaff_r9[6] = iStack_118;
        unaff_r9[7] = iStack_114;
        unaff_r9[8] = iStack_110;
        unaff_r9[9] = iStack_10c;
        local_68 = (int *)&DAT_00000001;
        local_70 = (int *)&SUB_00000004;
        local_6c = unaff_r9;
        while( true ) {
          piVar8 = local_68;
          FUN_01ae4b70(&local_108,piVar10);
          if (local_108 == 2) break;
          if (piVar8 == local_70) {
            FUN_006520b4(&local_70,piVar8,1,8,0x28);
            unaff_r9 = local_6c;
          }
          piVar6 = (int *)((int)unaff_r9 + iVar13);
          local_68 = (int *)((int)piVar8 + 1);
          iVar13 = iVar13 + 0x28;
          *piVar6 = local_108;
          piVar6[1] = iStack_104;
          piVar6[2] = iStack_100;
          piVar6[3] = iStack_fc;
          piVar6[4] = iStack_f8;
          piVar6[5] = local_f4;
          piVar6[6] = iStack_f0;
          piVar6[7] = iStack_ec;
          piVar6[8] = iStack_e8;
          piVar6[9] = iStack_e4;
        }
        piVar6 = local_70;
      }
      unaff_r6 = unaff_r9 + (int)piVar8 * 10;
      FUN_01ae37c0(piVar10);
      piVar10[3] = (int)piVar6;
      *piVar10 = -0x7ffffffd;
      piVar10[1] = (int)unaff_r9;
      piVar10[2] = (int)unaff_r9;
      piVar10[4] = (int)unaff_r6;
    }
  }
  iVar13 = 0x1ae3a34;
  FUN_019adfac(&local_70,param_3,param_4);
  piVar8 = local_68;
  piVar10 = local_6c;
  if (local_70 == (int *)&DAT_00000001) {
    iVar9 = *(int *)(param_2 + 0x5c);
    iVar13 = 0x1ae3a60;
    FUN_019afae4(&local_70,param_3,param_4);
    piVar6 = (int *)&DAT_80000000;
    _local_180 = CONCAT13(local_68._0_1_,local_6c._1_3_);
    uStack_17c = (undefined3)((uint)local_68 >> 8);
    local_174 = local_70;
    unaff_r6 = piVar10;
    unaff_r9 = piVar8;
    iVar11 = extraout_r12_00;
    uVar1 = local_6c._0_1_;
  }
  else {
    piVar6 = (int *)0x80000002;
    iVar9 = *(int *)(param_2 + 0x5c);
    local_174 = local_6c;
    iVar11 = extraout_r12;
    uVar1 = local_68._0_1_;
  }
  piStack_16c = (int *)CONCAT31(uStack_17c,uStack_17d);
  local_170 = (int *)CONCAT31((int3)_local_180,uVar1);
  local_178 = piVar6;
  local_168 = unaff_r6;
  local_164 = unaff_r9;
  local_160 = iVar9;
  local_15c = iVar9;
  if (*(int *)(param_2 + 0x10) == 0) goto LAB_01ae3f80;
  local_154 = param_2 + 0x10;
  local_148 = local_170;
  local_150 = piVar6;
  piStack_14c = local_174;
  piStack_144 = piStack_16c;
  local_140 = unaff_r6;
  piStack_13c = unaff_r9;
  iStack_138 = iVar9;
  local_134 = iVar9;
  if (piVar6 == (int *)0x80000003) {
    if (local_170 != unaff_r6) {
      local_148 = local_170 + 10;
      local_70 = (int *)*local_170;
      local_d0 = (int *)local_170[2];
      piStack_cc = (int *)local_170[3];
      local_c8 = (int *)local_170[4];
      piStack_c4 = (int *)local_170[5];
      local_c0 = (int *)local_170[6];
      piStack_bc = (int *)local_170[7];
      iVar11 = local_170[8];
      iVar13 = local_170[9];
      local_6c = (int *)local_170[1];
      goto LAB_01ae3c48;
    }
  }
  else if (piVar6 == (int *)0x80000002) {
    iVar13 = 0x1ae3b68;
    FUN_019bb288(local_98,(uint)&local_150 | 4);
    iVar11 = extraout_r12_01;
    if (((uint)local_98[0] & 1) == 0) {
      local_70 = (int *)0x2;
      local_6c = piVar6;
    }
    else {
      if (local_90 == (int *)0x0) {
        local_6c = (int *)&DAT_80000000;
        local_68 = (int *)&DAT_80000000;
        local_70 = (int *)&DAT_00000001;
        local_5c = local_8c;
        local_58 = local_88;
        local_54 = (int *)(iVar9 + 1);
      }
      else {
        local_48 = local_90;
        local_44 = local_8c;
        local_40 = local_88;
        local_3c = local_84;
        uStack_38 = uStack_80;
        uStack_34 = uStack_7c;
        uStack_30 = uStack_78;
        uStack_2c = uStack_74;
        FUN_01ae47f4(&local_70,iVar9 + 1);
        FUN_019db4b0(&local_48);
        iVar11 = local_50;
        iVar13 = local_4c;
      }
      local_d0 = local_68;
      piStack_cc = piStack_64;
      local_c8 = piStack_60;
      piStack_c4 = local_5c;
      local_c0 = local_58;
      piStack_bc = local_54;
    }
LAB_01ae3c48:
    piVar6 = local_6c;
    if (local_70 != (int *)0x2) {
LAB_01ae3c88:
      local_68 = local_d0;
      piStack_64 = piStack_cc;
      piStack_60 = local_c8;
      local_5c = piStack_c4;
      local_58 = local_c0;
      local_54 = piStack_bc;
      local_6c = piVar6;
      local_50 = iVar11;
      local_4c = iVar13;
      local_184 = (int *)thunk_FUN_01be5118(0xa0);
      if (local_184 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(8,0xa0);
      }
      *local_184 = (int)local_70;
      local_184[1] = (int)local_6c;
      local_184[2] = (int)local_68;
      local_184[3] = (int)piStack_64;
      local_184[4] = (int)piStack_60;
      local_184[5] = (int)local_5c;
      local_184[6] = (int)local_58;
      local_184[7] = (int)local_54;
      local_184[8] = local_50;
      local_184[9] = local_4c;
      local_d8 = (int *)&DAT_00000001;
      local_e0 = (int *)&SUB_00000004;
      local_d0 = local_150;
      piStack_cc = piStack_14c;
      local_c8 = local_148;
      piStack_c4 = piStack_144;
      iVar13 = 0x28;
      local_c0 = local_140;
      piStack_bc = piStack_13c;
      iStack_b8 = iStack_138;
      local_b4 = local_134;
      puVar4 = (undefined4 *)((uint)&local_d0 | 4);
      local_dc = local_184;
      do {
        iVar11 = local_b4;
        piVar8 = local_d0;
        piVar10 = local_d8;
        if (local_d0 == (int *)0x80000003) {
          if (local_c8 == local_c0) goto LAB_01ae3f1c;
          piVar12 = (int *)*local_c8;
          local_b0 = (int *)local_c8[2];
          piStack_ac = (int *)local_c8[3];
          piStack_a8 = (int *)local_c8[4];
          piStack_a4 = (int *)local_c8[5];
          piStack_a0 = (int *)local_c8[6];
          piStack_9c = (int *)local_c8[7];
          local_188 = local_c8[8];
          local_18c = local_c8[9];
          piVar8 = (int *)local_c8[1];
          local_c8 = local_c8 + 10;
LAB_01ae3e88:
LAB_01ae3e90:
          if (piVar12 == (int *)0x2) goto LAB_01ae3f1c;
        }
        else {
          if (local_d0 == (int *)0x80000002) {
            FUN_019bb288(local_98,puVar4);
            piVar12 = (int *)0x2;
            piVar8 = piVar6;
            if (((uint)local_98[0] & 1) != 0) {
              if (local_90 == (int *)0x0) {
                local_68 = (int *)&DAT_80000000;
                piVar12 = (int *)&DAT_00000001;
                local_6c = (int *)&DAT_80000000;
                local_5c = local_8c;
                local_58 = local_88;
                local_54 = (int *)(iVar11 + 1);
              }
              else {
                local_48 = local_90;
                *(undefined4 *)((uint)&local_48 | 4) = local_8c;
                ((undefined4 *)((uint)&local_48 | 4))[1] = local_88;
                local_3c = local_84;
                uStack_38 = uStack_80;
                uStack_34 = uStack_7c;
                uStack_30 = uStack_78;
                uStack_2c = uStack_74;
                FUN_01ae47f4(&local_70,iVar11 + 1,&local_48);
                FUN_019db4b0(&local_48);
                piVar12 = local_70;
              }
              local_b0 = local_68;
              piStack_ac = piStack_64;
              piStack_a8 = piStack_60;
              piStack_a4 = local_5c;
              piStack_a0 = local_58;
              piStack_9c = local_54;
              local_188 = local_50;
              local_18c = local_4c;
              piVar8 = local_6c;
              goto LAB_01ae3e88;
            }
            goto LAB_01ae3e90;
          }
          bVar14 = local_d0 == (int *)&DAT_80000001;
          local_d0 = (int *)&DAT_80000001;
          if (bVar14) goto LAB_01ae3f1c;
          local_b0 = (int *)*puVar4;
          piStack_ac = (int *)puVar4[1];
          piStack_a8 = (int *)puVar4[2];
          piStack_a4 = (int *)puVar4[3];
          piStack_a0 = (int *)puVar4[4];
          piStack_9c = (int *)puVar4[5];
          piVar12 = (int *)&DAT_00000001;
        }
        local_68 = local_b0;
        piStack_64 = piStack_ac;
        piStack_60 = piStack_a8;
        local_5c = piStack_a4;
        local_58 = piStack_a0;
        local_54 = piStack_9c;
        local_50 = local_188;
        local_4c = local_18c;
        local_70 = piVar12;
        local_6c = piVar8;
        if (piVar10 == local_e0) {
          FUN_006520b4(&local_e0,piVar10,1,8,0x28);
          local_184 = local_dc;
        }
        puVar3 = (undefined4 *)((int)local_184 + iVar13);
        local_d8 = (int *)((int)piVar10 + 1);
        iVar13 = iVar13 + 0x28;
        *puVar3 = local_70;
        puVar3[1] = local_6c;
        puVar3[2] = local_68;
        puVar3[3] = piStack_64;
        puVar3[4] = piStack_60;
        puVar3[5] = local_5c;
        puVar3[6] = local_58;
        puVar3[7] = local_54;
        puVar3[8] = local_50;
        puVar3[9] = local_4c;
        piVar6 = piVar8;
      } while( true );
    }
  }
  else {
    local_150 = (int *)&DAT_80000001;
    if (piVar6 != (int *)&DAT_80000001) {
      puVar4 = (undefined4 *)((uint)&local_178 | 4);
      local_70 = (int *)&DAT_00000001;
      local_d0 = (int *)*puVar4;
      piStack_cc = (int *)puVar4[1];
      local_c8 = (int *)puVar4[2];
      piStack_c4 = (int *)puVar4[3];
      local_c0 = (int *)puVar4[4];
      piStack_bc = (int *)puVar4[5];
      goto LAB_01ae3c88;
    }
  }
  piVar8 = (int *)0x0;
  piVar10 = (int *)&DAT_00000008;
  local_68 = (int *)0x0;
  local_6c = (int *)&DAT_00000008;
  local_70 = (int *)0x0;
  FUN_01ae4a60(&local_150);
  local_48 = &local_154;
  local_98[0] = &local_48;
LAB_01ae3f5c:
  piStack_16c = local_70;
  local_178 = (int *)0x80000003;
  local_168 = piVar10 + (int)piVar8 * 10;
  local_174 = piVar10;
  local_170 = piVar10;
LAB_01ae3f80:
  if (*(char *)(param_2 + 0x24) != '\0') {
    FUN_019afae4(&local_70,param_3,param_4);
    piVar6 = local_68;
    piVar8 = local_6c;
    piVar10 = local_70;
    if (local_70 == (int *)&DAT_80000000) {
      uVar7 = *(undefined4 *)(param_2 + 0x5c);
      param_1[4] = local_6c;
      param_1[5] = local_68;
      param_1[6] = uVar7;
      *param_1 = 0x80000000;
      param_1[1] = 0x80000000;
      FUN_01ae37c0(&local_178);
      return;
    }
    iVar13 = *(int *)(param_2 + 0x3c);
    if (iVar13 == *(int *)(param_2 + 0x34)) {
      FUN_018c4418();
    }
    puVar4 = (undefined4 *)(*(int *)(param_2 + 0x38) + iVar13 * 0xc);
    *puVar4 = piVar10;
    puVar4[1] = piVar8;
    puVar4[2] = piVar6;
    *(int *)(param_2 + 0x3c) = iVar13 + 1;
  }
  iVar13 = *(int *)(param_2 + 0x30);
  if (iVar13 == *(int *)(param_2 + 0x28)) {
    FUN_019637f8(param_2 + 0x28);
  }
  puVar4 = (undefined4 *)(*(int *)(param_2 + 0x2c) + iVar13 * 0x20);
  *puVar4 = local_178;
  puVar4[1] = local_174;
  puVar4[2] = local_170;
  puVar4[3] = piStack_16c;
  puVar4[4] = local_168;
  puVar4[5] = local_164;
  puVar4[6] = local_160;
  puVar4[7] = local_15c;
  *(int *)(param_2 + 0x30) = iVar13 + 1;
  if (uVar5 - uVar2 == *(int *)(param_2 + 0x18)) {
    if (0xfffffffe < *(uint *)(param_2 + 0x58)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d30130);
    }
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) + 1;
  }
  *param_1 = 0x80000001;
  return;
LAB_01ae3f1c:
  FUN_01ae4a60(&local_d0);
  piVar8 = local_d8;
  piVar10 = local_dc;
  local_70 = local_e0;
  local_6c = local_dc;
  local_68 = local_d8;
  local_48 = &local_154;
  local_98[0] = &local_48;
  if (&DAT_00000001 < local_d8) {
    if (&DAT_00000014 < local_d8) {
      FUN_01ae46dc(local_dc,local_d8,local_98);
    }
    else {
      iVar11 = 0x28;
      iVar13 = (int)local_d8 * 0x28;
      do {
        FUN_01ae42b4(piVar10,(int)piVar10 + iVar11,&local_48);
        iVar11 = iVar11 + 0x28;
      } while (iVar13 != iVar11);
    }
  }
  goto LAB_01ae3f5c;
}

