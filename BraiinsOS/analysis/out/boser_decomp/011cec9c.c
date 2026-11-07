// FUN_011cec9c @ 011cec9c size=1424 calls_out=13 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_011cec9c(undefined4 *param_1,undefined4 *******param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *****pppppuVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *******pppppppuVar6;
  undefined4 *******pppppppuVar7;
  undefined4 *****pppppuVar8;
  undefined4 *****pppppuVar9;
  undefined4 *******pppppppuVar10;
  undefined4 *******pppppppuVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 ******ppppppuVar17;
  undefined4 ******local_1cc;
  undefined4 ******local_1c8;
  undefined4 local_1c4;
  undefined1 auStack_1c0 [16];
  undefined1 *local_1b0;
  undefined4 *******local_190;
  undefined4 *******local_18c;
  undefined4 *******local_188;
  undefined4 *******local_184;
  undefined4 *******local_180;
  undefined4 *******local_17c;
  undefined4 *******local_178;
  undefined4 *******local_174;
  undefined4 *******local_170;
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
  undefined4 *******local_120;
  undefined4 *******pppppppuStack_11c;
  undefined4 *******pppppppuStack_118;
  undefined4 *******local_110;
  undefined4 *******local_10c;
  undefined4 *******local_108;
  undefined4 *******local_104;
  undefined4 *******pppppppuStack_100;
  undefined4 *******pppppppuStack_fc;
  undefined4 *******local_f8;
  undefined4 *******local_f0;
  undefined4 *******local_ec;
  undefined4 *******local_e8;
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
  undefined4 *******local_90;
  undefined4 *******pppppppuStack_8c;
  undefined4 *******pppppppuStack_88;
  undefined4 *******local_84;
  undefined4 *******pppppppuStack_80;
  undefined4 *******pppppppuStack_7c;
  undefined4 *******pppppppuStack_78;
  undefined4 *******local_70;
  undefined4 *******pppppppuStack_6c;
  undefined4 *******pppppppuStack_68;
  undefined4 *******local_64;
  undefined4 *******local_60;
  undefined4 *******local_5c;
  undefined4 *******local_58;
  undefined4 *******pppppppuStack_54;
  undefined4 *******local_50;
  undefined4 *******pppppppuStack_4c;
  undefined4 *******pppppppuStack_48;
  undefined4 *******pppppppuStack_44;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  undefined4 *******local_38;
  undefined4 *******local_34;
  undefined4 *******local_30;
  undefined4 *******pppppppuStack_2c;
  undefined4 *******pppppppuStack_28;
  
  pppppuVar9 = (undefined4 *****)0x0;
  pppppuVar3 = param_2[4][4];
  if (pppppuVar3 != (undefined4 *****)0x0) {
    pppppuVar8 = param_2[4][3];
    iVar14 = (int)pppppuVar3 * 0x48;
    do {
      if ((pppppuVar8[3] == (undefined4 ****)0xf) &&
         (iVar1 = thunk_FUN_01bed842(pppppuVar8[2] + 2,param_3,0xf), iVar1 == 0)) {
        pppppuVar9 = pppppuVar8;
        break;
      }
      pppppuVar8 = pppppuVar8 + 0x12;
      iVar14 = iVar14 + -0x48;
    } while (iVar14 != 0);
  }
  if (pppppuVar9 != (undefined4 *****)0x0) {
    pppppuVar9 = pppppuVar9 + 4;
  }
  FUN_00ad9f18(&local_1c8,pppppuVar9);
  if (local_1b0 == &DAT_80000008) {
    local_1c4 = 0;
    local_1cc = (undefined4 ******)0x0;
LAB_011ced3c:
    local_e0 = (undefined4 *******)&DAT_80000000;
    uVar5 = local_1c4;
LAB_011ced44:
    pppppppuVar6 = local_e0;
    local_c0 = local_f0;
    pppppppuStack_bc = local_ec;
    pppppppuStack_b8 = local_e8;
    local_b4 = pppppppuStack_e4;
    pppppppuStack_b0 = local_e0;
    pppppppuStack_ac = local_dc;
    local_a8 = local_d8;
    pppppppuStack_a4 = pppppppuStack_d4;
    pppppppuStack_a0 = local_d0;
    pppppppuStack_9c = pppppppuStack_cc;
    pppppppuStack_98 = pppppppuStack_c8;
    pppppppuStack_94 = pppppppuStack_c4;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x30);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x30);
    }
    local_40 = local_dc;
    local_3c = local_d8;
    local_38 = pppppppuStack_d4;
    local_34 = local_d0;
    local_30 = pppppppuStack_cc;
    pppppppuStack_2c = pppppppuStack_c8;
    pppppppuStack_28 = pppppppuStack_c4;
    local_190 = local_f0;
    local_18c = local_ec;
    local_188 = local_e8;
    local_184 = pppppppuStack_e4;
    local_17c = local_dc;
    local_178 = local_d8;
    local_174 = pppppppuStack_d4;
    local_170 = local_d0;
    pppppppuStack_16c = pppppppuStack_cc;
    local_168 = pppppppuStack_c8;
    pppppppuStack_164 = pppppppuStack_c4;
    local_70 = local_f0;
    pppppppuStack_6c = local_ec;
    pppppppuStack_68 = local_e8;
    local_64 = pppppppuStack_e4;
    local_5c = local_dc;
    local_58 = local_d8;
    pppppppuStack_54 = pppppppuStack_d4;
    local_50 = local_d0;
    pppppppuStack_4c = pppppppuStack_cc;
    pppppppuStack_48 = pppppppuStack_c8;
    pppppppuStack_44 = pppppppuStack_c4;
    local_1c4 = uVar5;
    if (pppppppuVar6 != (undefined4 *******)0x80000007) {
      *puVar2 = local_f0;
      puVar2[1] = local_ec;
      puVar2[2] = local_e8;
      puVar2[3] = pppppppuStack_e4;
      puVar2[5] = local_dc;
      puVar2[6] = local_d8;
      puVar2[7] = pppppppuStack_d4;
      puVar2[8] = local_d0;
      puVar2[9] = pppppppuStack_cc;
      puVar2[10] = pppppppuStack_c8;
      puVar2[0xb] = pppppppuStack_c4;
      puVar2[4] = pppppppuVar6;
      goto LAB_011cef40;
    }
    local_90 = local_dc;
    pppppppuStack_8c = local_d8;
    pppppppuStack_88 = pppppppuStack_d4;
    local_84 = local_d0;
    pppppppuStack_80 = pppppppuStack_cc;
    pppppppuStack_7c = pppppppuStack_c8;
    pppppppuStack_78 = pppppppuStack_c4;
    local_110 = local_dc;
    local_10c = local_d8;
    local_108 = pppppppuStack_d4;
    local_104 = local_d0;
    pppppppuStack_100 = pppppppuStack_cc;
    pppppppuStack_fc = pppppppuStack_c8;
    local_f8 = pppppppuStack_c4;
    local_180 = pppppppuVar6;
    local_60 = pppppppuVar6;
    thunk_FUN_01be4678();
  }
  else {
    local_3c = (undefined4 *******)local_1c4;
    local_ec = &local_40;
    local_40 = (undefined4 *******)local_1c8;
    local_f0 = param_2;
    FUN_00ab0d6c(&local_190,auStack_1c0,&local_f0);
    local_30 = &local_c0;
    if (local_190 != (undefined4 *******)0x0) {
      puVar2 = (undefined4 *)((uint)&local_190 | 4);
      uVar5 = *puVar2;
      uVar13 = puVar2[1];
      uVar16 = puVar2[2];
      uVar12 = puVar2[3];
      uVar15 = puVar2[4];
      param_1[0xd] = local_158;
      param_1[0xe] = local_154;
      *param_1 = uVar5;
      param_1[1] = uVar13;
      param_1[2] = uVar16;
      param_1[3] = uVar12;
      param_1[4] = uVar15;
      param_1[5] = local_178;
      param_1[6] = local_174;
      param_1[7] = local_170;
      param_1[8] = pppppppuStack_16c;
      param_1[9] = local_168;
      param_1[10] = pppppppuStack_164;
      param_1[0xb] = pppppppuStack_160;
      param_1[0xc] = pppppppuStack_15c;
      return;
    }
    local_1cc = local_1c8;
    puVar2 = (undefined4 *)((uint)local_30 | 4);
    *puVar2 = local_188;
    puVar2[1] = local_184;
    puVar2[2] = local_180;
    puVar2[3] = local_17c;
    local_70 = local_174;
    pppppppuStack_6c = local_170;
    pppppppuStack_68 = pppppppuStack_16c;
    local_64 = local_168;
    local_60 = pppppppuStack_164;
    local_5c = pppppppuStack_160;
    local_58 = pppppppuStack_15c;
    pppppppuVar6 = (undefined4 *******)*puVar2;
    pppppppuVar10 = (undefined4 *******)puVar2[1];
    pppppppuStack_128 = (undefined4 *******)puVar2[2];
    pppppppuStack_124 = (undefined4 *******)puVar2[3];
    local_150 = local_174;
    pppppppuStack_14c = local_170;
    pppppppuStack_148 = pppppppuStack_16c;
    local_144 = local_168;
    pppppppuStack_140 = pppppppuStack_164;
    pppppppuStack_13c = pppppppuStack_160;
    pppppppuStack_138 = pppppppuStack_15c;
    local_130 = pppppppuVar6;
    pppppppuStack_12c = pppppppuVar10;
    if (local_178 == (undefined4 *******)0x80000007) goto LAB_011ced3c;
    local_e0 = local_178;
    local_dc = local_174;
    local_d8 = local_170;
    pppppppuStack_d4 = pppppppuStack_16c;
    local_d0 = local_168;
    pppppppuStack_cc = pppppppuStack_164;
    pppppppuStack_c8 = pppppppuStack_160;
    pppppppuStack_c4 = pppppppuStack_15c;
    local_f0 = pppppppuVar6;
    local_ec = pppppppuVar10;
    local_e8 = pppppppuStack_128;
    pppppppuStack_e4 = pppppppuStack_124;
    if (local_178 != (undefined4 *******)0x80000006) {
      uVar5 = local_1c4;
      goto LAB_011ced44;
    }
    local_c0 = (undefined4 *******)0x2;
    local_34 = pppppppuVar10 + (int)pppppppuStack_128 * 0xc;
    pppppppuVar11 = pppppppuVar10;
    local_3c = pppppppuVar10;
    if (pppppppuStack_128 != (undefined4 *******)0x0) {
      iVar14 = (int)pppppppuStack_128 * 0x30;
      pppppppuVar7 = pppppppuVar10;
      do {
        ppppppuVar17 = (undefined4 ******)0x80000000;
        if (pppppppuVar7[4] != (undefined4 ******)0x80000007) {
          local_190 = (undefined4 *******)pppppppuVar7[5];
          local_18c = (undefined4 *******)pppppppuVar7[6];
          local_188 = (undefined4 *******)pppppppuVar7[7];
          local_184 = (undefined4 *******)pppppppuVar7[8];
          local_180 = (undefined4 *******)pppppppuVar7[9];
          local_17c = (undefined4 *******)pppppppuVar7[10];
          local_178 = (undefined4 *******)pppppppuVar7[0xb];
          ppppppuVar17 = pppppppuVar7[4];
        }
        pppppppuVar11 = pppppppuVar7 + 0xc;
        iVar14 = iVar14 + -0x30;
        local_70 = local_190;
        pppppppuStack_6c = local_18c;
        pppppppuStack_68 = local_188;
        local_64 = local_184;
        local_60 = local_180;
        local_5c = local_17c;
        local_58 = local_178;
        pppppppuVar7[4] = ppppppuVar17;
        pppppppuVar7[5] = local_190;
        pppppppuVar7[6] = local_18c;
        pppppppuVar7[7] = local_188;
        pppppppuVar7[8] = local_184;
        pppppppuVar7[9] = local_180;
        pppppppuVar7[10] = local_17c;
        pppppppuVar7[0xb] = local_178;
        pppppppuVar7 = pppppppuVar11;
      } while (iVar14 != 0);
      local_3c = local_34;
    }
    pppppppuVar11 =
         (undefined4 *******)(((uint)((int)pppppppuVar11 - (int)pppppppuVar10) >> 4) * -0x55555555);
    local_190 = pppppppuVar10;
    local_18c = pppppppuVar11;
    local_188 = pppppppuVar6;
    local_40 = pppppppuVar10;
    local_38 = pppppppuVar6;
    FUN_0070357c(&local_40);
    FUN_00703614(&local_40);
    if (local_c0 == (undefined4 *******)0x2) {
      local_18c = pppppppuVar6;
      local_188 = pppppppuVar10;
      local_184 = pppppppuVar11;
LAB_011cf1c4:
      puVar2 = (undefined4 *)((uint)&local_190 | 4);
      puVar4 = (undefined4 *)((uint)&local_110 | 4);
      uVar5 = puVar2[1];
      uVar13 = puVar2[2];
      *puVar4 = *puVar2;
      puVar4[1] = uVar5;
      puVar4[2] = uVar13;
      local_110 = (undefined4 *******)0x2;
    }
    else {
      local_190 = local_c0;
      local_18c = pppppppuStack_bc;
      local_188 = pppppppuStack_b8;
      local_184 = local_b4;
      local_180 = pppppppuStack_b0;
      local_17c = pppppppuStack_ac;
      local_178 = local_a8;
      FUN_00db2cb0(pppppppuVar10,pppppppuVar11);
      FUN_0132b958(pppppppuVar6,pppppppuVar10,8,0x30);
      if (local_190 == (undefined4 *******)0x2) goto LAB_011cf1c4;
      FUN_00ddb7e8(&local_110,&local_190);
    }
    if (local_e0 != (undefined4 *******)0x80000006) {
      FUN_00db19c4(&local_f0);
    }
  }
  if (local_110 != (undefined4 *******)0x2) {
    local_120 = local_104;
    pppppppuStack_11c = pppppppuStack_100;
    pppppppuStack_118 = pppppppuStack_fc;
    local_190 = local_110;
    local_188 = local_108;
    local_18c = local_10c;
    local_184 = local_104;
    local_180 = pppppppuStack_100;
    local_17c = pppppppuStack_fc;
    local_178 = local_f8;
    FUN_00ddb4b4(param_1,&local_190,local_1cc,local_1c4);
    return;
  }
LAB_011cef40:
  puVar2 = (undefined4 *)((uint)&local_110 | 4);
  uVar5 = *puVar2;
  uVar13 = puVar2[1];
  uVar16 = puVar2[2];
  param_1[1] = local_1cc;
  param_1[2] = local_1c4;
  param_1[3] = uVar5;
  param_1[4] = uVar13;
  param_1[5] = uVar16;
  *param_1 = 2;
  return;
}

