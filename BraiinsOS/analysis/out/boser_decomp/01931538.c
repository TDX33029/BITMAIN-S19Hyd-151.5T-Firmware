// FUN_01931538 @ 01931538 size=444 calls_out=5 calls_in=1
// strings: 

void FUN_01931538(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_2c0 [192];
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  int local_194;
  undefined1 auStack_190 [64];
  undefined1 auStack_150 [64];
  uint local_110;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  uVar1 = param_2[0x10];
  uVar2 = param_2[0x11];
  uVar3 = param_2[0x12];
  FUN_01bed93e(auStack_150,0,0x80);
  local_d0 = *param_2;
  uStack_cc = param_2[1];
  uStack_c8 = param_2[2];
  uStack_c4 = param_2[3];
  uStack_c0 = param_2[4];
  local_bc = param_2[5];
  uStack_b8 = param_2[6];
  uStack_b4 = param_2[7];
  uStack_b0 = param_2[8];
  uStack_ac = param_2[9];
  local_a8 = param_2[10];
  uStack_a4 = param_2[0xb];
  uStack_a0 = param_2[0xc];
  uStack_9c = param_2[0xd];
  uStack_98 = param_2[0xe];
  uStack_94 = param_2[0xf];
  uVar7 = param_2[0x24];
  uVar8 = param_2[0x25];
  uVar6 = param_2[0x26];
  local_1e8 = param_2[0x14];
  uStack_1e4 = param_2[0x15];
  uStack_1e0 = param_2[0x16];
  uStack_1dc = param_2[0x17];
  uStack_1d8 = param_2[0x18];
  local_1d4 = param_2[0x19];
  uStack_1d0 = param_2[0x1a];
  uStack_1cc = param_2[0x1b];
  uStack_1c8 = param_2[0x1c];
  uStack_1c4 = param_2[0x1d];
  local_1c0 = param_2[0x1e];
  uStack_1bc = param_2[0x1f];
  uStack_1b8 = param_2[0x20];
  uStack_1b4 = param_2[0x21];
  uStack_1b0 = param_2[0x22];
  uStack_1ac = param_2[0x23];
  FUN_01bed4e2(auStack_2c0,auStack_150,0xc0);
  local_1f0 = 0;
  local_200 = uVar1;
  local_1fc = uVar2;
  local_1f8 = uVar3;
  local_1a8 = uVar7;
  local_1a4 = uVar8;
  local_1a0 = uVar6;
  FUN_018900dc(auStack_2c0,param_3,param_4);
  if (param_6 != 0) {
    puVar4 = param_5 + param_6 * 2;
    do {
      FUN_018900dc(auStack_2c0,*param_5,param_5[1]);
      param_5 = param_5 + 2;
    } while (param_5 != puVar4);
  }
  FUN_018900dc(auStack_2c0,param_7,param_8);
  FUN_01bed4e2(auStack_150,auStack_2c0,0x128);
  FUN_018909c8(&local_194,auStack_150);
  uVar5 = *(uint *)(local_194 + 0x48);
  if (0x40 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar5,0x40,&DAT_01d2571c);
  }
  FUN_01bed93e(auStack_150,0,0x40);
  local_110 = uVar5;
  FUN_01bed4e2(auStack_150,auStack_190,uVar5);
  FUN_01bed4e2(param_1,auStack_150,0x44);
  return;
}

