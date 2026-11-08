// FUN_011ce168 @ 011ce168 size=1424 calls_out=16 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011ce168(undefined4 *param_1,undefined4 *******param_2,undefined4 param_3,
                 undefined4 ****param_4)

{
  undefined4 ******ppppppuVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *****pppppuVar6;
  undefined4 *puVar7;
  undefined4 *****pppppuVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *****pppppuVar15;
  undefined4 ******local_1d0;
  int local_1cc;
  undefined4 ******local_1c8;
  int local_1c4;
  undefined1 auStack_1c0 [16];
  undefined1 *local_1b0;
  undefined4 *******local_190;
  undefined4 *******local_18c;
  undefined4 *******local_188;
  undefined4 *******local_184;
  undefined4 *******pppppppuStack_180;
  undefined4 *******pppppppuStack_17c;
  undefined4 *******local_178;
  undefined4 *******local_174;
  undefined4 *******pppppppuStack_170;
  undefined4 *******pppppppuStack_16c;
  undefined4 *******local_168;
  undefined4 *******pppppppuStack_164;
  undefined4 *******pppppppuStack_160;
  undefined4 *******pppppppuStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 *******local_150;
  undefined4 *******pppppppuStack_14c;
  undefined4 *******pppppppuStack_148;
  undefined4 *******local_144;
  undefined4 *******pppppppuStack_140;
  undefined4 *******pppppppuStack_13c;
  undefined4 *******pppppppuStack_138;
  undefined4 *******local_130;
  undefined4 *******pppppppuStack_12c;
  undefined4 *******pppppppuStack_128;
  undefined4 *******pppppppuStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 ******local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 *******local_f0;
  undefined4 *******pppppppuStack_ec;
  undefined4 *******pppppppuStack_e8;
  undefined4 *******pppppppuStack_e4;
  undefined4 *******local_e0;
  undefined4 *******local_dc;
  undefined4 *******local_d8;
  undefined4 *******pppppppuStack_d4;
  undefined4 *******local_d0;
  undefined4 *******pppppppuStack_cc;
  undefined4 *******pppppppuStack_c8;
  undefined4 *******pppppppuStack_c4;
  undefined4 *******local_c0;
  undefined4 *******pppppppuStack_bc;
  undefined4 *******pppppppuStack_b8;
  undefined4 *******local_b4;
  undefined4 *******pppppppuStack_b0;
  undefined4 *******pppppppuStack_ac;
  undefined4 *******local_a8;
  undefined4 *******pppppppuStack_a4;
  undefined4 *******pppppppuStack_a0;
  undefined4 *******pppppppuStack_9c;
  undefined4 *******pppppppuStack_98;
  undefined4 *******pppppppuStack_94;
  undefined4 ******local_90;
  int local_8c;
  int iStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 *******local_70;
  undefined4 *******local_6c;
  undefined4 *******local_68;
  undefined4 *******local_64;
  undefined4 *******local_60;
  int local_50;
  int *local_4c;
  int local_48;
  int local_40;
  int *local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int iStack_28;
  
  pppppuVar15 = (undefined4 *****)0x0;
  pppppuVar6 = param_2[4][4];
  if (pppppuVar6 != (undefined4 *****)0x0) {
    pppppuVar8 = param_2[4][3];
    iVar9 = (int)pppppuVar6 * 0x48;
    do {
      if ((pppppuVar8[3] == param_4) &&
         (iVar2 = thunk_FUN_01bed842(pppppuVar8[2] + 2,param_3,param_4), iVar2 == 0)) {
        pppppuVar15 = pppppuVar8;
        break;
      }
      pppppuVar8 = pppppuVar8 + 0x12;
      iVar9 = iVar9 + -0x48;
    } while (iVar9 != 0);
  }
  if (pppppuVar15 != (undefined4 *****)0x0) {
    pppppuVar15 = pppppuVar15 + 4;
  }
  FUN_00ad9f18(&local_1c8,pppppuVar15);
  if (local_1b0 == &DAT_80000008) {
    local_1cc = 0;
    local_1d0 = (undefined4 ******)0x0;
LAB_011ce20c:
    local_e0 = (undefined4 *******)&DAT_80000000;
  }
  else {
    local_1cc = local_1c4;
    local_8c = local_1c4;
    local_6c = &local_90;
    local_1d0 = local_1c8;
    local_90 = local_1c8;
    local_70 = param_2;
    FUN_00ab0d6c(&local_190,auStack_1c0,&local_70);
    if (local_190 != (undefined4 *******)0x0) {
      puVar3 = (undefined4 *)((uint)&local_190 | 4);
      uVar11 = *puVar3;
      uVar13 = puVar3[1];
      uVar14 = puVar3[2];
      uVar10 = puVar3[3];
      uVar12 = puVar3[4];
      param_1[0xd] = local_158;
      param_1[0xe] = local_154;
      *param_1 = uVar11;
      param_1[1] = uVar13;
      param_1[2] = uVar14;
      param_1[3] = uVar10;
      param_1[4] = uVar12;
      param_1[5] = local_178;
      param_1[6] = local_174;
      param_1[7] = pppppppuStack_170;
      param_1[8] = pppppppuStack_16c;
      param_1[9] = local_168;
      param_1[10] = pppppppuStack_164;
      param_1[0xb] = pppppppuStack_160;
      param_1[0xc] = pppppppuStack_15c;
      return;
    }
    puVar3 = (undefined4 *)((uint)&local_f0 | 4);
    *puVar3 = local_188;
    puVar3[1] = local_184;
    puVar3[2] = pppppppuStack_180;
    puVar3[3] = pppppppuStack_17c;
    local_c0 = local_174;
    pppppppuStack_bc = pppppppuStack_170;
    pppppppuStack_b8 = pppppppuStack_16c;
    local_b4 = local_168;
    pppppppuStack_b0 = pppppppuStack_164;
    pppppppuStack_ac = pppppppuStack_160;
    local_a8 = pppppppuStack_15c;
    local_130 = (undefined4 *******)*puVar3;
    pppppppuStack_12c = (undefined4 *******)puVar3[1];
    pppppppuStack_128 = (undefined4 *******)puVar3[2];
    pppppppuStack_124 = (undefined4 *******)puVar3[3];
    local_150 = local_174;
    pppppppuStack_14c = pppppppuStack_170;
    pppppppuStack_148 = pppppppuStack_16c;
    local_144 = local_168;
    pppppppuStack_140 = pppppppuStack_164;
    pppppppuStack_13c = pppppppuStack_160;
    pppppppuStack_138 = pppppppuStack_15c;
    if (local_178 == (undefined4 *******)0x80000007) goto LAB_011ce20c;
    local_e0 = local_178;
    local_dc = local_174;
    local_d8 = pppppppuStack_170;
    pppppppuStack_d4 = pppppppuStack_16c;
    local_d0 = local_168;
    pppppppuStack_cc = pppppppuStack_164;
    pppppppuStack_c8 = pppppppuStack_160;
    pppppppuStack_c4 = pppppppuStack_15c;
    local_f0 = local_130;
    pppppppuStack_ec = pppppppuStack_12c;
    pppppppuStack_e8 = pppppppuStack_128;
    pppppppuStack_e4 = pppppppuStack_124;
    if (local_178 == (undefined4 *******)0x80000006) {
      local_190 = (undefined4 *******)0x2;
      local_64 = pppppppuStack_12c + (int)pppppppuStack_128 * 0xc;
      local_70 = pppppppuStack_12c;
      local_6c = pppppppuStack_12c;
      local_68 = local_130;
      local_60 = &local_190;
      FUN_0116c1c8(&local_30,&local_70);
      if (local_30 == -0x80000000) {
        local_48 = 0;
        local_4c = (int *)&SUB_00000004;
        local_50 = 0;
        FUN_00703614(&local_70);
      }
      else {
        piVar4 = (int *)FUN_01298504(0x30,4);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x30);
        }
        *piVar4 = local_30;
        piVar4[1] = local_2c;
        piVar4[2] = iStack_28;
        local_40 = 4;
        local_38 = 1;
        iVar9 = 0xc;
        local_c0 = local_70;
        pppppppuStack_bc = local_6c;
        pppppppuStack_b8 = local_68;
        local_b4 = local_64;
        pppppppuStack_b0 = local_60;
        local_3c = piVar4;
        while (iVar2 = local_38, FUN_0116c1c8(&local_90,&local_c0),
              local_90 != (undefined4 ******)0x80000000) {
          if (iVar2 == local_40) {
            FUN_006520b4(&local_40,iVar2,1,4,0xc);
            piVar4 = local_3c;
          }
          piVar5 = (int *)((int)piVar4 + iVar9);
          local_38 = iVar2 + 1;
          iVar9 = iVar9 + 0xc;
          *piVar5 = (int)local_90;
          piVar5[1] = local_8c;
          piVar5[2] = iStack_88;
        }
        FUN_00703614(&local_c0);
        local_50 = local_40;
        local_4c = local_3c;
        local_48 = local_38;
      }
      if (local_190 == (undefined4 *******)0x2) {
        piVar4 = (int *)((uint)&local_c0 | 4);
        *piVar4 = local_50;
        piVar4[1] = (int)local_4c;
        piVar4[2] = local_48;
LAB_011ce690:
        puVar3 = (undefined4 *)((uint)&local_c0 | 4);
        puVar7 = (undefined4 *)((uint)&local_110 | 4);
        uVar11 = puVar3[1];
        uVar13 = puVar3[2];
        *puVar7 = *puVar3;
        puVar7[1] = uVar11;
        puVar7[2] = uVar13;
        local_110 = (undefined4 ******)0x2;
      }
      else {
        local_c0 = local_190;
        pppppppuStack_bc = local_18c;
        pppppppuStack_b8 = local_188;
        local_b4 = local_184;
        pppppppuStack_b0 = pppppppuStack_180;
        pppppppuStack_ac = pppppppuStack_17c;
        local_a8 = local_178;
        FUN_006a41c0(&local_50);
        if (local_c0 == (undefined4 *******)0x2) goto LAB_011ce690;
        FUN_00ddb9c8(&local_110,&local_c0);
      }
      if (local_e0 != (undefined4 *******)0x80000006) {
        FUN_00db19c4(&local_f0);
      }
      local_190 = (undefined4 *******)local_110;
      if (local_110 != (undefined4 ******)0x2) goto LAB_011ce508;
      goto LAB_011ce388;
    }
  }
  local_c0 = local_f0;
  pppppppuStack_bc = pppppppuStack_ec;
  pppppppuStack_b8 = pppppppuStack_e8;
  local_b4 = pppppppuStack_e4;
  pppppppuStack_b0 = local_e0;
  pppppppuStack_ac = local_dc;
  local_a8 = local_d8;
  pppppppuStack_a4 = pppppppuStack_d4;
  pppppppuStack_a0 = local_d0;
  pppppppuStack_9c = pppppppuStack_cc;
  pppppppuStack_98 = pppppppuStack_c8;
  pppppppuStack_94 = pppppppuStack_c4;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  local_190 = local_f0;
  local_18c = pppppppuStack_ec;
  local_188 = pppppppuStack_e8;
  local_184 = pppppppuStack_e4;
  pppppppuStack_180 = local_e0;
  pppppppuStack_17c = local_dc;
  local_178 = local_d8;
  local_174 = pppppppuStack_d4;
  pppppppuStack_170 = local_d0;
  pppppppuStack_16c = pppppppuStack_cc;
  local_168 = pppppppuStack_c8;
  pppppppuStack_164 = pppppppuStack_c4;
  FUN_006c8594(&local_70);
  if (local_70 == (undefined4 *******)0x2) {
    puVar7 = (undefined4 *)((uint)&local_90 | 4);
    *puVar7 = local_6c;
    puVar7[1] = local_68;
    puVar7[2] = local_64;
  }
  else {
    FUN_00ddb9c8(&local_90,&local_70);
    ppppppuVar1 = local_90;
    if (local_90 != (undefined4 ******)0x2) {
      piVar4 = (int *)((uint)&local_90 | 4);
      local_30 = *piVar4;
      local_2c = piVar4[1];
      iStack_28 = piVar4[2];
      piVar4 = (int *)((uint)&local_110 | 4);
      local_100 = local_80;
      uStack_fc = uStack_7c;
      local_f8 = uStack_78;
      *piVar4 = local_30;
      piVar4[1] = local_2c;
      piVar4[2] = iStack_28;
      thunk_FUN_01be4678(puVar3);
      local_190 = (undefined4 *******)ppppppuVar1;
LAB_011ce508:
      local_120 = local_104;
      uStack_11c = local_100;
      uStack_118 = uStack_fc;
      local_188 = (undefined4 *******)local_108;
      local_18c = (undefined4 *******)local_10c;
      local_184 = (undefined4 *******)local_104;
      pppppppuStack_180 = (undefined4 *******)local_100;
      pppppppuStack_17c = (undefined4 *******)uStack_fc;
      local_178 = (undefined4 *******)local_f8;
      FUN_00ddb4b4(param_1,&local_190,local_1d0,local_1cc);
      return;
    }
  }
  puVar7 = (undefined4 *)((uint)&local_90 | 4);
  uVar11 = puVar7[1];
  uVar13 = puVar7[2];
  *puVar3 = *puVar7;
  puVar3[1] = uVar11;
  puVar3[2] = uVar13;
LAB_011ce388:
  puVar3 = (undefined4 *)((uint)&local_110 | 4);
  uVar11 = *puVar3;
  uVar13 = puVar3[1];
  uVar14 = puVar3[2];
  param_1[1] = local_1d0;
  param_1[2] = local_1cc;
  param_1[3] = uVar11;
  param_1[4] = uVar13;
  param_1[5] = uVar14;
  *param_1 = 2;
  return;
}

