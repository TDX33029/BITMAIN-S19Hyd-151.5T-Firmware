// FUN_01499540 @ 01499540 size=1680 calls_out=15 calls_in=2
// strings: should be valid Url | a Display implementation returned an error unexpectedly

void FUN_01499540(int *param_1,int *param_2,char *param_3)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined2 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  int local_238 [18];
  char *local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  char *local_19c;
  undefined8 local_198;
  undefined1 *local_190;
  uint local_18c;
  char *local_188;
  int local_184;
  int local_180;
  char **local_178;
  undefined4 *local_174;
  char **local_170;
  undefined4 *local_16c;
  char **local_168;
  undefined4 *local_164;
  char **local_160;
  undefined4 *local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  int local_130;
  undefined4 local_12c;
  int local_124;
  int local_120;
  int local_11c;
  int local_118 [17];
  int local_d4 [17];
  undefined1 auStack_90 [32];
  char *local_70;
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  uint local_58;
  int local_50;
  int iStack_4c;
  uint local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_2e [2];
  undefined2 local_2c;
  undefined2 local_2a;
  
  uVar11 = CONCAT44(local_240,local_23c);
  if (param_2[0x16] != -0x80000000) {
    FUN_010c7bf0(local_238,param_2 + 0x16,param_3);
    goto LAB_014998c4;
  }
  if (*param_3 != '\0') {
    iVar9 = param_2[0x1a];
    iVar10 = param_2[0x1b];
    local_19c = param_3;
    if (*(int *)(param_3 + 0x10) != 0) {
      local_198 = FUN_010a61e4(*(undefined4 *)(param_3 + 0xc));
      if (*(int *)(param_3 + 0x10) == 0) {
        local_18c = 0;
        local_190 = (undefined1 *)0x1;
LAB_014996b0:
        local_180 = 0;
        local_184 = 1;
        local_188 = (char *)0x0;
      }
      else {
        FUN_010a6bb0(&local_178,*(undefined4 *)(param_3 + 0xc));
        local_18c = (uint)(local_178 != (char **)0x0);
        local_190 = &DAT_00418eb8;
        if (local_18c == 0) {
          local_190 = (undefined1 *)0x1;
        }
        if (*(int *)(param_3 + 0x10) == 0) goto LAB_014996b0;
        FUN_010a6bb0(&local_50,*(undefined4 *)(param_3 + 0xc));
        if (local_50 == 0) goto LAB_014996b0;
        iVar2 = 1;
        uVar4 = local_48 & 0xffff;
        local_1e8 = 0;
        local_1f0 = (char *)0x0;
        local_16c = (undefined4 *)0x0;
        local_174 = (undefined4 *)&DAT_018a5048;
        local_178 = &local_1f0;
        local_1ec = 1;
        local_170 = (char **)&DAT_60000020;
        if ((ushort)local_48 >> 3 < 0x7d) {
          iVar2 = 5;
          uVar6 = uVar4;
          if (9 < uVar4) {
            uVar6 = (uint)((short)((ushort)local_48 >> 2) * 0x147b) >> 0x11;
            iVar2 = 3;
            uVar5 = uVar4;
            goto LAB_014996f0;
          }
        }
        else {
          uVar6 = (uint)((short)((ushort)local_48 >> 4) * 0x347) >> 0x13;
          uVar5 = uVar4 + uVar6 * -10000;
          local_2c = *(undefined2 *)
                      (&DAT_0040f4ca + ((uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2
                      );
LAB_014996f0:
          local_2a = *(undefined2 *)
                      (&DAT_0040f4ca +
                      (uVar5 + ((uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 &
                      0xffff) * 2);
        }
        if ((uVar4 == 0) || (iVar3 = iVar2, uVar6 != 0)) {
          iVar3 = iVar2 + -1;
          auStack_2e[iVar2] = (&DAT_0040f4cb)[(uVar6 & 0xf) * 2];
        }
        iVar2 = FUN_00fa9698(&local_178,1,1,0,auStack_2e + iVar3 + 1,5 - iVar3);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,auStack_2e + 1
                       ,&DAT_018a5060,&DAT_018af130);
        }
        local_188 = local_1f0;
        local_184 = local_1ec;
        local_180 = local_1e8;
      }
      local_164 = &DAT_0157d360;
      local_16c = &DAT_0157d360;
      local_170 = (char **)&local_198;
      local_178 = &local_19c;
      local_15c = &DAT_006043a8;
      local_160 = &local_188;
      local_168 = &local_190;
      local_174 = (undefined4 *)&DAT_014440e0;
      FUN_00600d2c(&local_1a8,&DAT_00575023,&local_178);
      if (local_188 != (char *)0x0) {
        thunk_FUN_016d3fb4(local_184);
      }
      local_170 = (char **)0x0;
      local_178 = (char **)0x0;
      local_168 = (char **)0x0;
      FUN_016b18bc(&local_130,&local_178,local_1a4,local_1a0);
      if (local_130 == 2) {
        local_178 = (char **)CONCAT31(local_178._1_3_,(undefined1)local_12c);
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("should be valid Url",0x13,&local_178,&DAT_018a5070,&DAT_018a546c);
      }
      FUN_016dd1aa(&local_1f0,&local_130,0x48);
      if (local_1a8 != 0) {
        thunk_FUN_016d3fb4(local_1a4);
      }
      (**(code **)(iVar10 + 0x14))
                (&local_178,iVar9 + (*(int *)(iVar10 + 8) - 1U & 0xfffffff8) + 8,&local_1f0);
      if (local_178 == (char **)0x3) {
LAB_014998a8:
        local_238[0] = -0x7ffffffe;
      }
      else {
        FUN_016dd1aa(&local_130,&local_178,0x48);
        ppcVar1 = local_160;
        puVar8 = local_164;
        if (local_130 == 2) {
          FUN_01495448((uint)&local_130 | 4);
          goto LAB_014998a8;
        }
        local_148 = 0;
        local_14c = 0;
        local_150 = 1;
        local_154 = 0;
        local_158 = 0;
        local_15c = (undefined4 *)0x1;
        local_160 = (char **)0x0;
        local_164 = (undefined4 *)0x0;
        local_178 = local_168;
        local_174 = puVar8;
        local_170 = ppcVar1;
        local_16c = (undefined4 *)0x0;
        local_168 = (char **)0x1;
        FUN_010c58d4(&local_130,&local_178);
        FUN_010c7bf0(local_238,&local_130,param_3);
        if (local_118[0] != -0x7ffffffe) {
          FUN_01499168(local_118);
        }
        if (local_d4[0] != -0x7ffffffe) {
          FUN_01499168(local_d4);
        }
        if (local_130 != 0) {
          thunk_FUN_016d3fb4(local_12c);
        }
        iVar9 = local_120;
        puVar8 = (undefined4 *)(local_120 + 4);
        for (iVar10 = local_11c; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (puVar8[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar8);
          }
          puVar8 = puVar8 + 3;
        }
        if (local_124 != 0) {
          thunk_FUN_016d3fb4(iVar9);
        }
      }
      if (local_1e0 != 0) {
        thunk_FUN_016d3fb4(local_1dc);
      }
      goto LAB_014998c4;
    }
  }
  local_238[0] = -0x7ffffffe;
LAB_014998c4:
  if (local_238[0] == -0x7ffffffe) {
    *param_1 = 4;
    param_1[1] = 0;
    return;
  }
  FUN_016dd1aa(&local_178,local_238,0x44);
  uVar7 = 2;
  if ((char)param_2[0x14] != '\x02') {
    (**(code **)param_2[0x10])(&local_130,param_2 + 0x13,param_2[0x11],param_2[0x12]);
    uVar7 = (undefined1)param_2[0x14];
  }
  local_120 = CONCAT31(local_120._1_3_,uVar7);
  if (*param_2 == 3 && param_2[1] == 0) {
    iVar10 = 0;
    iVar9 = 3;
  }
  else {
    local_244 = (undefined2)param_2[0xe];
    uVar11 = FUN_014994d0(param_2[6],param_2[7]);
    FUN_01497e8c(&local_50,param_2[9],param_2[10]);
    FUN_01497d1c(&local_1f0,param_2[0xc],param_2[0xd]);
    iVar9 = *param_2;
    iVar10 = 0;
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    else if (iVar9 == 1) {
      iVar9 = 1;
    }
    else {
      iVar10 = param_2[1];
      local_40 = param_2[2];
      iStack_3c = param_2[3];
      iStack_38 = param_2[4];
      iStack_34 = param_2[5];
    }
    local_60 = local_50;
    local_5c = iStack_4c;
    local_58 = local_48;
    local_70 = local_1f0;
    local_6c = local_1ec;
    local_68 = local_1e8;
  }
  FUN_016dd1aa((uint)auStack_90 | 6,&local_130,0x14);
  FUN_016dd1aa((uint)&local_130 | 4,local_238,0x44);
  param_1[2] = local_40;
  param_1[3] = iStack_3c;
  param_1[4] = iStack_38;
  param_1[5] = iStack_34;
  *(undefined8 *)(param_1 + 6) = uVar11;
  *(undefined2 *)(param_1 + 0xe) = local_244;
  param_1[0xb] = (int)local_70;
  param_1[0xc] = local_6c;
  param_1[0xd] = local_68;
  *param_1 = iVar9;
  param_1[1] = iVar10;
  param_1[8] = local_60;
  param_1[9] = local_5c;
  param_1[10] = local_58;
  FUN_016dd1aa((int)param_1 + 0x3a,auStack_90,0x1a);
  FUN_016dd1aa(param_1 + 0x15,&local_130,0x48);
  return;
}

