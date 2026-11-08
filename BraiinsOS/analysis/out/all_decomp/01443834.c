// FUN_01443834 @ 01443834 size=1508 calls_out=13 calls_in=1
// strings: should be valid Url | a Display implementation returned an error unexpectedly

void FUN_01443834(int *param_1,int *param_2,char *param_3)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_218 [18];
  char *local_1d0;
  int local_1cc;
  int local_1c8;
  int iStack_1c4;
  int local_1c0;
  undefined4 local_1bc;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  char *local_17c;
  undefined8 local_178;
  undefined1 *local_170;
  uint local_16c;
  char *local_168;
  int local_164;
  int local_160;
  int local_15c [2];
  ushort local_154;
  char **local_150;
  undefined4 *local_14c;
  char **local_148;
  undefined4 *local_144;
  char **local_140;
  undefined4 *local_13c;
  char **local_138;
  undefined4 *local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_ac [17];
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_2e [2];
  undefined2 local_2c;
  undefined2 local_2a;
  
  if (param_2[0x16] != -0x80000000) {
    FUN_010c7bf0(local_218,param_2 + 0x16,param_3);
    goto LAB_01443bc4;
  }
  if (*param_3 != '\0') {
    iVar8 = param_2[0x1a];
    iVar9 = param_2[0x1b];
    local_17c = param_3;
    if (*(int *)(param_3 + 0x10) != 0) {
      local_178 = FUN_010a61e4(*(undefined4 *)(param_3 + 0xc));
      if (*(int *)(param_3 + 0x10) == 0) {
        local_16c = 0;
        local_170 = (undefined1 *)0x1;
LAB_014439a8:
        local_15c[0] = 0;
LAB_014439b0:
        local_160 = 0;
        local_164 = 1;
        local_168 = (char *)0x0;
      }
      else {
        FUN_010a6bb0(&local_150,*(undefined4 *)(param_3 + 0xc));
        local_16c = (uint)(local_150 != (char **)0x0);
        local_170 = &DAT_00418eb8;
        if (local_16c == 0) {
          local_170 = (undefined1 *)0x1;
        }
        if (*(int *)(param_3 + 0x10) == 0) goto LAB_014439a8;
        FUN_010a6bb0(local_15c,*(undefined4 *)(param_3 + 0xc));
        if (local_15c[0] == 0) goto LAB_014439b0;
        uVar4 = (uint)local_154;
        iVar2 = 1;
        local_1c8 = 0;
        local_1d0 = (char *)0x0;
        local_144 = (undefined4 *)0x0;
        local_14c = (undefined4 *)&DAT_018a3dc0;
        local_150 = &local_1d0;
        local_1cc = 1;
        local_148 = (char **)&DAT_60000020;
        if (local_154 >> 3 < 0x7d) {
          iVar2 = 5;
          uVar10 = uVar4;
          if (9 < uVar4) {
            uVar10 = (uint)((short)(local_154 >> 2) * 0x147b) >> 0x11;
            iVar2 = 3;
            uVar5 = uVar4;
            goto LAB_014439f0;
          }
        }
        else {
          uVar10 = (uint)((short)(local_154 >> 4) * 0x347) >> 0x13;
          uVar5 = uVar4 + uVar10 * -10000;
          local_2c = *(undefined2 *)
                      (&DAT_0040f4ca + ((uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2
                      );
LAB_014439f0:
          local_2a = *(undefined2 *)
                      (&DAT_0040f4ca +
                      (uVar5 + ((uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 &
                      0xffff) * 2);
        }
        if ((uVar4 == 0) || (iVar3 = iVar2, uVar10 != 0)) {
          iVar3 = iVar2 + -1;
          auStack_2e[iVar2] = (&DAT_0040f4cb)[(uVar10 & 0xf) * 2];
        }
        iVar2 = FUN_00fa9698(&local_150,1,1,0,auStack_2e + iVar3 + 1,5 - iVar3);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,auStack_2e + 1
                       ,&DAT_018a3de8,&DAT_018af130);
        }
        local_168 = local_1d0;
        local_164 = local_1cc;
        local_160 = local_1c8;
      }
      local_13c = &DAT_0157d360;
      local_144 = &DAT_0157d360;
      local_148 = (char **)&local_178;
      local_150 = &local_17c;
      local_134 = &DAT_006043a8;
      local_138 = &local_168;
      local_140 = &local_170;
      local_14c = (undefined4 *)&DAT_014440e0;
      FUN_00600d2c(&local_188,&DAT_00575023,&local_150);
      if (local_168 != (char *)0x0) {
        thunk_FUN_016d3fb4(local_164);
      }
      local_148 = (char **)0x0;
      local_150 = (char **)0x0;
      local_140 = (char **)0x0;
      FUN_016b18bc(&local_108,&local_150,local_184,local_180);
      if (local_108 == 2) {
        local_150 = (char **)CONCAT31(local_150._1_3_,(undefined1)local_104);
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("should be valid Url",0x13,&local_150,&DAT_018a3df8,&DAT_018a40d4);
      }
      FUN_016dd1aa(&local_1d0,&local_108,0x48);
      if (local_188 != 0) {
        thunk_FUN_016d3fb4(local_184);
      }
      (**(code **)(iVar9 + 0x14))
                (&local_150,iVar8 + (*(int *)(iVar9 + 8) - 1U & 0xfffffff8) + 8,&local_1d0);
      if (local_150 == (char **)0x3) {
LAB_01443ba8:
        local_218[0] = -0x7ffffffe;
      }
      else {
        FUN_016dd1aa(&local_108,&local_150,0x48);
        ppcVar1 = local_138;
        puVar6 = local_13c;
        if (local_108 == 2) {
          FUN_00a41d7c((uint)&local_108 | 4);
          goto LAB_01443ba8;
        }
        local_120 = 0;
        local_124 = 0;
        local_128 = 1;
        local_12c = 0;
        local_130 = 0;
        local_134 = (undefined4 *)0x1;
        local_138 = (char **)0x0;
        local_13c = (undefined4 *)0x0;
        local_150 = local_140;
        local_14c = puVar6;
        local_148 = ppcVar1;
        local_144 = (undefined4 *)0x0;
        local_140 = (char **)0x1;
        FUN_010c58d4(&local_108,&local_150);
        FUN_010c7bf0(local_218,&local_108,param_3);
        if (local_f0 != -0x7ffffffe) {
          FUN_01443fcc(&local_f0);
        }
        if (local_ac[0] != -0x7ffffffe) {
          FUN_01443fcc(local_ac);
        }
        if (local_108 != 0) {
          thunk_FUN_016d3fb4(local_104);
        }
        iVar8 = local_f8;
        puVar6 = (undefined4 *)(local_f8 + 4);
        for (iVar9 = local_f4; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar6[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar6);
          }
          puVar6 = puVar6 + 3;
        }
        if (local_fc != 0) {
          thunk_FUN_016d3fb4(iVar8);
        }
      }
      if (local_1c0 != 0) {
        thunk_FUN_016d3fb4(local_1bc);
      }
      goto LAB_01443bc4;
    }
  }
  local_218[0] = -0x7ffffffe;
LAB_01443bc4:
  if (local_218[0] == -0x7ffffffe) {
    *param_1 = 4;
    param_1[1] = 0;
    return;
  }
  FUN_016dd1aa(&local_150,local_218,0x44);
  uVar7 = 2;
  if ((char)param_2[0x14] != '\x02') {
    (**(code **)param_2[0x10])(&local_1d0,param_2 + 0x13,param_2[0x11],param_2[0x12]);
    uVar7 = (undefined1)param_2[0x14];
  }
  local_1c0 = CONCAT31(local_1c0._1_3_,uVar7);
  if (*param_2 == 3 && param_2[1] == 0) {
    local_108 = 3;
    local_104 = 0;
  }
  else {
    FUN_014436b4(&local_108,param_2);
    local_68 = local_100;
    iStack_64 = local_fc;
    iStack_60 = local_f8;
    iStack_5c = local_f4;
    local_58 = local_f0;
    iStack_54 = iStack_ec;
    iStack_50 = iStack_e8;
    iStack_4c = iStack_e4;
    iStack_48 = iStack_e0;
    local_44 = local_dc;
    iStack_40 = iStack_d8;
    iStack_3c = iStack_d4;
    iStack_38 = iStack_d0;
    iStack_34 = iStack_cc;
  }
  param_1[0x10] = (int)local_1d0;
  param_1[0x11] = local_1cc;
  param_1[0x12] = local_1c8;
  param_1[0x13] = iStack_1c4;
  param_1[0x14] = local_1c0;
  FUN_016dd1aa((uint)&local_108 | 4,local_218,0x44);
  *param_1 = local_108;
  param_1[1] = local_104;
  param_1[2] = local_68;
  param_1[3] = iStack_64;
  param_1[4] = iStack_60;
  param_1[5] = iStack_5c;
  param_1[6] = local_58;
  param_1[7] = iStack_54;
  param_1[8] = iStack_50;
  param_1[9] = iStack_4c;
  param_1[10] = iStack_48;
  param_1[0xb] = local_44;
  param_1[0xc] = iStack_40;
  param_1[0xd] = iStack_3c;
  param_1[0xe] = iStack_38;
  param_1[0xf] = iStack_34;
  FUN_016dd1aa(param_1 + 0x15,&local_108,0x48);
  return;
}

