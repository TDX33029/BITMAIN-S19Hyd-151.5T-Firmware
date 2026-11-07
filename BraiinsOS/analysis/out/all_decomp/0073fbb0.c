// FUN_0073fbb0 @ 0073fbb0 size=4364 calls_out=30 calls_in=1
// strings: BUG: cannot lock connection details

longlong FUN_0073fbb0(uint *param_1,undefined4 param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint ****ppppuVar9;
  byte *pbVar10;
  uint *puVar11;
  uint uVar12;
  code *pcVar13;
  uint *****pppppuVar14;
  uint unaff_r6;
  uint ******ppppppuVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 *local_210;
  uint *****local_208;
  undefined4 *puStack_204;
  uint ******ppppppuStack_200;
  code *local_1fc;
  undefined4 uStack_1f8;
  uint ******local_1a0;
  code *local_19c;
  uint *local_198;
  code *local_194;
  uint ******ppppppuStack_190;
  undefined4 *local_18c;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint ****local_178;
  code *pcStack_174;
  undefined4 uStack_170;
  uint ****local_168;
  code *local_164;
  undefined4 uStack_160;
  uint ******local_158;
  undefined4 *local_154;
  uint ******ppppppuStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint local_80;
  undefined4 local_7c;
  int local_74;
  undefined4 local_70;
  uint ****local_68;
  undefined4 local_64;
  int local_5c;
  undefined4 local_58;
  undefined1 auStack_50 [8];
  uint ******local_48;
  code *local_44;
  uint *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x71)) {
  case 0:
    puVar18 = param_1 + 0x1b;
    *puVar18 = 0;
    puVar11 = param_1 + 0x10;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    uVar16 = param_1[0x15];
    *puVar11 = param_1[0x16];
    param_1[0x11] = param_1[0x17];
    param_1[0x12] = param_1[0x18];
    param_1[0x13] = param_1[0x19];
    param_1[0x14] = param_1[0x1a];
    FUN_016151c8(&local_158,puVar11);
    if (local_158 == (uint ******)&DAT_00000016) {
      puVar4 = (undefined4 *)((uint)&local_158 | 4);
      local_208 = (uint *****)*puVar4;
      puStack_204 = (undefined4 *)puVar4[1];
      ppppppuStack_200 = (uint ******)puVar4[2];
      local_1fc = (code *)puVar4[3];
      uStack_1f8 = puVar4[4];
      if (*(uint *)(uVar16 + 8) != 2) {
        iVar5 = *(int *)(uVar16 + 0xc);
        if ((*(uint *)(uVar16 + 8) & 1) != 0) {
          iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
        }
        (**(code **)(*(int *)(uVar16 + 0x10) + 0x30))(iVar5,uVar16);
        iVar5 = *(int *)(uVar16 + 0xc);
        if (*(int *)(uVar16 + 8) == 1) {
          iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
        }
        (**(code **)(*(int *)(uVar16 + 0x10) + 0x34))(iVar5,uVar16);
      }
      local_168 = (uint ****)(param_1 + 0x13);
      iVar5 = *(int *)(uVar16 + 0x40);
      local_164 = FUN_00710798;
      FUN_00600d2c(&local_1a0,&DAT_00340541,&local_168);
      local_48 = local_1a0;
      local_44 = local_19c;
      local_40 = local_198;
      FUN_0073f928(*(undefined4 *)(iVar5 + 0x548),&local_48);
      local_19c = FUN_0161ea4c;
      local_1a0 = &local_208;
      uVar6 = FUN_00741338(&DAT_0058b443,&local_1a0);
      FUN_00a326d8(&local_208);
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      *puVar18 = 0x1010101;
      *param_1 = (uint)local_158;
      param_1[1] = (uint)local_154;
      param_1[2] = (uint)ppppppuStack_150;
      param_1[3] = uStack_14c;
      param_1[4] = uStack_148;
      param_1[5] = local_144;
      param_1[6] = uStack_140;
      param_1[7] = uStack_13c;
      param_1[8] = uStack_138;
      param_1[9] = uStack_134;
      param_1[10] = local_130;
      param_1[0xb] = uStack_12c;
      param_1[0xc] = uStack_128;
      param_1[0xd] = uStack_124;
      param_1[0xe] = uStack_120;
      param_1[0xf] = uStack_11c;
      switch(*param_1) {
      case 1:
        *(undefined1 *)(param_1 + 0x21) = 0;
        *(short *)(param_1 + 0x20) = (short)param_1[2];
        param_1[0x1e] = uVar16;
        param_1[0x1f] = param_1[1];
        uVar6 = *(uint *)(uVar16 + 8);
        goto joined_r0x0073fd5c;
      case 2:
        param_1[0x1e] = uVar16;
        *(undefined1 *)((int)param_1 + 0x6d) = 0;
        *(undefined1 *)(param_1 + 0x22) = 0;
        param_1[0x1f] = param_1[1];
        param_1[0x20] = param_1[2];
        param_1[0x21] = param_1[3];
        goto LAB_0073fd1c;
      default:
        *(undefined1 *)(param_1 + 0x1c) = 0;
        *puVar18 = 0;
        local_158 = (uint ******)*param_1;
        local_154 = (undefined4 *)param_1[1];
        ppppppuStack_150 = (uint ******)param_1[2];
        uStack_14c = param_1[3];
        uStack_148 = param_1[4];
        local_144 = param_1[5];
        uStack_140 = param_1[6];
        uStack_13c = param_1[7];
        uStack_138 = param_1[8];
        uStack_134 = param_1[9];
        local_130 = param_1[10];
        uStack_12c = param_1[0xb];
        uStack_128 = param_1[0xc];
        uStack_124 = param_1[0xd];
        uStack_120 = param_1[0xe];
        uStack_11c = param_1[0xf];
        local_164 = (code *)0x3d;
        local_168 = (uint ****)&DAT_00340504;
        FUN_0075d414(uVar16,&local_168,&local_158);
        iVar5 = *(int *)(uVar16 + 0x40);
        puStack_204 = &DAT_0157d360;
        local_1fc = FUN_016143b0;
        local_208 = &local_168;
        ppppppuStack_200 = (uint ******)&local_158;
        FUN_00710be8(&local_1a0,&local_208);
        local_48 = local_1a0;
        local_44 = local_19c;
        local_40 = local_198;
        FUN_0073f928(*(undefined4 *)(iVar5 + 0x548),&local_48);
        local_1fc = FUN_016143b0;
        puStack_204 = &DAT_0157d360;
        local_208 = &local_168;
        ppppppuStack_200 = (uint ******)&local_158;
        uVar6 = FUN_00741338(&DAT_00585fcb,&local_208);
        FUN_0072bc40(&local_158);
        break;
      case 5:
        param_1[0x1e] = uVar16;
        *(undefined1 *)((int)param_1 + 0x6e) = 0;
        param_1[0x1f] = param_1[1];
        param_1[0x20] = param_1[2];
        param_1[0x21] = param_1[3];
        param_1[0x22] = param_1[4];
        param_1[0x23] = param_1[5];
        param_1[0x24] = param_1[6];
        param_1[0x25] = param_1[7];
        param_1[0x26] = param_1[8];
        param_1[0x27] = param_1[9];
        param_1[0x28] = param_1[10];
        param_1[0x29] = param_1[0xb];
        param_1[0x2a] = param_1[0xc];
        param_1[0x2b] = param_1[0xd];
        *(undefined1 *)(param_1 + 0x2c) = 0;
        goto LAB_0073fd88;
      case 8:
        param_1[0x1e] = uVar16;
        *(undefined1 *)((int)param_1 + 0x6f) = 0;
        *(undefined1 *)(param_1 + 0x22) = 0;
        param_1[0x1f] = param_1[1];
        param_1[0x20] = param_1[2];
        param_1[0x21] = param_1[3];
        goto LAB_0073fce0;
      case 0x15:
        local_fc = param_1[1];
        uStack_f8 = param_1[2];
        uStack_f4 = param_1[3];
        *(undefined1 *)(param_1 + 0x1c) = 0;
        FUN_016dd1aa(&local_208,&local_158,0x68);
        FUN_016dd1aa(param_1 + 0x1e,&local_208,0x68);
        *(undefined1 *)((int)param_1 + 0xe5) = 0;
        param_1[0x38] = uVar16;
        goto LAB_0073fc98;
      }
    }
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *puVar18 = 0;
    if (*puVar11 == 0) goto LAB_007409a8;
    goto LAB_007409a0;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185b53c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185b53c);
  case 3:
    if ((char)param_1[0x21] != '\0') {
      if ((char)param_1[0x21] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0185b5cc);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185b5cc);
    }
    uVar16 = param_1[0x1e];
    uVar6 = *(uint *)(uVar16 + 8);
