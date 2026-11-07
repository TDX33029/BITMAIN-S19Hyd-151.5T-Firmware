// FUN_0165d81c @ 0165d81c size=400 calls_out=3 calls_in=1
// strings: 

void FUN_0165d81c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint local_1c0 [17];
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  undefined1 auStack_170 [112];
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  byte local_f0;
  uint local_e8 [16];
  undefined1 auStack_a8 [112];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  FUN_01bed93e(&local_200,0,0x40);
  FUN_01bed4e2(local_1c0,param_2,0xd8);
  FUN_01bed93e(local_e8,0,0x40);
  uVar4 = (uint)local_f0;
  puVar3 = auStack_170;
  puVar3[uVar4] = 0x80;
  uVar5 = uVar4 << 0x1b | ((local_1c0[0x10] << 10 | uVar4 << 3) >> 8 & 0xff) << 0x10 |
          ((local_1c0[0x10] & 0x3fffff) >> 6 & 0xff) << 8 | (local_1c0[0x10] & 0x3fffff) >> 0xe;
  uVar6 = (local_1c0[0x10] >> 0x16) << 0x18 |
          ((uStack_17c << 10 | local_1c0[0x10] >> 0x16) >> 8 & 0xff) << 0x10 |
          ((uStack_17c & 0x3fffff) >> 6 & 0xff) << 8 | (uStack_17c & 0x3fffff) >> 0xe;
  uVar7 = (uStack_17c >> 0x16) << 0x18 |
          ((uStack_178 << 10 | uStack_17c >> 0x16) >> 8 & 0xff) << 0x10 |
          ((uStack_178 & 0x3fffff) >> 6 & 0xff) << 8 | (uStack_178 & 0x3fffff) >> 0xe;
  uVar8 = (uStack_178 >> 0x16) << 0x18 |
          ((uStack_174 << 10 | uStack_178 >> 0x16) >> 8 & 0xff) << 0x10 |
          ((uStack_174 & 0x3fffff) >> 6 & 0xff) << 8 | (uStack_174 & 0x3fffff) >> 0xe;
  if ((uVar4 == 0x7f) ||
     (FUN_01bed93e(auStack_170 + uVar4 + 1,0,uVar4 ^ 0x7f), (~uVar4 & 0x70) == 0)) {
    FUN_0196edfc(local_1c0,puVar3,1);
    puVar3 = auStack_a8;
    FUN_01bed93e(puVar3,0,0x70);
    local_38 = uVar8;
    local_34 = uVar7;
    local_30 = uVar6;
    local_2c = uVar5;
  }
  else {
    local_100 = uVar8;
    local_fc = uVar7;
    local_f8 = uVar6;
    local_f4 = uVar5;
  }
  FUN_0196edfc(local_1c0,puVar3,1);
  iVar1 = 0;
  do {
    uVar5 = *(uint *)((int)local_1c0 + iVar1);
    uVar4 = *(uint *)((int)local_1c0 + iVar1 + 4);
    *(uint *)((int)local_e8 + iVar1) =
         uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
    iVar2 = iVar1 + 8;
    *(uint *)((int)local_e8 + iVar1 + 4) =
         uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
    iVar1 = iVar2;
  } while (iVar2 != 0x40);
  local_200 = local_e8[0];
  uStack_1fc = local_e8[1];
  uStack_1f8 = local_e8[2];
  uStack_1f4 = local_e8[3];
  uStack_1f0 = local_e8[4];
  local_1ec = local_e8[5];
  uStack_1e8 = local_e8[6];
  uStack_1e4 = local_e8[7];
  uStack_1e0 = local_e8[8];
  uStack_1dc = local_e8[9];
  local_1d8 = local_e8[10];
  uStack_1d4 = local_e8[0xb];
  uStack_1d0 = local_e8[0xc];
  uStack_1cc = local_e8[0xd];
  uStack_1c8 = local_e8[0xe];
  uStack_1c4 = local_e8[0xf];
  FUN_01bed4e2(param_1,&local_200,0x40);
  return;
}

