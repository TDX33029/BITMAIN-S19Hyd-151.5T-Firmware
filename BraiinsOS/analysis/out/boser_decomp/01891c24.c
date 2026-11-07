// FUN_01891c24 @ 01891c24 size=904 calls_out=8 calls_in=6
// strings: assertion failed: digest_alg.block_len() >= digest_alg.output_len()

bool FUN_01891c24(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,uint param_5,
                 uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint local_308;
  int local_304;
  undefined1 auStack_300 [192];
  undefined4 local_240;
  undefined4 uStack_23c;
  int local_238;
  undefined4 local_230;
  undefined1 auStack_22c [4];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  int local_1d4;
  undefined1 auStack_1d0 [64];
  undefined1 local_190 [128];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_68 [68];
  
  if (param_5 == param_6) {
    iVar9 = param_1[0x12];
    if (*(uint *)(iVar9 + 0x50) < *(uint *)(iVar9 + 0x48)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: digest_alg.block_len() >= digest_alg.output_len()",0x43,
                   &DAT_01d21634);
    }
    uVar5 = param_1[0x10];
    uVar1 = param_1[0x11];
    FUN_01bed93e(local_190,0,0x80);
    local_110 = *param_1;
    uStack_10c = param_1[1];
    uStack_108 = param_1[2];
    uStack_104 = param_1[3];
    uStack_100 = param_1[4];
    local_fc = param_1[5];
    uStack_f8 = param_1[6];
    uStack_f4 = param_1[7];
    uStack_f0 = param_1[8];
    uStack_ec = param_1[9];
    local_e8 = param_1[10];
    uStack_e4 = param_1[0xb];
    uStack_e0 = param_1[0xc];
    uStack_dc = param_1[0xd];
    uStack_d8 = param_1[0xe];
    uStack_d4 = param_1[0xf];
    uVar2 = param_1[0x24];
    uVar6 = param_1[0x25];
    uVar3 = param_1[0x26];
    local_228 = param_1[0x14];
    uStack_224 = param_1[0x15];
    uStack_220 = param_1[0x16];
    uStack_21c = param_1[0x17];
    uStack_218 = param_1[0x18];
    local_214 = param_1[0x19];
    uStack_210 = param_1[0x1a];
    uStack_20c = param_1[0x1b];
    uStack_208 = param_1[0x1c];
    uStack_204 = param_1[0x1d];
    local_200 = param_1[0x1e];
    uStack_1fc = param_1[0x1f];
    uStack_1f8 = param_1[0x20];
    uStack_1f4 = param_1[0x21];
    uStack_1f0 = param_1[0x22];
    uStack_1ec = param_1[0x23];
    FUN_01bed4e2(auStack_300,local_190,0xc0);
    local_230 = 0;
    iVar8 = 1;
    local_308 = param_5;
    puVar4 = (undefined4 *)((uint)auStack_68 | 4);
    local_304 = param_4;
    local_240 = uVar5;
    uStack_23c = uVar1;
    local_238 = iVar9;
    local_1e8 = uVar2;
    local_1e4 = uVar6;
    local_1e0 = uVar3;
    while( true ) {
      if (param_3 != 0) {
        puVar10 = param_2;
        do {
          FUN_018900dc(auStack_300,*puVar10,puVar10[1]);
          puVar10 = puVar10 + 2;
        } while (puVar10 != param_2 + param_3 * 2);
      }
      local_190[0] = (undefined1)iVar8;
      FUN_018900dc(auStack_300,local_190,1);
      FUN_01bed4e2(local_190,auStack_300,0x128);
      FUN_018909c8(&local_1d4,local_190);
      uVar15 = *(uint *)(local_1d4 + 0x48);
      if (0x40 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar15,0x40,&DAT_01d2571c);
      }
      uVar16 = *(uint *)(iVar9 + 0x48);
      if (local_308 < uVar16) break;
      if (uVar16 != uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_013070f0(uVar16,uVar15,&DAT_01d21644);
      }
      local_308 = local_308 - uVar16;
      FUN_01bed4e2(local_304,auStack_1d0,uVar15);
      if (local_308 == 0) goto LAB_01891f34;
      FUN_01bed93e(local_190,0,0x80);
      local_110 = *param_1;
      uStack_10c = param_1[1];
      uStack_108 = param_1[2];
      uStack_104 = param_1[3];
      uStack_100 = param_1[4];
      local_fc = param_1[5];
      uStack_f8 = param_1[6];
      uStack_f4 = param_1[7];
      uStack_f0 = param_1[8];
      uStack_ec = param_1[9];
      local_e8 = param_1[10];
      uStack_e4 = param_1[0xb];
      uStack_e0 = param_1[0xc];
      uStack_dc = param_1[0xd];
      uStack_d8 = param_1[0xe];
      uStack_d4 = param_1[0xf];
      uVar7 = param_1[0x15];
      uVar11 = param_1[0x16];
      uVar12 = param_1[0x17];
      uVar13 = param_1[0x18];
      *puVar4 = param_1[0x14];
      puVar4[1] = uVar7;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar4[4] = uVar13;
      uVar7 = param_1[0x1a];
      uVar11 = param_1[0x1b];
      uVar12 = param_1[0x1c];
      uVar13 = param_1[0x1d];
      puVar4[5] = param_1[0x19];
      puVar4[6] = uVar7;
      puVar4[7] = uVar11;
      puVar4[8] = uVar12;
      puVar4[9] = uVar13;
      uVar7 = param_1[0x1f];
      uVar11 = param_1[0x20];
      uVar12 = param_1[0x21];
      uVar13 = param_1[0x22];
      uVar14 = param_1[0x23];
      puVar4[10] = param_1[0x1e];
      puVar4[0xb] = uVar7;
      puVar4[0xc] = uVar11;
      puVar4[0xd] = uVar12;
      puVar4[0xe] = uVar13;
      puVar4[0xf] = uVar14;
      FUN_01bed4e2(auStack_300,local_190,0xc0);
      local_230 = 0;
      local_240 = uVar5;
      uStack_23c = uVar1;
      local_238 = iVar9;
      FUN_01bed4e2(auStack_22c,auStack_68,0x44);
      local_1e8 = uVar2;
      local_1e4 = uVar6;
      local_1e0 = uVar3;
      FUN_018900dc(auStack_300,auStack_1d0,uVar15);
      if (iVar8 == 0xff) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d21664);
      }
      iVar8 = iVar8 + 1;
      local_304 = local_304 + uVar16;
    }
    if (uVar15 < local_308) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_308,uVar15,&DAT_01d21654);
    }
    FUN_01bed4e2(local_304,auStack_1d0,local_308);
  }
LAB_01891f34:
  return param_5 != param_6;
}