joined_r0x0073fd5c:
    if (uVar6 != 2) {
      iVar5 = *(int *)(uVar16 + 0xc);
      if ((uVar6 & 1) != 0) {
        iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar16 + 0x10) + 0x30))(iVar5,uVar16);
      iVar5 = *(int *)(uVar16 + 0xc);
      if (*(int *)(uVar16 + 8) == 1) {
        iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar16 + 0x10) + 0x34))(iVar5,uVar16);
    }
    *(undefined1 *)(param_1 + 0x21) = 1;
    uVar6 = 0;
    uVar16 = *param_1;
    goto joined_r0x0073ff80;
  case 4:
    if ((char)param_1[0x22] != '\0') {
      if ((char)param_1[0x22] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0185b59c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185b59c);
    }
    uVar16 = param_1[0x1e];
LAB_0073fd1c:
    ppppppuVar15 = (uint ******)param_1[0x1f];
    pcVar13 = (code *)param_1[0x20];
    if (*(uint *)(uVar16 + 8) != 2) {
      iVar5 = *(int *)(uVar16 + 0xc);
      if ((*(uint *)(uVar16 + 8) & 1) != 0) {
        iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar16 + 0x10) + 0x30))(iVar5,uVar16);
      iVar5 = *(int *)(uVar16 + 0xc);
      if (*(int *)(uVar16 + 8) == 1) {
        iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar16 + 0x10) + 0x34))(iVar5,uVar16);
    }
    local_19c = (code *)&DAT_0157d360;
    local_1a0 = (uint ******)&local_48;
    local_48 = ppppppuVar15;
    local_44 = pcVar13;
    FUN_00600d2c(&local_158,&DAT_00596d71,&local_1a0);
    local_208 = (uint *****)local_158;
    puStack_204 = local_154;
    ppppppuStack_200 = ppppppuStack_150;
    uVar6 = FUN_0072faa8(&local_208);
    break;
  case 5:
    if ((char)param_1[0x2c] != '\0') {
      if ((char)param_1[0x2c] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0185b5ec);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185b5ec);
    }
    uVar16 = param_1[0x1e];
