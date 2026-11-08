// FUN_01a471bc @ 01a471bc size=1828 calls_out=4 calls_in=2
// strings: escape sequence | unicode 8-digit hex code | unicode 4-digit hex code

/* WARNING: Removing unreachable block (ram,0x01a475d0) */

void FUN_01a471bc(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcStack_17c;
  byte *pbStack_178;
  int local_174;
  byte *local_170;
  char *local_15c;
  byte *local_158;
  int local_154;
  byte *local_150;
  char *local_13c;
  byte *local_138;
  int local_134;
  byte *local_130;
  char *local_11c;
  byte *local_118;
  int local_114;
  byte *local_110;
  char *local_fc;
  byte *local_f8;
  int local_f4;
  byte *local_f0;
  char *local_dc;
  byte *local_d8;
  char *local_d4;
  byte *local_d0;
  char *local_bc;
  byte *local_b8;
  char *local_b4;
  byte *local_b0;
  char *local_ac;
  byte *local_a8;
  char *local_a4;
  byte *local_a0;
  undefined4 local_9c;
  char *local_98;
  undefined4 local_94;
  int local_90;
  char **local_8c;
  int local_88;
  byte *local_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  int local_70;
  byte *local_6c;
  undefined4 local_68;
  undefined *puStack_64;
  uint uStack_60;
  char local_5c;
  int local_58;
  byte *local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  int local_40;
  byte *local_3c;
  int local_38;
  int local_34;
  char **local_30;
  uint uStack_2c;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if ((iVar2 == 0) || (pcVar5 = *(char **)(param_2 + 8), *pcVar5 != '\\')) {
LAB_01a4723c:
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 4;
    *param_1 = 1;
    return;
  }
  *(char **)(param_2 + 8) = pcVar5 + 1;
  *(int *)(param_2 + 0xc) = iVar2 + -1;
  if (iVar2 + -1 == 0) goto LAB_01a4723c;
  bVar1 = pcVar5[1];
  pcVar5 = pcVar5 + 2;
  pbVar10 = (byte *)(iVar2 + -2);
  *(char **)(param_2 + 8) = pcVar5;
  *(byte **)(param_2 + 0xc) = pbVar10;
  if (bVar1 < 0x62) {
    if (bVar1 == 0x22) {
      pbVar10 = &DAT_00000022;
      goto LAB_01a478d8;
    }
    if (bVar1 != 0x55) {
      if (bVar1 == 0x5c) {
        pbVar10 = &DAT_0000005c;
        goto LAB_01a478d8;
      }
      goto switchD_01a47280_caseD_6f;
    }
    local_68 = 0;
    local_6c = &DAT_00000008;
    local_70 = 1;
    puStack_64 = &DAT_00393000;
    local_5c = 'f';
    local_d4 = pcVar5;
    local_d0 = pbVar10;
    uStack_60 = 0x61004641;
    FUN_01a44e34(&local_40,param_2,8);
    if (local_40 == 3) {
      uVar8 = 0x61004641;
      if (local_38 == 8) {
        uVar9 = 0;
        pbVar3 = local_3c + 1;
        if (*local_3c != 0x2b) {
          pbVar3 = local_3c;
        }
        iVar2 = 8;
        if (*local_3c == 0x2b) {
          iVar2 = 7;
        }
        do {
          uVar7 = (uint)*pbVar3;
          uVar6 = uVar7 - 0x30;
          uVar8 = uVar7 - 0x41 & 0xffffffdf;
          if (0x39 < uVar7) {
            uVar6 = uVar8 + 10;
          }
          if (0xf < uVar6) goto LAB_01a47638;
          uVar9 = uVar6 | uVar9 << 4;
          pbVar3 = pbVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        local_40 = -0x7fffffff;
        if (0xffef07ff < (uVar9 ^ 0xd800) - 0x110000) goto LAB_01a4776c;
        local_58 = -0x7fffffff;
        local_54 = local_3c;
        iStack_50 = local_38;
        uStack_4c = local_34;
        uStack_48 = local_30;
        uStack_44 = uStack_2c;
        *(char **)(param_2 + 8) = pcVar5;
        *(byte **)(param_2 + 0xc) = pbVar10;
        FUN_01a47914(&local_3c,&local_58);
      }
      else {
LAB_01a47638:
        uStack_2c = uVar8;
        *(char **)(param_2 + 8) = pcVar5;
        local_38 = 4;
        *(byte **)(param_2 + 0xc) = pbVar10;
        local_3c = (byte *)0x0;
        local_30 = (char **)0x0;
        local_34 = 0;
      }
LAB_01a47650:
      local_88 = 2;
      local_84 = local_3c;
      iStack_80 = local_38;
      uStack_7c = local_34;
      uStack_78 = local_30;
      uStack_74 = uStack_2c;
    }
    else {
      if (local_40 == 1) goto LAB_01a47650;
      local_88 = local_40;
      local_84 = local_3c;
      iStack_80 = local_38;
      uStack_7c = local_34;
      uStack_78 = local_30;
      uStack_74 = uStack_2c;
    }
    local_3c = (byte *)0x52d166;
LAB_01a476fc:
    local_30 = &local_d4;
    local_38 = 0x18;
    local_40 = 3;
    piVar4 = &local_88;
    goto LAB_01a47720;
  }
  switch(bVar1) {
  case 0x6e:
    pbVar10 = &DAT_0000000a;
    break;
  case 0x72:
    pbVar10 = &DAT_0000000d;
    break;
  case 0x74:
    pbVar10 = &DAT_00000009;
    break;
  case 0x75:
    local_68 = 0;
    local_6c = &SUB_00000004;
    local_70 = 1;
    puStack_64 = &DAT_00393000;
    uStack_60 = 0x61004641;
    local_5c = 'f';
    local_d4 = pcVar5;
    local_d0 = pbVar10;
    FUN_01a44e34(&local_40,param_2,4);
    if (local_40 == 3) {
      if (local_38 == 4) {
        uVar9 = 0;
        pbVar3 = local_3c + 1;
        if (*local_3c != 0x2b) {
          pbVar3 = local_3c;
        }
        iVar2 = 4;
        if (*local_3c == 0x2b) {
          iVar2 = 3;
        }
        do {
          uVar6 = (uint)*pbVar3;
          uVar8 = uVar6 - 0x30;
          if (0x39 < uVar6) {
            uVar8 = (uVar6 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar8) goto LAB_01a476cc;
          uVar9 = uVar8 | uVar9 << 4;
          pbVar3 = pbVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        local_40 = -0x7fffffff;
        if (0xffef07ff < (uVar9 ^ 0xd800) - 0x110000) {
LAB_01a4776c:
          local_40 = -0x7fffffff;
          FUN_01a458dc(&local_40);
          *param_1 = 3;
          param_1[1] = uVar9;
          return;
        }
        local_58 = -0x7fffffff;
        local_54 = local_3c;
        iStack_50 = local_38;
        uStack_4c = local_34;
        uStack_48 = local_30;
        uStack_44 = uStack_2c;
        *(char **)(param_2 + 8) = pcVar5;
        *(byte **)(param_2 + 0xc) = pbVar10;
        FUN_01a47914(&local_3c,&local_58);
      }
      else {
LAB_01a476cc:
        *(char **)(param_2 + 8) = pcVar5;
        local_38 = 4;
        *(byte **)(param_2 + 0xc) = pbVar10;
        local_3c = (byte *)0x0;
        local_34 = 0;
        local_30 = (char **)0x0;
        uStack_2c = unaff_r7;
      }
LAB_01a476e4:
      local_88 = 2;
      local_84 = local_3c;
      iStack_80 = local_38;
      uStack_7c = local_34;
      uStack_78 = local_30;
      uStack_74 = uStack_2c;
    }
    else {
      if (local_40 == 1) goto LAB_01a476e4;
      local_88 = local_40;
      local_84 = local_3c;
      iStack_80 = local_38;
      uStack_7c = local_34;
      uStack_78 = local_30;
      uStack_74 = uStack_2c;
    }
    local_3c = (byte *)0x52d14e;
    goto LAB_01a476fc;
  default:
    if (bVar1 == 0x62) {
      pbVar10 = &DAT_00000008;
      break;
    }
    if (bVar1 == 0x66) {
      pbVar10 = &DAT_0000000c;
      break;
    }
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
switchD_01a47280_caseD_6f:
    local_38 = 4;
    local_40 = 2;
    local_8c = &local_a4;
    local_98 = "escape sequence";
    local_94 = 0xf;
    local_9c = 3;
    local_30 = (char **)0x0;
    local_34 = 0;
    local_3c = (byte *)0x0;
    pcStack_17c = pcVar5;
    pbStack_178 = pbVar10;
    local_15c = pcVar5;
    local_158 = pbVar10;
    local_13c = pcVar5;
    local_138 = pbVar10;
    local_11c = pcVar5;
    local_118 = pbVar10;
    local_fc = pcVar5;
    local_f8 = pbVar10;
    local_dc = pcVar5;
    local_d8 = pbVar10;
    local_bc = pcVar5;
    local_b8 = pbVar10;
    local_b4 = pcVar5;
    local_b0 = pbVar10;
    local_ac = pcVar5;
    local_a8 = pbVar10;
    local_a4 = pcVar5;
    local_a0 = pbVar10;
    local_90 = param_2;
    FUN_01a5cbd0(&local_58,&local_40,&local_9c);
    pbVar10 = local_54;
    if (local_58 != 3) {
      local_30 = &local_ac;
      local_3c = (byte *)0x62;
      local_40 = 0;
      local_34 = param_2;
      FUN_01a5cbd0(&local_70,&local_58,&local_40);
      pbVar10 = local_6c;
      if (local_70 != 3) {
        local_30 = &local_b4;
        local_3c = (byte *)0x66;
        local_40 = 0;
        local_34 = param_2;
        FUN_01a5cbd0(&local_88,&local_70,&local_40);
        pbVar10 = local_84;
        if (local_88 != 3) {
          local_30 = &local_bc;
          local_3c = (byte *)0x6e;
          local_40 = 0;
          local_34 = param_2;
          FUN_01a5cbd0(&local_d4,&local_88,&local_40);
          pbVar10 = local_d0;
          if (local_d4 != &DAT_00000003) {
            local_30 = &local_dc;
            local_3c = (byte *)0x72;
            local_40 = 0;
            local_34 = param_2;
            FUN_01a5cbd0(&local_f4,&local_d4,&local_40);
            pbVar10 = local_f0;
            if (local_f4 != 3) {
              local_30 = &local_fc;
              local_3c = (byte *)0x74;
              local_40 = 0;
              local_34 = param_2;
              FUN_01a5cbd0(&local_114,&local_f4,&local_40);
              pbVar10 = local_110;
              if (local_114 != 3) {
                local_30 = &local_11c;
                local_3c = (byte *)0x75;
                local_40 = 0;
                local_34 = param_2;
                FUN_01a5cbd0(&local_134,&local_114,&local_40);
                pbVar10 = local_130;
                if (local_134 != 3) {
                  local_30 = &local_13c;
                  local_3c = (byte *)0x55;
                  local_40 = 0;
                  local_34 = param_2;
                  FUN_01a5cbd0(&local_154,&local_134,&local_40);
                  pbVar10 = local_150;
                  if (local_154 != 3) {
                    local_30 = &local_15c;
                    local_3c = (byte *)0x5c;
                    local_40 = 0;
                    local_34 = param_2;
                    FUN_01a5cbd0(&local_174,&local_154,&local_40);
                    pbVar10 = local_170;
                    if (local_174 != 3) {
                      local_30 = &pcStack_17c;
                      piVar4 = &local_174;
                      local_3c = (byte *)0x22;
                      local_40 = 0;
LAB_01a47720:
                      local_34 = param_2;
                      FUN_01a5cbd0(param_1,piVar4,&local_40);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01a478d8:
  *param_1 = 3;
  param_1[1] = pbVar10;
  return;
}

