// FUN_017da578 @ 017da578 size=704 calls_out=8 calls_in=1
// strings: called `Result::unwrap_err()` on an `Ok` value

void FUN_017da578(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  undefined4 local_200;
  uint local_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  uint local_1e0;
  undefined1 auStack_1dc [68];
  undefined1 local_198;
  undefined1 local_190;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  undefined1 auStack_170 [72];
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint local_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint local_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint local_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined4 local_a0;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  undefined1 auStack_7c [68];
  undefined1 local_38;
  undefined1 local_30;
  
  if (*param_2 == 0) {
    FUN_017c2238(&local_228,param_2 + 5);
    if (local_228 == 2) {
      *param_1 = 4;
      return;
    }
    if ((local_228 & 1) == 0) {
      *param_1 = 0;
      param_1[3] = 0;
      param_1[1] = &PTR_FUN_01d1cd44;
      param_1[2] = 1;
      param_1[4] = 0;
      return;
    }
    FUN_01784234(param_2);
    *param_2 = 1;
    param_2[1] = local_224;
    param_2[2] = local_220;
    param_2[3] = local_21c;
    param_2[4] = local_218;
  }
  if (param_2[1] == 0) {
    *param_2 = 0;
    local_224 = param_2[1];
    local_220 = param_2[2];
    local_21c = param_2[3];
    local_218 = param_2[4];
    if (local_224 != 0) {
      local_c8 = local_224;
      local_c4 = local_220;
      local_c0 = local_21c;
      local_bc = local_218;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("called `Result::unwrap_err()` on an `Ok` value",0x2e,&local_c8,&DAT_01d1c668,
                   &DAT_01d1c7bc);
    }
    *param_1 = 3;
    param_1[1] = local_220;
    param_1[2] = local_21c;
  }
  else {
    local_f0 = *param_2;
    uStack_ec = param_2[1];
    uStack_e8 = param_2[2];
    uStack_e4 = param_2[3];
    uStack_e0 = param_2[4];
    local_dc = param_2[5];
    uStack_d8 = param_2[6];
    uStack_d4 = param_2[7];
    uStack_d0 = param_2[8];
    uStack_cc = param_2[9];
    param_2[6] = 1;
    *(undefined1 *)(param_2 + 9) = 0;
    param_2[5] = (uint)&PTR_FUN_01d1cd44;
    param_2[7] = 0;
    param_2[8] = 0;
    *param_2 = 0;
    local_a0 = 0;
    local_c8 = local_f0;
    local_c4 = uStack_ec;
    local_c0 = uStack_e8;
    local_bc = uStack_e4;
    uStack_b8 = uStack_e0;
    local_b4 = local_dc;
    uStack_b0 = uStack_d8;
    uStack_ac = uStack_d4;
    uStack_a8 = uStack_d0;
    uStack_a4 = uStack_cc;
    FUN_012c2398(&local_228);
    uVar1 = local_218;
    FUN_01bed4e2(auStack_170,&local_214,0x44);
    local_118 = local_f0;
    uStack_114 = uStack_ec;
    uStack_110 = uStack_e8;
    uStack_10c = uStack_e4;
    uStack_108 = uStack_e0;
    local_104 = local_dc;
    uStack_100 = uStack_d8;
    uStack_fc = uStack_d4;
    uStack_f8 = uStack_d0;
    uStack_f4 = uStack_cc;
    local_128 = local_228;
    uStack_124 = local_224;
    uStack_120 = local_220;
    uStack_11c = local_21c;
    local_c8 = local_f0;
    local_c4 = uStack_ec;
    local_c0 = uStack_e8;
    local_bc = uStack_e4;
    uStack_b8 = uStack_e0;
    local_b4 = local_dc;
    uStack_b0 = uStack_d8;
    uStack_ac = uStack_d4;
    uStack_a8 = uStack_d0;
    uStack_a4 = uStack_cc;
    local_a0 = 0;
    local_90 = local_228;
    uStack_8c = local_224;
    uStack_88 = local_220;
    uStack_84 = local_21c;
    local_80 = local_218;
    FUN_01bed4e2(auStack_7c,auStack_170,0x44);
    local_30 = 0;
    local_38 = 4;
    FUN_01a3d3d8(&local_f0);
    local_228 = local_118;
    local_224 = uStack_114;
    local_220 = uStack_110;
    local_21c = uStack_10c;
    local_218 = uStack_108;
    local_214 = local_104;
    uStack_210 = uStack_100;
    uStack_20c = uStack_fc;
    uStack_208 = uStack_f8;
    uStack_204 = uStack_f4;
    local_1f0 = local_128;
    uStack_1ec = uStack_124;
    uStack_1e8 = uStack_120;
    uStack_1e4 = uStack_11c;
    FUN_01bed4e2(auStack_1dc,auStack_170,0x44);
    local_188 = local_f0;
    uStack_184 = uStack_ec;
    uStack_180 = uStack_e8;
    uStack_17c = uStack_e4;
    uStack_178 = uStack_e0;
    local_190 = 0;
    local_200 = 0;
    local_198 = 4;
    local_1e0 = uVar1;
    iVar2 = thunk_FUN_01be5118(0xb8);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0xb8);
    }
    FUN_01bed4e2(iVar2,&local_228,0xb8);
    *param_1 = 1;
    param_1[1] = iVar2;
  }
  return;
}