LAB_0073fd88:
    uVar6 = param_1[0x1f];
    uVar17 = param_1[0x20];
    local_1a0 = (uint ******)param_1[0x21];
    local_19c = (code *)param_1[0x22];
    local_198 = (uint *)param_1[0x23];
    local_194 = (code *)param_1[0x24];
    ppppppuStack_190 = (uint ******)param_1[0x25];
    local_18c = (undefined4 *)param_1[0x26];
    local_188 = param_1[0x27];
    uStack_184 = param_1[0x28];
    uStack_180 = param_1[0x29];
    uStack_17c = param_1[0x2a];
    if (*(uint *)(uVar16 + 8) != 2) {
      iVar5 = *(int *)(uVar16 + 0xc);
      if ((*(uint *)(uVar16 + 8) & 1) != 0) {
        iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar16 + 0x10) + 0x30))(iVar5,uVar16);
      iVar5 = *(int *)(uVar16 + 0xc);
      if (*(int *)(uVar16 + 8) == 1) {
        iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar16 + 0x10) + 0x34))(iVar5,uVar16);
    }
    *(undefined4 *)(uVar16 + 0x20) = local_198;
    *(code **)(uVar16 + 0x24) = local_194;
    *(uint *******)(uVar16 + 0x28) = ppppppuStack_190;
    *(undefined4 **)(uVar16 + 0x2c) = local_18c;
    *(uint *)(uVar16 + 0x30) = local_188;
    *(uint *)(uVar16 + 0x34) = uStack_184;
    *(uint *)(uVar16 + 0x38) = uStack_180;
    *(uint *)(uVar16 + 0x3c) = uStack_17c;
    DataMemoryBarrier(0xb);
    if (DAT_018d7c7c == 0) {
      FUN_007901fc(&local_158,*(int *)(uVar16 + 0x40) + 0x10);
      local_2c = 0;
      local_30 = 0xffff0000;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = (uint *)0x0;
      local_44 = (code *)0x0;
      local_48 = (uint ******)0x0;
      FUN_01289fbc(&local_208,&local_48,(undefined4 *)(uVar16 + 0x20));
      FUN_0077fc54(DAT_018d7cd8,&local_158,local_208,puStack_204,ppppppuStack_200,local_1fc);
    }
    if (uVar17 != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    *(undefined1 *)(param_1 + 0x2c) = 1;
    uVar16 = *param_1;
    goto joined_r0x00740970;
  case 6:
    if ((char)param_1[0x22] != '\0') {
      if ((char)param_1[0x22] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0185b5dc);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185b5dc);
    }
    uVar16 = param_1[0x1e];
