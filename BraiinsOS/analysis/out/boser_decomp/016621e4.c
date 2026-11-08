// FUN_016621e4 @ 016621e4 size=508 calls_out=3 calls_in=1
// strings: 

void FUN_016621e4(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint local_168 [8];
  undefined1 auStack_148 [64];
  undefined1 local_108;
  uint local_100 [6];
  uint local_e8;
  uint local_e4;
  undefined1 auStack_c8 [56];
  uint local_90;
  uint local_8c;
  byte local_88;
  uint local_80 [6];
  undefined1 auStack_68 [56];
  uint local_30;
  uint local_2c;
  
  FUN_01bed93e(&uStack_1a8,0,0x40);
  if (param_3 < 0x41) {
    FUN_01bed4e2(&uStack_1a8,param_2,param_3);
  }
  else {
    local_168[1] = 0;
    local_168[0] = 0;
    FUN_01bed93e(auStack_148,0,0x41);
    local_168[0] = param_3 >> 6;
    local_168[6] = 0xc3d2e1f0;
    local_168[5] = 0x10325476;
    local_168[1] = 0;
    local_168[4] = 0x98badcfe;
    local_168[3] = 0xefcdab89;
    local_168[2] = 0x67452301;
    FUN_0196c428(local_168 + 2,param_2);
    FUN_01bed4e2(auStack_148,param_2 + (param_3 & 0x7fffffc0),param_3 & 0x3f);
    local_108 = (undefined1)(param_3 & 0x3f);
    FUN_01bed93e(local_100,0,0x14);
    FUN_01bed4e2(&local_e8,local_168,0x68);
    uVar4 = (uint)local_88;
    local_80[0] = local_168[2];
    local_80[1] = local_168[3];
    local_80[2] = local_168[4];
    local_80[3] = local_168[5];
    local_80[4] = local_168[6];
    puVar2 = auStack_c8;
    puVar2[uVar4] = 0x80;
    uVar5 = uVar4 << 0x1b | ((local_e8 << 9 | uVar4 << 3) >> 8 & 0xff) << 0x10 |
            ((local_e8 & 0x7fffff) >> 7 & 0xff) << 8 | (local_e8 & 0x7fffff) >> 0xf;
    uVar3 = (local_e8 >> 0x17) << 0x18 | ((local_e4 << 9 | local_e8 >> 0x17) >> 8 & 0xff) << 0x10 |
            ((local_e4 & 0x7fffff) >> 7 & 0xff) << 8 | (local_e4 & 0x7fffff) >> 0xf;
    if ((uVar4 == 0x3f) || (FUN_01bed93e(auStack_c8 + uVar4 + 1,0), (~uVar4 & 0x38) == 0)) {
      FUN_0196c428(local_80,puVar2,1);
      puVar2 = auStack_68;
      FUN_01bed93e(puVar2,0,0x38);
      local_30 = uVar3;
      local_2c = uVar5;
    }
    else {
      local_90 = uVar3;
      local_8c = uVar5;
    }
    FUN_0196c428(local_80,puVar2,1);
    iVar1 = 0;
    do {
      uVar3 = local_80[iVar1];
      local_100[iVar1] =
           uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18
      ;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 5);
    uStack_1a8 = local_100[0];
    uStack_1a4 = local_100[1];
    uStack_1a0 = local_100[2];
    uStack_19c = local_100[3];
    uStack_198 = local_100[4];
  }
  FUN_01bed4e2(param_1,&uStack_1a8,0x40);
  return;
}

