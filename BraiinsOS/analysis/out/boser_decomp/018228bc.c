// FUN_018228bc @ 018228bc size=732 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code

void FUN_018228bc(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 uVar6;
  undefined2 local_2b8;
  uint local_2b4;
  undefined1 local_2b0;
  uint local_2ac;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  undefined1 local_288;
  undefined1 local_287;
  undefined2 local_286;
  undefined1 local_284;
  undefined1 auStack_283 [31];
  undefined1 local_264;
  undefined1 auStack_263 [51];
  undefined1 auStack_230 [72];
  undefined1 auStack_1e8 [24];
  uint local_1d0;
  uint *local_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint local_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint local_178;
  undefined1 local_174;
  undefined1 local_173;
  undefined1 auStack_170 [72];
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint local_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint local_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [32];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar1 = *param_2;
  if ((uVar1 < 6) || (uVar1 == 7)) {
    FUN_018617e8(param_1,param_2,param_3);
    return;
  }
  if (uVar1 == 6) {
    local_2a0 = param_2[2];
    *param_2 = 8;
    if (local_2a0 < 2) {
      FUN_01bed4e2((uint)&local_2a0 | 4,param_2 + 3,300);
      FUN_01882168(&local_40,&local_178,auStack_1e8,local_174);
      if ((char)local_40 == '\x03') {
        FUN_01820cdc(&local_2a0);
        uVar1 = 5;
        uVar4 = 0;
        puVar5 = &local_2a0;
        uVar6 = 0;
        uVar2 = 2;
        uVar3 = 2;
      }
      else {
        local_f8 = local_40;
        uStack_f4 = uStack_3c;
        uStack_f0 = uStack_38;
        local_ec = local_34;
        uStack_e8 = uStack_30;
        uStack_e4 = uStack_2c;
        uStack_e0 = uStack_28;
        FUN_01bed4e2(auStack_170,auStack_230,0x48);
        uVar1 = local_2a0;
        local_128 = local_1a4;
        uStack_124 = uStack_1a0;
        uStack_120 = uStack_19c;
        uStack_11c = uStack_198;
        uStack_118 = uStack_194;
        local_114 = local_190;
        uStack_110 = uStack_18c;
        uStack_10c = uStack_188;
        uStack_108 = uStack_184;
        uStack_104 = uStack_180;
        uStack_100 = uStack_17c;
        local_2ac = local_178;
        local_58 = local_298;
        uStack_54 = uStack_294;
        uStack_50 = uStack_290;
        uStack_4c = uStack_28c;
        local_48 = local_288;
        FUN_01bed4e2(auStack_78,auStack_283,0x1f);
        FUN_01bed4e2(auStack_b0,auStack_263,0x33);
        local_2b4 = local_1d0;
        local_d8 = local_1c8;
        uStack_d4 = uStack_1c4;
        uStack_d0 = uStack_1c0;
        uStack_cc = uStack_1bc;
        local_c8 = local_1b8;
        uStack_c4 = uStack_1b4;
        uStack_c0 = uStack_1b0;
        uStack_bc = uStack_1ac;
        uStack_b8 = uStack_1a8;
        FUN_0177266c(auStack_1e8);
        uVar4 = local_29c;
        puVar5 = local_1cc;
        uVar6 = local_284;
        uVar2 = local_264;
        uVar3 = local_287;
        local_2b0 = local_173;
        local_2b8 = local_286;
      }
      FUN_01820c90(param_2);
      *param_2 = uVar1;
      param_2[1] = uVar4;
      param_2[2] = local_58;
      param_2[3] = uStack_54;
      param_2[4] = uStack_50;
      param_2[5] = uStack_4c;
      *(undefined2 *)((int)param_2 + 0x1a) = local_2b8;
      *(undefined1 *)(param_2 + 6) = local_48;
      *(undefined1 *)(param_2 + 7) = uVar6;
      *(undefined1 *)((int)param_2 + 0x19) = uVar3;
      FUN_01bed4e2((int)param_2 + 0x1d,auStack_78,0x1f);
      *(undefined1 *)(param_2 + 0xf) = uVar2;
      FUN_01bed4e2((int)param_2 + 0x3d,auStack_b0,0x33);
      param_2[0x1c] = local_2b4;
      param_2[0x1d] = (uint)puVar5;
      param_2[0x1e] = local_d8;
      param_2[0x1f] = uStack_d4;
      param_2[0x20] = uStack_d0;
      param_2[0x21] = uStack_cc;
      param_2[0x22] = local_c8;
      param_2[0x23] = uStack_c4;
      param_2[0x24] = uStack_c0;
      param_2[0x25] = uStack_bc;
      param_2[0x26] = uStack_b8;
      param_2[0x27] = local_f8;
      param_2[0x28] = uStack_f4;
      param_2[0x29] = uStack_f0;
      param_2[0x2a] = local_ec;
      param_2[0x2b] = uStack_e8;
      param_2[0x2c] = uStack_e4;
      param_2[0x2d] = uStack_e0;
      param_2[0x30] = 0;
      *(undefined1 *)(param_2 + 0x2f) = local_2b0;
      param_2[0x2e] = local_2ac;
      param_2[0x31] = local_128;
      param_2[0x32] = uStack_124;
      param_2[0x33] = uStack_120;
      param_2[0x34] = uStack_11c;
      param_2[0x35] = uStack_118;
      param_2[0x36] = local_114;
      param_2[0x37] = uStack_110;
      param_2[0x38] = uStack_10c;
      param_2[0x39] = uStack_108;
      param_2[0x3a] = uStack_104;
      param_2[0x3b] = uStack_100;
      FUN_01bed4e2(param_2 + 0x3c,auStack_170,0x48);
      if (5 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d1dfcc);
      }
      FUN_018617e8(param_1,param_2,param_3);
      return;
    }
  }
  else {
    *param_2 = 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_0050c6f8,0x75,&DAT_01d1dfdc);
}