LAB_0073fce0:
    ppppppuVar15 = (uint ******)param_1[0x1f];
    pcVar13 = (code *)param_1[0x20];
    if (*(uint *)(uVar16 + 8) != 2) {
      iVar5 = *(int *)(uVar16 + 0xc);
      if ((*(uint *)(uVar16 + 8) & 1) != 0) {
        iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar16 + 0x10) + 0x30))(iVar5,uVar16);
      iVar5 = *(int *)(uVar16 + 0xc);
      if (*(int *)(uVar16 + 8) == 1) {
        iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar16 + 0x10) + 0x34))(iVar5,uVar16);
    }
    local_19c = (code *)&DAT_0157d360;
    local_1a0 = (uint ******)&local_48;
    local_48 = ppppppuVar15;
    local_44 = pcVar13;
    FUN_00600d2c(&local_158,&DAT_0057dd40,&local_1a0);
    local_208 = (uint *****)local_158;
    puStack_204 = local_154;
    ppppppuStack_200 = ppppppuStack_150;
    uVar6 = FUN_0072faa8(&local_208);
    break;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0xe5)) {
    case 0:
      uVar16 = param_1[0x38];
LAB_0073fc98:
      *(undefined1 *)(param_1 + 0x39) = 0;
      param_1[0x1e] = param_1[0x35];
      param_1[0x1f] = param_1[0x36];
      param_1[0x20] = param_1[0x37];
      if (*(uint *)(uVar16 + 8) != 2) {
        iVar5 = *(int *)(uVar16 + 0xc);
        if ((*(uint *)(uVar16 + 8) & 1) != 0) {
          iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
        }
        (**(code **)(*(int *)(uVar16 + 0x10) + 0x30))(iVar5,uVar16);
        iVar5 = *(int *)(uVar16 + 0xc);
        if (*(int *)(uVar16 + 8) == 1) {
          iVar5 = iVar5 + (*(int *)(*(int *)(uVar16 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
        }
        (**(code **)(*(int *)(uVar16 + 0x10) + 0x34))(iVar5,uVar16);
      }
      uVar6 = param_1[0x1f];
      if ((int)uVar6 < 0) {
        uVar7 = 0;
LAB_007402f8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,uVar6);
      }
      uVar17 = param_1[0x1e];
      if (uVar6 == 0) {
        uVar12 = 0;
        uVar8 = 1;
      }
      else {
        uVar8 = thunk_FUN_016d4a50(uVar6);
        if (uVar8 == 0) {
          uVar7 = 1;
          goto LAB_007402f8;
        }
        uVar12 = uVar6;
      }
      FUN_016dd1aa(uVar8,uVar17,uVar6);
      *(undefined1 *)(param_1 + 0x39) = 1;
      param_1[0x21] = uVar12;
      param_1[0x22] = uVar8;
      param_1[0x23] = uVar6;
      iVar5 = *(int *)(uVar16 + 0x40);
      FUN_007901fc(&local_158,iVar5 + 0x10);
      local_198 = (uint *)auStack_50;
      local_1a0 = (uint ******)&local_68;
      local_194 = FUN_00fac370;
      local_19c = (code *)&DAT_006043a8;
      FUN_00600d2c(&local_48,&DAT_005988a1,&local_1a0);
      local_198 = param_1 + 0x20;
      local_194 = FUN_00fac370;
      local_18c = &DAT_006043a8;
      local_19c = (code *)&DAT_006043a8;
      local_1a0 = (uint ******)(param_1 + 0x21);
      ppppppuStack_190 = (uint ******)&local_48;
      FUN_00600d2c(&local_168,&DAT_0057ecea,&local_1a0);
      if (local_48 != (uint ******)0x0) {
        thunk_FUN_016d3fb4(local_44);
      }
      if (((uint)local_158 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_154);
      }
      if (local_74 != 0) {
        thunk_FUN_016d3fb4(local_70);
      }
      if ((local_80 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_7c);
      }
      if (local_68 != (uint ****)0x0) {
        thunk_FUN_016d3fb4(local_64);
      }
      if (local_5c != 0) {
        thunk_FUN_016d3fb4(local_58);
      }
      local_178 = local_168;
      pcStack_174 = local_164;
      uStack_170 = uStack_160;
      FUN_0073f928(*(undefined4 *)(iVar5 + 0x548),&local_178);
      iVar5 = *(int *)(uVar16 + 0x40);
      param_1[0x24] = (uint)param_1[0x21];
      uVar16 = iVar5 + 0x10;
      param_1[0x25] = param_1[0x22];
      param_1[0x26] = param_1[0x23];
      param_1[0x27] = uVar16;
      sVar1 = (short)param_1[0x20];
      *(undefined1 *)(param_1 + 0x39) = 0;
      *(undefined1 *)((int)param_1 + 0xd2) = 0;
      *(short *)(param_1 + 0x34) = sVar1;
LAB_00740614:
      pppppuVar14 = (uint *****)(uVar16 + 0x3d0);
      param_1[0x28] = param_1[0x24];
      *(undefined1 *)((int)param_1 + 0xd3) = 1;
      param_1[0x29] = param_1[0x25];
      param_1[0x2a] = param_1[0x26];
      do {
        if (*pppppuVar14 != (uint ****)0x0) {
          ClearExclusiveLocal();
          FUN_015bf680(pppppuVar14,param_2);
          goto LAB_00740654;
        }
        bVar2 = (bool)hasExclusiveAccess(pppppuVar14);
      } while (!bVar2);
      *pppppuVar14 = (uint ****)0x1;
      DataMemoryBarrier(0xb);
LAB_00740654:
      uVar6 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar3 = *(char *)(uVar16 + 0x3d4);
      }
      else {
        uVar6 = FUN_015bf3f8(DAT_018dd988,param_2);
        uVar6 = uVar6 ^ 1;
        cVar3 = *(char *)(uVar16 + 0x3d4);
      }
      if (cVar3 != '\0') {
        uVar16 = (uint)local_154 >> 8;
        local_154 = (undefined4 *)CONCAT31((int3)uVar16,(char)uVar6);
        local_158 = (uint ******)pppppuVar14;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: cannot lock connection details",0x23,&local_158,&DAT_0185a4e8,
                     &DAT_0185b51c);
      }
      if (param_1[0x2a] != 0) {
        if ((param_1[0x2a] != *(uint *)(uVar16 + 0x4d0)) ||
           (iVar5 = thunk_FUN_016dd50a(param_1[0x29],*(undefined4 *)(uVar16 + 0x4cc)), iVar5 != 0))
        {
          local_158 = (uint ******)param_1[0x28];
          local_154 = (undefined4 *)param_1[0x29];
          ppppppuStack_150 = (uint ******)param_1[0x2a];
          *(undefined1 *)((int)param_1 + 0xd3) = 0;
          if (*(int *)(uVar16 + 0x4c8) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(uVar16 + 0x4cc),param_2);
          }
          *(int *)(uVar16 + 0x4c8) = (int)local_158;
          *(undefined4 **)(uVar16 + 0x4cc) = local_154;
          *(uint *******)(uVar16 + 0x4d0) = ppppppuStack_150;
        }
        if ((sVar1 != 0) && (*(short *)(uVar16 + 0x4e0) != sVar1)) {
          *(short *)(uVar16 + 0x4e0) = sVar1;
        }
      }
      if (((uVar6 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(DAT_018dd988,param_2), iVar5 == 0)) {
        *(undefined1 *)(uVar16 + 0x3d4) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        ppppuVar9 = *pppppuVar14;
        bVar2 = (bool)hasExclusiveAccess(pppppuVar14);
      } while (!bVar2);
      *pppppuVar14 = (uint ****)0x0;
      if (ppppuVar9 == (uint ****)0x2) {
        FUN_016d6968(0xf0,pppppuVar14,0x81,1);
      }
      uVar6 = uVar16 + 0x2a0;
      param_1[0x2b] = uVar6;
      param_1[0x2c] = uVar16;
      *(undefined1 *)(param_1 + 0x33) = 0;
LAB_0074077c:
      unaff_r6 = uVar6 + 4;
      *(undefined1 *)((int)param_1 + 0xc9) = 0;
      param_1[0x30] = unaff_r6;
      param_1[0x31] = uVar16;
LAB_00740790:
      *(undefined1 *)(param_1 + 0x32) = 1;
      param_1[0x2d] = unaff_r6 + 4;
      param_1[0x2e] = 0xffffffff;
      param_1[0x2f] = uVar16;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0185b56c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0185b56c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0xd2)) {
      case 0:
        sVar1 = (short)param_1[0x34];
        uVar16 = param_1[0x27];
        goto LAB_00740614;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0185b52c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0185b52c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x33]) {
      case '\0':
        uVar6 = param_1[0x2b];
        uVar16 = param_1[0x2c];
        goto LAB_0074077c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187aed0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187aed0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0xc9)) {
      case 0:
        unaff_r6 = param_1[0x30];
        uVar16 = param_1[0x31];
        goto LAB_00740790;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187af00);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187af00);
      }
    }
    local_210 = (undefined1 *)((int)param_1 + 0xe5);
    iVar5 = FUN_006f59b4(param_1 + 0x2d,param_2);
    if (iVar5 == 0) {
      *(undefined1 *)((int)param_1 + 0xe5) = 3;
      *(undefined1 *)((int)param_1 + 0xd2) = 3;
      *(undefined1 *)(param_1 + 0x33) = 3;
      *(undefined1 *)((int)param_1 + 0xc9) = 3;
      *(undefined1 *)((int)param_1 + 0x71) = 7;
      return CONCAT44(unaff_r6,1);
    }
    uVar16 = param_1[0x2d];
    if (uVar16 != 0) {
      FUN_006f5fbc(uVar16,param_1[0x2e],1);
    }
    uVar16 = (uint)*(byte *)(*(int *)(iVar5 + 0x20) + 8);
    while( true ) {
      while ((1 << uVar16 & 0x8aU) != 0) {
        pbVar10 = (byte *)(*(int *)(iVar5 + 0x20) + 8);
        while (*pbVar10 == uVar16) {
          bVar2 = (bool)hasExclusiveAccess(pbVar10);
          if (bVar2) {
            *pbVar10 = 4;
            if (uVar16 == 7) goto LAB_007408fc;
            goto LAB_007408d0;
          }
        }
        ClearExclusiveLocal();
        uVar16 = (uint)*pbVar10;
      }
      if ((1 << uVar16 & 0x104U) == 0) break;
      pbVar10 = (byte *)(*(int *)(iVar5 + 0x20) + 8);
      while (*pbVar10 == uVar16) {
        bVar2 = (bool)hasExclusiveAccess(pbVar10);
        if (bVar2) {
          *pbVar10 = 6;
          if (uVar16 != 8) {
LAB_007408d0:
            *(undefined1 *)(param_1 + 0x32) = 0;
            FUN_00798734(param_1[0x2f]);
            cVar3 = FUN_006b9e24(iVar5 + 0x24);
            if (cVar3 != '\x02') {
              local_1a0 = (uint ******)CONCAT31(local_1a0._1_3_,cVar3);
            }
            if (cVar3 != '\x02' && cVar3 != '\0') {
              local_158 = (uint ******)&local_1a0;
              local_154 = (undefined4 *)&LAB_0100eb80;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0058c10f,&local_158,&DAT_0187af10);
            }
          }
          goto LAB_007408fc;
        }
      }
      ClearExclusiveLocal();
      uVar16 = (uint)*pbVar10;
    }
