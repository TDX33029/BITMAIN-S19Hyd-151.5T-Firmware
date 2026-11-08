// FUN_016d6f28 @ 016d6f28 size=1660 calls_out=10 calls_in=1
// strings: 

void FUN_016d6f28(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint local_18c;
  uint local_180;
  int local_17c;
  uint local_158;
  uint local_154;
  int local_150;
  uint local_14c;
  int local_148;
  int local_144;
  int iStack_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int iStack_12c;
  int local_128;
  int local_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  undefined4 local_110 [7];
  undefined4 local_f4 [7];
  int local_d8;
  uint local_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  uint uStack_94;
  int iStack_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_80;
  uint uStack_7c;
  int iStack_78;
  int local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar4 = FUN_016d4a28(param_2);
  if (iVar4 != 0x7b) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004cfe08,0x24,&DAT_01d0a028);
  }
  iVar11 = *param_2;
  piVar12 = (int *)(iVar11 + 0x50);
  iVar4 = *piVar12;
  uVar8 = *(uint *)(iVar11 + 0x54);
  iVar10 = *(int *)(iVar11 + 0x58);
  if (*(int *)(param_3 + 8) == 0) {
    local_144 = *piVar12;
    iStack_140 = *(int *)(iVar11 + 0x54);
    local_13c = *(int *)(iVar11 + 0x58);
    local_150 = *piVar12;
    local_14c = *(uint *)(iVar11 + 0x54);
    local_148 = *(int *)(iVar11 + 0x58);
    local_d8 = 0x1b;
    FUN_016d4540(&local_68,param_2[1],param_2[2],&local_150,&local_d8);
    *param_1 = local_68;
    param_1[1] = iStack_64;
    param_1[2] = iStack_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = iStack_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = local_40;
    param_1[0xb] = iStack_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
    goto LAB_016d7184;
  }
  iVar5 = *(int *)(param_3 + 8) + -1;
  *(int *)(param_3 + 8) = iVar5;
  puVar7 = (uint *)(*(int *)(param_3 + 4) + iVar5 * 8);
  uVar9 = *puVar7;
  local_154 = puVar7[1];
  local_158 = uVar9;
  if (uVar9 < 2) {
    local_144 = *piVar12;
    iStack_140 = *(int *)(iVar11 + 0x54);
    local_13c = *(int *)(iVar11 + 0x58);
    local_150 = *piVar12;
    local_14c = *(uint *)(iVar11 + 0x54);
    local_148 = *(int *)(iVar11 + 0x58);
    local_d8 = 0x1b;
    FUN_016d4540(&local_68,param_2[1],param_2[2],&local_150,&local_d8);
LAB_016d7164:
    *param_1 = local_68;
    param_1[1] = iStack_64;
    param_1[2] = iStack_60;
    param_1[3] = iStack_5c;
    param_1[4] = iStack_58;
    param_1[5] = local_54;
    param_1[6] = iStack_50;
    param_1[7] = iStack_4c;
    param_1[8] = iStack_48;
    param_1[9] = iStack_44;
    param_1[10] = local_40;
    param_1[0xb] = iStack_3c;
    param_1[0xc] = iStack_38;
    param_1[0xd] = iStack_34;
    param_1[0xe] = iStack_30;
    param_1[0xf] = iStack_2c;
  }
  else {
    iVar5 = FUN_016d819c(param_2);
    if (iVar5 == 0) {
      local_144 = *piVar12;
      iStack_140 = *(int *)(iVar11 + 0x54);
      local_13c = *(int *)(iVar11 + 0x58);
      local_d8 = 0x1a;
      local_150 = iVar4;
      local_14c = uVar8;
      local_148 = iVar10;
      FUN_016d4540(&local_68,param_2[1],param_2[2],&local_150,&local_d8);
      goto LAB_016d7164;
    }
    FUN_016d81d8(&local_68,param_2);
    local_f4[0] = 0x19;
    local_110[0] = 5;
    FUN_016d8640(&local_150,&local_68,local_110,local_f4);
    iVar5 = param_2[2];
    if (*piVar12 == iVar5) {
      local_8c = *piVar12;
      uStack_88 = *(undefined4 *)(iVar11 + 0x54);
      uStack_84 = *(undefined4 *)(iVar11 + 0x58);
      local_d8 = 0x1a;
      local_98 = iVar4;
      uStack_94 = uVar8;
      iStack_90 = iVar10;
      FUN_016d4540(&local_68,param_2[1],*piVar12,&local_98,&local_d8);
      *param_1 = local_68;
      param_1[1] = iStack_64;
      param_1[2] = iStack_60;
      param_1[3] = iStack_5c;
      param_1[4] = iStack_58;
      param_1[5] = local_54;
      param_1[6] = iStack_50;
      param_1[7] = iStack_4c;
      param_1[8] = iStack_48;
      param_1[9] = iStack_44;
      param_1[10] = local_40;
      param_1[0xb] = iStack_3c;
      param_1[0xc] = iStack_38;
      param_1[0xd] = iStack_34;
      param_1[0xe] = iStack_30;
      param_1[0xf] = iStack_2c;
LAB_016d7100:
      local_17c = local_150;
LAB_016d7104:
      if (local_17c != 0x22) {
        FUN_0134bd64(local_134,local_130);
      }
    }
    else {
      iVar6 = FUN_016d4a28(param_2);
      if (iVar6 == 0x2c) {
        iVar6 = FUN_016d819c(param_2);
        if (iVar6 == 0) {
          local_8c = *piVar12;
          uStack_88 = *(undefined4 *)(iVar11 + 0x54);
          uStack_84 = *(undefined4 *)(iVar11 + 0x58);
          local_d8 = 0x1a;
          local_98 = iVar4;
          uStack_94 = uVar8;
          iStack_90 = iVar10;
          FUN_016d4540(&local_68,param_2[1],iVar5,&local_98,&local_d8);
          *param_1 = local_68;
          param_1[1] = iStack_64;
          param_1[2] = iStack_60;
          param_1[3] = iStack_5c;
          param_1[4] = iStack_58;
          param_1[5] = local_54;
          param_1[6] = iStack_50;
          param_1[7] = iStack_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = local_40;
          param_1[0xb] = iStack_3c;
          param_1[0xc] = iStack_38;
          param_1[0xd] = iStack_34;
          param_1[0xe] = iStack_30;
          param_1[0xf] = iStack_2c;
          goto LAB_016d7100;
        }
        iVar6 = FUN_016d4a28(param_2);
        local_17c = local_150;
        if (iVar6 == 0x7d) {
          if (local_150 == 0x22) goto LAB_016d7238;
          param_1[2] = local_148;
          param_1[3] = local_144;
          param_1[4] = iStack_140;
          param_1[5] = local_13c;
          param_1[6] = local_138;
          param_1[7] = local_134;
          param_1[8] = local_130;
          param_1[9] = iStack_12c;
          param_1[10] = local_128;
          param_1[0xb] = local_124;
          param_1[0xc] = iStack_120;
          param_1[0xd] = iStack_11c;
          param_1[0xe] = iStack_118;
          param_1[0xf] = iStack_114;
          *param_1 = local_150;
          param_1[1] = local_14c;
        }
        else {
          if (local_150 == 0x22) {
            local_180 = local_14c;
LAB_016d742c:
            bVar1 = local_17c == 0x22;
            FUN_016d81d8(&local_68,param_2);
            FUN_016d8640(&local_d8,&local_68,local_110,local_f4);
            if (local_d8 == 0x22) {
              local_18c = local_d4;
              bVar3 = true;
              bVar2 = false;
              goto LAB_016d723c;
            }
            param_1[2] = local_d0;
            param_1[3] = iStack_cc;
            param_1[4] = iStack_c8;
            param_1[5] = iStack_c4;
            param_1[6] = local_c0;
            param_1[7] = iStack_bc;
            param_1[8] = iStack_b8;
            param_1[9] = iStack_b4;
            param_1[10] = iStack_b0;
            param_1[0xb] = local_ac;
            param_1[0xc] = iStack_a8;
            param_1[0xd] = iStack_a4;
            param_1[0xe] = iStack_a0;
            param_1[0xf] = iStack_9c;
            *param_1 = local_d8;
            param_1[1] = local_d4;
            goto LAB_016d7560;
          }
          if (local_150 == 0x19) {
            if (*(char *)(iVar11 + 0x67) != '\0') {
              FUN_0134bd64(local_134,local_130);
              local_180 = 0;
              goto LAB_016d742c;
            }
            *param_1 = 0x19;
            param_1[1] = local_14c;
            param_1[2] = local_148;
            param_1[3] = local_144;
            param_1[4] = iStack_140;
            param_1[5] = local_13c;
            param_1[6] = local_138;
            param_1[7] = local_134;
            param_1[8] = local_130;
            param_1[9] = iStack_12c;
            param_1[10] = local_128;
            param_1[0xb] = local_124;
            param_1[0xc] = iStack_120;
            param_1[0xd] = iStack_11c;
            param_1[0xe] = iStack_118;
            param_1[0xf] = iStack_114;
          }
          else {
            param_1[2] = local_148;
            param_1[3] = local_144;
            param_1[4] = iStack_140;
            param_1[5] = local_13c;
            param_1[6] = local_138;
            param_1[7] = local_134;
            param_1[8] = local_130;
            param_1[9] = iStack_12c;
            param_1[10] = local_128;
            param_1[0xb] = local_124;
            param_1[0xc] = iStack_120;
            param_1[0xd] = iStack_11c;
            param_1[0xe] = iStack_118;
            param_1[0xf] = iStack_114;
            *param_1 = local_150;
            param_1[1] = local_14c;
          }
        }
      }
      else {
        if (local_150 != 0x22) {
          param_1[2] = local_148;
          param_1[3] = local_144;
          param_1[4] = iStack_140;
          param_1[5] = local_13c;
          param_1[6] = local_138;
          param_1[7] = local_134;
          param_1[8] = local_130;
          param_1[9] = iStack_12c;
          param_1[10] = local_128;
          param_1[0xb] = local_124;
          param_1[0xc] = iStack_120;
          param_1[0xd] = iStack_11c;
          param_1[0xe] = iStack_118;
          param_1[0xf] = iStack_114;
          *param_1 = local_150;
          param_1[1] = local_14c;
          goto LAB_016d717c;
        }
LAB_016d7238:
        bVar1 = false;
        local_17c = 0x22;
        bVar2 = true;
        bVar3 = false;
        local_180 = local_14c;
LAB_016d723c:
        if ((*piVar12 == iVar5) || (iVar6 = FUN_016d4a28(param_2), iVar6 != 0x7d)) {
          local_8c = *piVar12;
          uStack_88 = *(undefined4 *)(iVar11 + 0x54);
          uStack_84 = *(undefined4 *)(iVar11 + 0x58);
          local_d8 = 0x1a;
          local_98 = iVar4;
          uStack_94 = uVar8;
          iStack_90 = iVar10;
          FUN_016d4540(&local_68,param_2[1],iVar5,&local_98,&local_d8);
          *param_1 = local_68;
          param_1[1] = iStack_64;
          param_1[2] = iStack_60;
          param_1[3] = iStack_5c;
          param_1[4] = iStack_58;
          param_1[5] = local_54;
          param_1[6] = iStack_50;
          param_1[7] = iStack_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = local_40;
          param_1[0xb] = iStack_3c;
          param_1[0xc] = iStack_38;
          param_1[0xd] = iStack_34;
          param_1[0xe] = iStack_30;
          param_1[0xf] = iStack_2c;
        }
        else {
          iVar6 = FUN_016d819c(param_2);
          if ((iVar6 != 0) && (iVar6 = FUN_016d4a28(param_2), iVar6 == 0x3f)) {
            FUN_016d4fe8(param_2);
          }
          local_74 = *piVar12;
          uStack_70 = *(undefined4 *)(iVar11 + 0x54);
          uStack_6c = *(undefined4 *)(iVar11 + 0x58);
          local_80 = iVar4;
          uStack_7c = uVar8;
          iStack_78 = iVar10;
          if (bVar2 || local_180 <= local_18c) {
                    /* WARNING: Could not recover jumptable at 0x016d72ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_016d72f0 + *(int *)(&DAT_016d72f0 + uVar9 * 4)))();
            return;
          }
          local_d8 = 0x18;
          FUN_016d4540(&local_68,param_2[1],iVar5,&local_80,&local_d8);
          *param_1 = local_68;
          param_1[1] = iStack_64;
          param_1[2] = iStack_60;
          param_1[3] = iStack_5c;
          param_1[4] = iStack_58;
          param_1[5] = local_54;
          param_1[6] = iStack_50;
          param_1[7] = iStack_4c;
          param_1[8] = iStack_48;
          param_1[9] = iStack_44;
          param_1[10] = local_40;
          param_1[0xb] = iStack_3c;
          param_1[0xc] = iStack_38;
          param_1[0xd] = iStack_34;
          param_1[0xe] = iStack_30;
          param_1[0xf] = iStack_2c;
        }
        if (bVar3) {
LAB_016d7560:
          if (bVar1) {
            goto LAB_016d7104;
          }
        }
      }
    }
  }
LAB_016d717c:
  FUN_016d776c(&local_158);
LAB_016d7184:
  FUN_016bedfc(param_3);
  return;
}

