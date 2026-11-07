// FUN_01282618 @ 01282618 size=644 calls_out=5 calls_in=1
// strings: 

void FUN_01282618(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_148 [32];
  uint local_128;
  int local_124;
  undefined1 auStack_120 [64];
  uint local_e0;
  uint local_d8 [8];
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint uStack_94;
  undefined1 local_90 [56];
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_48 [9];
  
  FUN_01bed93e(&local_98,0,0x4c);
  local_b8 = 0x6a09e667;
  uStack_b4 = 0xbb67ae85;
  uStack_b0 = 0x3c6ef372;
  uStack_ac = 0xa54ff53a;
  local_a8 = 0x510e527f;
  uStack_a4 = 0x9b05688c;
  uStack_a0 = 0x1f83d9ab;
  uStack_9c = 0x5be0cd19;
  FUN_01bed4e2(auStack_148,&local_b8,0x70);
  uVar1 = 0x40 - local_e0;
  bVar3 = CARRY4(local_128,param_3 * 8);
  local_128 = local_128 + param_3 * 8;
  local_124 = local_124 + (param_3 >> 0x1d) + (uint)bVar3;
  if (param_3 < uVar1) {
    if (CARRY4(local_e0,param_3) || 0x40 < local_e0 + param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(local_e0,local_e0 + param_3,0x40,&DAT_01d27428);
    }
    FUN_01bed4e2(auStack_120 + local_e0,param_2,param_3);
    uVar1 = local_e0 + param_3;
  }
  else {
    if (local_e0 != 0) {
      if (0x40 < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(local_e0,0x40,0x40,&DAT_01d27418);
      }
      FUN_01bed4e2(auStack_120 + local_e0,param_2,uVar1);
      local_e0 = 0;
      FUN_0196d410(auStack_148,auStack_120,1);
      param_2 = param_2 + uVar1;
      param_3 = param_3 - uVar1;
    }
    FUN_0196d410(auStack_148,param_2,param_3 >> 6);
    uVar1 = param_3 & 0x3f;
    FUN_01bed4e2(auStack_120,param_2 + (param_3 & 0x7fffffc0),uVar1);
  }
  local_e0 = uVar1;
  FUN_01bed4e2(&local_b8,auStack_148,0x70);
  FUN_01bed93e(local_d8,0,0x20);
  if (local_50 == 0x40) {
    FUN_0196d410(&local_b8,local_90,1);
    uVar1 = 0;
  }
  else {
    if (0x3f < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_50,0x40,&DAT_01d273f8);
    }
    uVar1 = local_50;
  }
  local_90[uVar1] = 0x80;
  local_50 = uVar1 + 1;
  iVar2 = 0;
  FUN_01bed93e(local_90 + local_50,0,uVar1 ^ 0x3f);
  if (local_50 - 0x39 < 8) {
    FUN_0196d410(&local_b8,local_90,1);
    if (0x40 < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_50,0x40,&DAT_01d27408);
    }
    FUN_01bed93e(local_90,0);
  }
  uStack_54 = local_98 << 0x18 | (local_98 >> 8 & 0xff) << 0x10 | (local_98 >> 0x10 & 0xff) << 8 |
              local_98 >> 0x18;
  local_58 = uStack_94 << 0x18 | (uStack_94 >> 8 & 0xff) << 0x10 | (uStack_94 >> 0x10 & 0xff) << 8 |
             uStack_94 >> 0x18;
  FUN_0196d410(&local_b8,local_90,1);
  local_48[0] = local_b8;
  local_48[1] = uStack_b4;
  local_48[2] = uStack_b0;
  local_48[3] = uStack_ac;
  local_48[4] = local_a8;
  local_48[5] = uStack_a4;
  local_48[6] = uStack_a0;
  local_48[7] = uStack_9c;
  do {
    uVar1 = local_48[iVar2];
    local_d8[iVar2] =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  FUN_01bed4e2(param_1,local_d8,0x20);
  return;
}

