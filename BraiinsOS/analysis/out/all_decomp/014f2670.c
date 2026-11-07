// FUN_014f2670 @ 014f2670 size=816 calls_out=10 calls_in=1
// strings: 

void FUN_014f2670(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  uint local_2d0;
  uint local_2cc;
  undefined4 *local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint local_280;
  uint local_27c;
  undefined4 *local_278;
  int local_26c;
  byte abStack_268 [64];
  uint local_228 [32];
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 *local_160;
  undefined4 local_158;
  byte local_150 [200];
  int local_88;
  undefined4 local_80;
  uint local_78 [21];
  
  local_310 = *param_2;
  uStack_30c = param_2[1];
  uStack_308 = param_2[2];
  uStack_304 = param_2[3];
  uStack_300 = param_2[4];
  local_2fc = param_2[5];
  uStack_2f8 = param_2[6];
  uStack_2f4 = param_2[7];
  uStack_2f0 = param_2[8];
  uStack_2ec = param_2[9];
  local_2e8 = param_2[10];
  uStack_2e4 = param_2[0xb];
  uStack_2e0 = param_2[0xc];
  uStack_2dc = param_2[0xd];
  uStack_2d8 = param_2[0xe];
  uStack_2d4 = param_2[0xf];
  local_2cc = 0;
  local_2d0 = 0;
  local_2c0 = *param_2;
  uStack_2bc = param_2[1];
  uStack_2b8 = param_2[2];
  uStack_2b4 = param_2[3];
  uStack_2b0 = param_2[4];
  local_2ac = param_2[5];
  uStack_2a8 = param_2[6];
  uStack_2a4 = param_2[7];
  uStack_2a0 = param_2[8];
  uStack_29c = param_2[9];
  local_298 = param_2[10];
  uStack_294 = param_2[0xb];
  uStack_290 = param_2[0xc];
  uStack_28c = param_2[0xd];
  uStack_288 = param_2[0xe];
  uStack_284 = param_2[0xf];
  uVar6 = param_2[0x14];
  local_27c = 0;
  local_280 = 0;
  local_2c8 = param_2;
  local_278 = param_2;
  if (uVar6 < param_4) {
    FUN_016dd606(local_228,0,0x80);
    local_1a8 = *param_2;
    uStack_1a4 = param_2[1];
    uStack_1a0 = param_2[2];
    uStack_19c = param_2[3];
    uStack_198 = param_2[4];
    local_194 = param_2[5];
    uStack_190 = param_2[6];
    uStack_18c = param_2[7];
    uStack_188 = param_2[8];
    uStack_184 = param_2[9];
    local_180 = param_2[10];
    uStack_17c = param_2[0xb];
    uStack_178 = param_2[0xc];
    uStack_174 = param_2[0xd];
    uStack_170 = param_2[0xe];
    uStack_16c = param_2[0xf];
    local_164 = 0;
    local_168 = 0;
    local_158 = 0;
    local_160 = param_2;
    FUN_014f29bc(local_228,param_3,param_4);
    FUN_016dd1aa(local_150,local_228,0xd8);
    uVar5 = *(uint *)(local_88 + 0x50);
    FUN_016dd1aa(local_78,&local_1a8,0x50);
    if (0x80 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar5,0x80,&DAT_018a6dd0);
    }
    FUN_014f2c6c(&local_26c,local_78,local_150,uVar5,local_80);
    param_4 = *(uint *)(local_26c + 0x48);
    if (0x40 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_4,0x40,&DAT_018ab870);
    }
    FUN_016dd606(local_150,0x36,0x80);
    param_3 = abStack_268;
  }
  else {
    FUN_016dd606(local_150,0x36,0x80);
    if (0x80 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar6,0x80,&DAT_018a6cf0);
    }
  }
  if (uVar6 <= param_4) {
    param_4 = uVar6;
  }
  if (param_4 != 0) {
    pbVar2 = local_150;
    do {
      param_4 = param_4 - 1;
      *pbVar2 = *pbVar2 ^ *param_3;
      pbVar2 = pbVar2 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  if (uVar6 != 0) {
    DataMemoryBarrier(0xb);
    if (DAT_018dd942 != '\x02') {
      FUN_01110ec4();
    }
    (*(code *)param_2[0x10])(&local_310,local_150,1);
    puVar1 = local_278;
    uVar5 = 0;
    uVar3 = local_2d0 + 1;
    uVar4 = local_2cc + (0xfffffffe < local_2d0);
    if (CARRY4(local_2cc,(uint)(0xfffffffe < local_2d0))) {
LAB_014f2938:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018a6dc0);
    }
    do {
      local_150[uVar5] = local_150[uVar5] ^ 0x6a;
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
    uVar5 = local_278[0x14];
    local_2d0 = uVar3;
    local_2cc = uVar4;
    if (uVar5 != 0) {
      uVar3 = FUN_018462e8(uVar6,uVar5);
      local_78[0] = uVar3 * uVar5;
      local_228[0] = uVar6;
      if (local_78[0] != uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,local_78,local_228,0);
      }
      if (uVar5 <= uVar6) {
        DataMemoryBarrier(0xb);
        if (DAT_018dd942 != '\x02') {
          FUN_01110ec4();
        }
        (*(code *)puVar1[0x10])(&local_2c0,local_150,uVar3);
        bVar7 = CARRY4(local_280,uVar3);
        if (CARRY4(local_27c,(uint)bVar7)) goto LAB_014f2938;
        local_280 = local_280 + uVar3;
        local_27c = local_27c + bVar7;
      }
      FUN_016dd1aa(param_1,&local_310,0xa0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faf2a4(&DAT_018a6da0);
}

