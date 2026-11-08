// FUN_0189b378 @ 0189b378 size=612 calls_out=10 calls_in=0
// strings: 

void FUN_0189b378(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_650 [248];
  undefined1 auStack_558 [248];
  uint local_460;
  uint uStack_45c;
  uint uStack_458;
  uint uStack_454;
  uint local_450;
  uint local_44c;
  uint local_448;
  uint local_444 [129];
  undefined1 auStack_240 [256];
  undefined1 auStack_140 [264];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar2 = 0x80;
  if (param_4 != 0) {
    iVar2 = 0x100;
  }
  if (iVar2 == param_3 * 8) {
    FUN_01bed93e(&local_450,0,0xf4);
    uVar1 = 1;
    if ((DAT_01d53480 & 4) == 0) {
      uVar1 = DAT_01d53480 & 1 ^ 3;
    }
    if (uVar1 == 1) {
      iVar2 = FUN_01bd8d80(param_2,iVar2,&local_450);
    }
    else if (uVar1 == 2) {
      iVar2 = FUN_01bda430(param_2,iVar2);
    }
    else {
      iVar2 = FUN_01bcf2c8(param_2,iVar2);
    }
    if (iVar2 == 0) {
      FUN_01bed4e2(auStack_558,&local_450,0xf4);
      FUN_01bed4e2(auStack_650,auStack_558,0xf4);
      local_444[0] = 0;
      local_448 = 0;
      local_44c = 0;
      local_450 = 0;
      uVar1 = 1;
      if ((DAT_01d53480 & 4) == 0) {
        uVar1 = DAT_01d53480 & 1 ^ 3;
      }
      if (uVar1 == 3) {
        FUN_01bcf57c(&local_450,&local_460,auStack_650);
      }
      else if (uVar1 == 2) {
        FUN_01bda190(&local_450,&local_460,auStack_650);
      }
      else {
        FUN_01bd8f20(&local_450,&local_460,auStack_650);
      }
      uVar5 = uStack_458 << 0x18 | (uStack_458 >> 8 & 0xff) << 0x10 |
              (uStack_458 >> 0x10 & 0xff) << 8 | uStack_458 >> 0x18;
      uVar4 = uStack_45c << 0x18 | (uStack_45c >> 8 & 0xff) << 0x10 |
              (uStack_45c >> 0x10 & 0xff) << 8 | uStack_45c >> 0x18;
      uVar1 = local_460 << 0x18 | (local_460 >> 8 & 0xff) << 0x10 | (local_460 >> 0x10 & 0xff) << 8
              | local_460 >> 0x18;
      uVar3 = uStack_454 << 0x18 | (uStack_454 >> 8 & 0xff) << 0x10 |
              (uStack_454 >> 0x10 & 0xff) << 8 | uStack_454 >> 0x18;
      local_38 = uVar4;
      local_34 = uVar1;
      local_30 = uVar3;
      local_2c = uVar5;
      FUN_01bed93e(&local_450,0,0x100);
      iVar2 = 1;
      if ((DAT_01d53480 & 1) == 0) {
        iVar2 = 2;
      }
      if ((DAT_01d53480 & 0x20) != 0) {
        iVar2 = 0;
      }
      if (iVar2 == 2) {
        local_444[0] = uVar5 << 1 | (uStack_454 & 0xff) >> 7;
        local_448 = uVar3 << 1 | (local_460 & 0xff) >> 7;
        local_450 = uVar4 << 1 | (uStack_458 & 0xff) >> 7;
        local_44c = (uVar1 << 1 | (uStack_45c & 0xff) >> 7) ^ (int)uVar1 >> 0x1f & 0xc2000000U;
      }
      else if (iVar2 == 1) {
        FUN_01bdbfc0(&local_450,&local_38);
      }
      else {
        FUN_01bd9210(&local_450,&local_38);
      }
      FUN_01bed4e2(auStack_240,&local_450,0x100);
      FUN_01bed4e2(auStack_140,auStack_558,0xf4);
      FUN_01bed4e2(local_444,auStack_240,0x200);
      *param_1 = 0;
      FUN_01bed4e2(param_1 + 1,&local_450,0x20c);
      return;
    }
  }
  *param_1 = 2;
  return;
}

