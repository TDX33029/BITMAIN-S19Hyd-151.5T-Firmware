// FUN_0165d6e4 @ 0165d6e4 size=312 calls_out=3 calls_in=1
// strings: 

void FUN_0165d6e4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8 [8];
  uint local_d8;
  uint local_d4;
  undefined1 auStack_d0 [56];
  uint local_98;
  uint uStack_94;
  byte local_90;
  uint local_88 [8];
  undefined1 auStack_68 [56];
  uint local_30;
  uint local_2c;
  
  FUN_01bed93e(&local_118,0,0x20);
  FUN_01bed4e2(local_f8,param_2,0x70);
  FUN_01bed93e(local_88,0,0x20);
  puVar2 = auStack_d0;
  uVar3 = (uint)local_90;
  puVar2[uVar3] = 0x80;
  uVar5 = uVar3 << 0x1b | ((local_d8 << 9 | uVar3 << 3) >> 8 & 0xff) << 0x10 |
          ((local_d8 & 0x7fffff) >> 7 & 0xff) << 8 | (local_d8 & 0x7fffff) >> 0xf;
  uVar4 = (local_d8 >> 0x17) << 0x18 | ((local_d4 << 9 | local_d8 >> 0x17) >> 8 & 0xff) << 0x10 |
          ((local_d4 & 0x7fffff) >> 7 & 0xff) << 8 | (local_d4 & 0x7fffff) >> 0xf;
  if ((uVar3 == 0x3f) || (FUN_01bed93e(auStack_d0 + uVar3 + 1,0), (~uVar3 & 0x38) == 0)) {
    FUN_0196e0f8(local_f8,puVar2,1);
    puVar2 = auStack_68;
    FUN_01bed93e(puVar2,0,0x38);
    local_30 = uVar4;
    local_2c = uVar5;
  }
  else {
    local_98 = uVar4;
    uStack_94 = uVar5;
  }
  FUN_0196e0f8(local_f8,puVar2,1);
  iVar1 = 0;
  do {
    uVar3 = local_f8[iVar1];
    local_88[iVar1] =
         uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  local_118 = local_88[0];
  uStack_114 = local_88[1];
  uStack_110 = local_88[2];
  uStack_10c = local_88[3];
  local_108 = local_88[4];
  uStack_104 = local_88[5];
  uStack_100 = local_88[6];
  uStack_fc = local_88[7];
  FUN_01bed4e2(param_1,&local_118,0x20);
  return;
}

