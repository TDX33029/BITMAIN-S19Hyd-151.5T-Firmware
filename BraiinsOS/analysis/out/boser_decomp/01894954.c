// FUN_01894954 @ 01894954 size=384 calls_out=6 calls_in=2
// strings: chunk size must be non-zero

void FUN_01894954(undefined4 *param_1,undefined4 param_2,undefined4 param_3,byte *param_4,
                 uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_220 [128];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  undefined4 local_150;
  int local_144;
  byte abStack_140 [64];
  uint local_100 [55];
  
  uVar4 = param_1[0x12];
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("chunk size must be non-zero",0x37,&DAT_01d217a4);
  }
  if (param_5 != 0) {
    uVar7 = 0;
    do {
      FUN_01bed93e(auStack_220,0,0x80);
      local_1a0 = *param_1;
      uStack_19c = param_1[1];
      uStack_198 = param_1[2];
      uStack_194 = param_1[3];
      uStack_190 = param_1[4];
      local_18c = param_1[5];
      uStack_188 = param_1[6];
      uStack_184 = param_1[7];
      uStack_180 = param_1[8];
      uStack_17c = param_1[9];
      local_178 = param_1[10];
      uStack_174 = param_1[0xb];
      uStack_170 = param_1[0xc];
      uStack_16c = param_1[0xd];
      uStack_168 = param_1[0xe];
      uStack_164 = param_1[0xf];
      local_150 = 0;
      local_160 = 0;
      local_15c = 0;
      local_158 = param_1;
      FUN_018900dc(auStack_220,param_2,param_3);
      local_100[0] = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                     uVar7 >> 0x18;
      FUN_018900dc(auStack_220,local_100,4);
      FUN_01bed4e2(local_100,auStack_220,0xd8);
      FUN_0189039c(&local_144,local_100);
      uVar6 = *(uint *)(local_144 + 0x48);
      uVar5 = param_5;
      if (uVar4 < param_5) {
        uVar5 = uVar4;
      }
      if (0x40 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar6,0x40,&DAT_01d2571c);
      }
      pbVar1 = abStack_140;
      uVar2 = uVar5;
      pbVar3 = param_4;
      if (uVar6 < uVar5) {
        uVar2 = uVar6;
      }
      while (uVar6 != 0) {
        *pbVar3 = *pbVar3 ^ *pbVar1;
        uVar6 = uVar2 - 1;
        pbVar1 = pbVar1 + 1;
        uVar2 = uVar6;
        pbVar3 = pbVar3 + 1;
      }
      param_5 = param_5 - uVar5;
      param_4 = param_4 + uVar5;
      uVar7 = uVar7 + 1;
    } while (param_5 != 0);
  }
  return;
}

