// FUN_01bcf684 @ 01bcf684 size=644 calls_out=7 calls_in=1
// strings: 

undefined8 FUN_01bcf684(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_2a4;
  uint local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 local_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined1 auStack_24c [480];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_3 != 0) {
    FUN_01bcedd4(auStack_24c,param_4);
    FUN_01bced98(auStack_6c,param_5,0x10);
    FUN_01bced98(auStack_5c,param_5,0x10);
    FUN_01bced98(&local_2a0,auStack_60,4);
    uVar4 = local_2a0 << 0x18 | (local_2a0 >> 8 & 0xff) << 0x10 | (local_2a0 >> 0x10 & 0xff) << 8 |
            local_2a0 >> 0x18;
    while( true ) {
      local_2a0 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                  uVar4 >> 0x18;
      FUN_01bced98(auStack_60,&local_2a0,4);
      uVar2 = uVar4 + 1;
      local_2a0 = uVar2 * 0x1000000 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
                  uVar2 >> 0x18;
      FUN_01bced98(auStack_50,&local_2a0,4);
      uVar2 = param_3;
      if (1 < param_3) {
        uVar2 = 2;
      }
      FUN_01bcf1d8(&local_28c,auStack_6c,uVar2);
      FUN_01bce9e8(auStack_24c,*(undefined4 *)(param_4 + 0xf0),&local_28c);
      local_26c = local_28c;
      local_268 = uStack_288;
      local_264 = uStack_284;
      local_260 = uStack_280;
      local_25c = local_27c;
      local_258 = uStack_278;
      local_254 = uStack_274;
      local_250 = uStack_270;
      FUN_01bcec60(&local_26c);
      local_29c = local_26c;
      local_298 = local_264;
      local_294 = local_25c;
      local_290 = local_254;
      FUN_01bcef2c(auStack_4c,&local_29c);
      if (param_3 != 1) {
        local_29c = local_268;
        local_298 = local_260;
        local_294 = local_258;
        local_290 = local_250;
        FUN_01bcef2c(auStack_3c,&local_29c);
      }
      iVar5 = 0;
      if (param_3 == 1) {
        iVar3 = 0x10;
      }
      else {
        iVar3 = 0x20;
      }
      do {
        iVar6 = 0;
        do {
          FUN_01bced98(&local_2a4,param_1 + iVar5 + iVar6,4);
          FUN_01bced98(&local_2a0,auStack_4c + iVar6 + iVar5,4);
          iVar1 = param_2 + iVar5 + iVar6;
          iVar6 = iVar6 + 4;
          local_2a4 = local_2a4 ^ local_2a0;
          FUN_01bced98(iVar1,&local_2a4,4);
        } while (iVar6 != 0x10);
        iVar5 = iVar5 + 0x10;
      } while (iVar3 != iVar5);
      param_3 = param_3 - uVar2;
      if (param_3 == 0) break;
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      uVar4 = uVar4 + 2;
    }
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