LAB_007408fc:
    FUN_006f625c(iVar5);
    *(undefined1 *)(param_1 + 0x33) = 1;
    *(undefined2 *)(param_1 + 0x32) = 0x100;
    if ((*(char *)((int)param_1 + 0xd3) == '\x01') && (param_1[0x28] != 0)) {
      thunk_FUN_016d3fb4(param_1[0x29]);
    }
    *(undefined2 *)((int)param_1 + 0xd2) = 1;
    FUN_0065c884(param_1 + 0x24);
    *(undefined1 *)(param_1 + 0x39) = 0;
    if (param_1[0x1f] != 0) {
      thunk_FUN_016d3fb4(param_1[0x1e]);
    }
    *local_210 = 1;
    uVar16 = *param_1;
joined_r0x00740970:
    uVar6 = 0;
    if (uVar16 < 0x16) goto LAB_00740974;
    goto LAB_007409c0;
  }
  if (pcVar13 != (code *)0x0) {
    thunk_FUN_016d3fb4(ppppppuVar15);
  }
  *(undefined1 *)(param_1 + 0x22) = 1;
  uVar16 = *param_1;
joined_r0x0073ff80:
  if (uVar16 < 0x16) {
LAB_00740974:
    if ((1 << (uVar16 & 0xff) & 0x200124U) == 0) goto LAB_007409c0;
  }
  else {
LAB_007409c0:
    FUN_0072bc40(param_1);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1b] = 0;
  if (param_1[0x10] != 0) {
LAB_007409a0:
    thunk_FUN_016d3fb4(param_1[0x11]);
  }
LAB_007409a8:
  *(undefined1 *)((int)param_1 + 0x71) = 1;
  return (ulonglong)uVar6 << 0x20;
}

