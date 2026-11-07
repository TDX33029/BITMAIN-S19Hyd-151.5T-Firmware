// FUN_0188fc54 @ 0188fc54 size=624 calls_out=9 calls_in=9
// strings: 

void FUN_0188fc54(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  uint local_158;
  uint local_154;
  undefined4 *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  uint local_104;
  undefined4 *local_100;
  int local_f4;
  byte abStack_f0 [64];
  byte local_b0 [132];
  uint local_2c;
  uint local_28;
  
  local_198 = *param_2;
  uStack_194 = param_2[1];
  uStack_190 = param_2[2];
  uStack_18c = param_2[3];
  uStack_188 = param_2[4];
  local_184 = param_2[5];
  uStack_180 = param_2[6];
  uStack_17c = param_2[7];
  uStack_178 = param_2[8];
  uStack_174 = param_2[9];
  local_170 = param_2[10];
  uStack_16c = param_2[0xb];
  uStack_168 = param_2[0xc];
  uStack_164 = param_2[0xd];
  uStack_160 = param_2[0xe];
  uStack_15c = param_2[0xf];
  local_154 = 0;
  local_158 = 0;
  local_148 = *param_2;
  uStack_144 = param_2[1];
  uStack_140 = param_2[2];
  uStack_13c = param_2[3];
  uStack_138 = param_2[4];
  local_134 = param_2[5];
  uStack_130 = param_2[6];
  uStack_12c = param_2[7];
  uStack_128 = param_2[8];
  uStack_124 = param_2[9];
  local_120 = param_2[10];
  uStack_11c = param_2[0xb];
  uStack_118 = param_2[0xc];
  uStack_114 = param_2[0xd];
  uStack_110 = param_2[0xe];
  uStack_10c = param_2[0xf];
  uVar5 = param_2[0x14];
  local_104 = 0;
  local_108 = 0;
  local_150 = param_2;
  local_100 = param_2;
  if (uVar5 < param_4) {
    FUN_0188fef8(&local_f4,param_2,param_3,param_4);
    param_4 = *(uint *)(local_f4 + 0x48);
    if (0x40 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_4,0x40,&DAT_01d2571c);
    }
    param_3 = abStack_f0;
  }
  pbVar4 = local_b0;
  FUN_01bed93e(pbVar4,0x36,0x80);
  if (0x80 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar5,0x80,&DAT_01d213ac);
  }
  if (uVar5 <= param_4) {
    param_4 = uVar5;
  }
  for (; param_4 != 0; param_4 = param_4 - 1) {
    *pbVar4 = *pbVar4 ^ *param_3;
    pbVar4 = pbVar4 + 1;
    param_3 = param_3 + 1;
  }
  if (uVar5 != 0) {
    DataMemoryBarrier(0xb);
    if (DAT_01d51afc != '\x02') {
      FUN_0188ff90();
    }
    (*(code *)local_150[0x10])(&local_198,local_b0,1);
    uVar1 = 0;
    uVar2 = local_158 + 1;
    uVar3 = local_154 + (0xfffffffe < local_158);
    if (CARRY4(local_154,(uint)(0xfffffffe < local_158))) {
LAB_0188fe74:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2148c);
    }
    do {
      local_b0[uVar1] = local_b0[uVar1] ^ 0x6a;
      uVar1 = uVar1 + 1;
    } while (uVar5 != uVar1);
    uVar1 = local_100[0x14];
    local_158 = uVar2;
    local_154 = uVar3;
    if (uVar1 != 0) {
      uVar2 = FUN_01bf1250(uVar5,uVar1);
      local_2c = uVar2 * uVar1;
      local_28 = uVar5;
      if (local_2c != uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01304210(0,&local_2c,&local_28,0);
      }
      if (uVar1 <= uVar5) {
        DataMemoryBarrier(0xb);
        if (DAT_01d51afc != '\x02') {
          FUN_0188ff90();
        }
        (*(code *)local_100[0x10])(&local_148,local_b0,uVar2);
        bVar6 = CARRY4(local_108,uVar2);
        if (CARRY4(local_104,(uint)bVar6)) goto LAB_0188fe74;
        local_108 = local_108 + uVar2;
        local_104 = local_104 + bVar6;
      }
      FUN_01bed4e2(param_1,&local_198,0xa0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012ffdf4(&DAT_01d2146c);
}

